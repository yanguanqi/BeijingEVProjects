/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "geometry3d/geometry3dextension/multigeometry3dextension.h"
namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Geometry3D_SubMeshData_vertexs( void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::SubMeshData* ptrNativeObject = (EarthView::World::Geometry3D::SubMeshData*) pObjectXXXX;
				EarthView::World::Geometry3D::CVertexVector &objXXXX = ptrNativeObject->vertexs;
				EarthView::World::Geometry3D::CVertexVector *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Geometry3D_SubMeshData_vertexs( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Geometry3D::SubMeshData*)pObjectXXXX)->vertexs = *(EarthView::World::Geometry3D::CVertexVector*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Geometry3D_SubMeshData_existPosition( void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::SubMeshData* ptrNativeObject = (EarthView::World::Geometry3D::SubMeshData*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->existPosition;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Geometry3D_SubMeshData_existPosition( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Geometry3D::SubMeshData*)pObjectXXXX)->existPosition = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Geometry3D_SubMeshData_existNormal( void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::SubMeshData* ptrNativeObject = (EarthView::World::Geometry3D::SubMeshData*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->existNormal;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Geometry3D_SubMeshData_existNormal( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Geometry3D::SubMeshData*)pObjectXXXX)->existNormal = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Geometry3D_SubMeshData_existColor( void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::SubMeshData* ptrNativeObject = (EarthView::World::Geometry3D::SubMeshData*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->existColor;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Geometry3D_SubMeshData_existColor( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Geometry3D::SubMeshData*)pObjectXXXX)->existColor = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Geometry3D_SubMeshData_existTextureCoord( void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::SubMeshData* ptrNativeObject = (EarthView::World::Geometry3D::SubMeshData*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->existTextureCoord;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Geometry3D_SubMeshData_existTextureCoord( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Geometry3D::SubMeshData*)pObjectXXXX)->existTextureCoord = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Geometry3D_SubMeshData_indices( void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::SubMeshData* ptrNativeObject = (EarthView::World::Geometry3D::SubMeshData*) pObjectXXXX;
				EarthView::World::Geometry3D::CIndexVector &objXXXX = ptrNativeObject->indices;
				EarthView::World::Geometry3D::CIndexVector *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Geometry3D_SubMeshData_indices( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Geometry3D::SubMeshData*)pObjectXXXX)->indices = *(EarthView::World::Geometry3D::CIndexVector*)value;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Geometry3D_SubMeshData_operationType( void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::SubMeshData* ptrNativeObject = (EarthView::World::Geometry3D::SubMeshData*) pObjectXXXX;
				EarthView::World::Graphic::CRenderOperation::OperationType objXXXX = ptrNativeObject->operationType;
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Geometry3D_SubMeshData_operationType( void *pObjectXXXX, int  value )
			{
				((EarthView::World::Geometry3D::SubMeshData*)pObjectXXXX)->operationType = (EarthView::World::Graphic::CRenderOperation::OperationType)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Geometry3D_SubMeshData_material( void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::SubMeshData* ptrNativeObject = (EarthView::World::Geometry3D::SubMeshData*) pObjectXXXX;
				EarthView::World::Graphic::CMaterialPtr &objXXXX = ptrNativeObject->material;
				EarthView::World::Graphic::CMaterialPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Geometry3D_SubMeshData_material( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Geometry3D::SubMeshData*)pObjectXXXX)->material = *(EarthView::World::Graphic::CMaterialPtr*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Geometry3D_SubMeshData_matrix( void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::SubMeshData* ptrNativeObject = (EarthView::World::Geometry3D::SubMeshData*) pObjectXXXX;
				EarthView::World::Spatial::Math::CMatrix4 &objXXXX = ptrNativeObject->matrix;
				EarthView::World::Spatial::Math::CMatrix4 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Geometry3D_SubMeshData_matrix( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Geometry3D::SubMeshData*)pObjectXXXX)->matrix = *(EarthView::World::Spatial::Math::CMatrix4*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Geometry3D_CSubMeshDataVector_OperatorIndex_SubMeshData_ev_size_t(void *pObjXXXX, _in ev_uint64  index )
			{
				EarthView::World::Geometry3D::CSubMeshDataVector& objYYYY = *(EarthView::World::Geometry3D::CSubMeshDataVector*) pObjXXXX;
				EarthView::World::Geometry3D::SubMeshData& objXXXX = objYYYY[index];
				EarthView::World::Geometry3D::SubMeshData *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Geometry3D_CSubMeshDataVector_getSubMeshData_SubMeshData_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Geometry3D::CSubMeshDataVector* ptrNativeObject = (EarthView::World::Geometry3D::CSubMeshDataVector*) pObjectXXXX;
				EarthView::World::Geometry3D::SubMeshData& objXXXX = ptrNativeObject->getSubMeshData(pos);
				EarthView::World::Geometry3D::SubMeshData *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CSubMeshDataVector_addSubMeshData_void_SubMeshData(void *pObjectXXXX, _in const void* subMeshData )
			{
				EarthView::World::Geometry3D::CSubMeshDataVector* ptrNativeObject = (EarthView::World::Geometry3D::CSubMeshDataVector*) pObjectXXXX;
				ptrNativeObject->addSubMeshData(*(EarthView::World::Geometry3D::SubMeshData*)subMeshData);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CSubMeshDataVector_insertSubMeshData_void_ev_size_t_SubMeshData(void *pObjectXXXX, _in ev_uint64  pos, _in const void* subMeshData )
			{
				EarthView::World::Geometry3D::CSubMeshDataVector* ptrNativeObject = (EarthView::World::Geometry3D::CSubMeshDataVector*) pObjectXXXX;
				ptrNativeObject->insertSubMeshData(pos, *(EarthView::World::Geometry3D::SubMeshData*)subMeshData);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CSubMeshDataVector_removeSubMeshData_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Geometry3D::CSubMeshDataVector* ptrNativeObject = (EarthView::World::Geometry3D::CSubMeshDataVector*) pObjectXXXX;
				ptrNativeObject->removeSubMeshData(pos);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CSubMeshDataVector_removeAllSubMeshDatas_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CSubMeshDataVector* ptrNativeObject = (EarthView::World::Geometry3D::CSubMeshDataVector*) pObjectXXXX;
				ptrNativeObject->removeAllSubMeshDatas();
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Geometry3D_CSubMeshDataVector_getCapacity_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CSubMeshDataVector* ptrNativeObject = (EarthView::World::Geometry3D::CSubMeshDataVector*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getCapacity();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CSubMeshDataVector_setCapacity_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Geometry3D::CSubMeshDataVector* ptrNativeObject = (EarthView::World::Geometry3D::CSubMeshDataVector*) pObjectXXXX;
				ptrNativeObject->setCapacity(count);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Geometry3D_CSubMeshDataVector_getCount_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CSubMeshDataVector* ptrNativeObject = (EarthView::World::Geometry3D::CSubMeshDataVector*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getCount();
				return objXXXX;
			}
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CRenderableGeometryExtensionListener_preRender_ev_bool_CSceneManager_CRenderSystem_CRenderable_Callback)(_in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys, _in EarthView::World::Graphic::CRenderable* renderable);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CRenderableGeometryExtensionListener_postRender_void_CSceneManager_CRenderSystem_CRenderable_Callback)(_in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys, _in EarthView::World::Graphic::CRenderable* renderable);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CRenderableGeometryExtensionListener_destroyed_void_CRenderable_Callback)(_in EarthView::World::Graphic::CRenderable* renderable);
			class CRenderableGeometryExtensionListenerProxy : public EarthView::World::Geometry3D::CRenderableGeometryExtensionListener
			{
			private:
				EarthView_World_Geometry3D_CRenderableGeometryExtensionListener_preRender_ev_bool_CSceneManager_CRenderSystem_CRenderable_Callback* m_EarthView_World_Geometry3D_CRenderableGeometryExtensionListener_preRender_ev_bool_CSceneManager_CRenderSystem_CRenderable_Callback;
				EarthView_World_Geometry3D_CRenderableGeometryExtensionListener_postRender_void_CSceneManager_CRenderSystem_CRenderable_Callback* m_EarthView_World_Geometry3D_CRenderableGeometryExtensionListener_postRender_void_CSceneManager_CRenderSystem_CRenderable_Callback;
				EarthView_World_Geometry3D_CRenderableGeometryExtensionListener_destroyed_void_CRenderable_Callback* m_EarthView_World_Geometry3D_CRenderableGeometryExtensionListener_destroyed_void_CRenderable_Callback;
			public:
				CRenderableGeometryExtensionListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CRenderableGeometryExtensionListener(pList)
				{
					m_EarthView_World_Geometry3D_CRenderableGeometryExtensionListener_preRender_ev_bool_CSceneManager_CRenderSystem_CRenderable_Callback = NULL;
					m_EarthView_World_Geometry3D_CRenderableGeometryExtensionListener_postRender_void_CSceneManager_CRenderSystem_CRenderable_Callback = NULL;
					m_EarthView_World_Geometry3D_CRenderableGeometryExtensionListener_destroyed_void_CRenderable_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Geometry3D_CRenderableGeometryExtensionListener_preRender_ev_bool_CSceneManager_CRenderSystem_CRenderable(EarthView_World_Geometry3D_CRenderableGeometryExtensionListener_preRender_ev_bool_CSceneManager_CRenderSystem_CRenderable_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CRenderableGeometryExtensionListener_preRender_ev_bool_CSceneManager_CRenderSystem_CRenderable_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CRenderableGeometryExtensionListener_postRender_void_CSceneManager_CRenderSystem_CRenderable(EarthView_World_Geometry3D_CRenderableGeometryExtensionListener_postRender_void_CSceneManager_CRenderSystem_CRenderable_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CRenderableGeometryExtensionListener_postRender_void_CSceneManager_CRenderSystem_CRenderable_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CRenderableGeometryExtensionListener_destroyed_void_CRenderable(EarthView_World_Geometry3D_CRenderableGeometryExtensionListener_destroyed_void_CRenderable_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CRenderableGeometryExtensionListener_destroyed_void_CRenderable_Callback = pCallback;
				}
				virtual ev_bool preRender(_in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys, _in EarthView::World::Graphic::CRenderable* renderable)
				{
					if(m_EarthView_World_Geometry3D_CRenderableGeometryExtensionListener_preRender_ev_bool_CSceneManager_CRenderSystem_CRenderable_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CRenderableGeometryExtensionListener_preRender_ev_bool_CSceneManager_CRenderSystem_CRenderable_Callback(sm, rsys, renderable);
						return returnValue;
					}
					else
						return this->CRenderableGeometryExtensionListener::preRender(sm, rsys, renderable);
				}
				virtual void postRender(_in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys, _in EarthView::World::Graphic::CRenderable* renderable)
				{
					if(m_EarthView_World_Geometry3D_CRenderableGeometryExtensionListener_postRender_void_CSceneManager_CRenderSystem_CRenderable_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CRenderableGeometryExtensionListener_postRender_void_CSceneManager_CRenderSystem_CRenderable_Callback(sm, rsys, renderable);
					}
					else
						return this->CRenderableGeometryExtensionListener::postRender(sm, rsys, renderable);
				}
				virtual void destroyed(_in EarthView::World::Graphic::CRenderable* renderable)
				{
					if(m_EarthView_World_Geometry3D_CRenderableGeometryExtensionListener_destroyed_void_CRenderable_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CRenderableGeometryExtensionListener_destroyed_void_CRenderable_Callback(renderable);
					}
					else
						return this->CRenderableGeometryExtensionListener::destroyed(renderable);
				}
			};
			REGISTER_FACTORY_CLASS(CRenderableGeometryExtensionListenerProxy);
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CRenderableGeometryExtensionListener_preRender_ev_bool_CSceneManager_CRenderSystem_CRenderable(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys, _in EarthView::World::Graphic::CRenderable* renderable )
			{
				EarthView::World::Geometry3D::CRenderableGeometryExtensionListener* ptrNativeObject = (EarthView::World::Geometry3D::CRenderableGeometryExtensionListener*) pObjectXXXX;
				if (dynamic_cast<CRenderableGeometryExtensionListenerProxy*>((EarthView::World::Geometry3D::CRenderableGeometryExtensionListener*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CRenderableGeometryExtensionListener::preRender(sm, rsys, renderable);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->preRender(sm, rsys, renderable);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CRenderableGeometryExtensionListener_preRender_ev_bool_CSceneManager_CRenderSystem_CRenderable( void *pObjectXXXX, EarthView_World_Geometry3D_CRenderableGeometryExtensionListener_preRender_ev_bool_CSceneManager_CRenderSystem_CRenderable_Callback* pCallback )
			{
				CRenderableGeometryExtensionListenerProxy* ptr = dynamic_cast<CRenderableGeometryExtensionListenerProxy*>((EarthView::World::Geometry3D::CRenderableGeometryExtensionListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CRenderableGeometryExtensionListener_preRender_ev_bool_CSceneManager_CRenderSystem_CRenderable(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CRenderableGeometryExtensionListener_preRender_ev_bool_CSceneManager_CRenderSystem_CRenderable_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys, _in EarthView::World::Graphic::CRenderable* renderable )
			{
				EarthView::World::Geometry3D::CRenderableGeometryExtensionListener* ptrNativeObject = (EarthView::World::Geometry3D::CRenderableGeometryExtensionListener*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CRenderableGeometryExtensionListener::preRender(sm, rsys, renderable);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CRenderableGeometryExtensionListener_postRender_void_CSceneManager_CRenderSystem_CRenderable(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys, _in EarthView::World::Graphic::CRenderable* renderable )
			{
				EarthView::World::Geometry3D::CRenderableGeometryExtensionListener* ptrNativeObject = (EarthView::World::Geometry3D::CRenderableGeometryExtensionListener*) pObjectXXXX;
				if (dynamic_cast<CRenderableGeometryExtensionListenerProxy*>((EarthView::World::Geometry3D::CRenderableGeometryExtensionListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CRenderableGeometryExtensionListener::postRender(sm, rsys, renderable);
				else
					ptrNativeObject->postRender(sm, rsys, renderable);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CRenderableGeometryExtensionListener_postRender_void_CSceneManager_CRenderSystem_CRenderable( void *pObjectXXXX, EarthView_World_Geometry3D_CRenderableGeometryExtensionListener_postRender_void_CSceneManager_CRenderSystem_CRenderable_Callback* pCallback )
			{
				CRenderableGeometryExtensionListenerProxy* ptr = dynamic_cast<CRenderableGeometryExtensionListenerProxy*>((EarthView::World::Geometry3D::CRenderableGeometryExtensionListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CRenderableGeometryExtensionListener_postRender_void_CSceneManager_CRenderSystem_CRenderable(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CRenderableGeometryExtensionListener_postRender_void_CSceneManager_CRenderSystem_CRenderable_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys, _in EarthView::World::Graphic::CRenderable* renderable )
			{
				EarthView::World::Geometry3D::CRenderableGeometryExtensionListener* ptrNativeObject = (EarthView::World::Geometry3D::CRenderableGeometryExtensionListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CRenderableGeometryExtensionListener::postRender(sm, rsys, renderable);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CRenderableGeometryExtensionListener_destroyed_void_CRenderable(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable* renderable )
			{
				EarthView::World::Geometry3D::CRenderableGeometryExtensionListener* ptrNativeObject = (EarthView::World::Geometry3D::CRenderableGeometryExtensionListener*) pObjectXXXX;
				if (dynamic_cast<CRenderableGeometryExtensionListenerProxy*>((EarthView::World::Geometry3D::CRenderableGeometryExtensionListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CRenderableGeometryExtensionListener::destroyed(renderable);
				else
					ptrNativeObject->destroyed(renderable);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CRenderableGeometryExtensionListener_destroyed_void_CRenderable( void *pObjectXXXX, EarthView_World_Geometry3D_CRenderableGeometryExtensionListener_destroyed_void_CRenderable_Callback* pCallback )
			{
				CRenderableGeometryExtensionListenerProxy* ptr = dynamic_cast<CRenderableGeometryExtensionListenerProxy*>((EarthView::World::Geometry3D::CRenderableGeometryExtensionListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CRenderableGeometryExtensionListener_destroyed_void_CRenderable(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CRenderableGeometryExtensionListener_destroyed_void_CRenderable_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable* renderable )
			{
				EarthView::World::Geometry3D::CRenderableGeometryExtensionListener* ptrNativeObject = (EarthView::World::Geometry3D::CRenderableGeometryExtensionListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CRenderableGeometryExtensionListener::destroyed(renderable);
			}
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_appendGeoObject_ev_bool_CGeoObject_Callback)(_in EarthView::World::Spatial::CGeoObject* ref_geoObject);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_removeGeoObject_ev_bool_CGeoObject_Callback)(_in EarthView::World::Spatial::CGeoObject* geoObject);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_removeAllGeoObjects_void_Callback)();
			typedef EarthView::World::Spatial::CGeoObject*  ( _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_getGeoObject_CGeoObject_ev_uint32_Callback)(_in ev_uint32 index);
			typedef ev_uint64  ( _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_getGeoObjectCount_ev_uint64_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_getDrawWireBoundingBox_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_setDrawWireBoundingBox_void_ev_bool_Callback)(_in ev_bool isdraw);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_build_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_build_void_CSubMeshDataVector_Callback)(_inout void* subMeshData);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_render_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_derender_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_isRendering_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_setDenseInterpolation_void_ev_bool_Callback)(_in ev_bool dense);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_updateLabel_void_ev_bool_ev_bool_ev_bool_ev_bool_CCamera_Callback)(_in ev_bool resetTextStyle, _in ev_bool derenderTxt, _in ev_bool reCreate, _in ev_bool attachLabel, _in EarthView::World::Graphic::CCamera* pCamera);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_updateByCamera_void_CCamera_Callback)(_in EarthView::World::Graphic::CCamera* pCamera);
			typedef ev_real64  ( _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelVisibleDistance_ev_real64_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelVisibleDistance_void_ev_real64_Callback)(_in ev_real64 dis);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelProjOffsetMaxAngle_void_Real_Callback)(_in Real angle);
			typedef Real  ( _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelProjOffsetMaxAngle_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelProjOffsetEnable_void_ev_bool_Callback)(_in ev_bool useProjOffset);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelProjOffsetEnable_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelProjOffset_void_Real_Callback)(_in Real offset);
			typedef Real  ( _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelProjOffset_Real_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_updateMaterial_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_setVisibilityFilter_ev_bool_ev_bool_IntVector_Callback)(_in ev_bool visible, _in const void* ids);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_setObjectVisibility_ev_bool_ev_bool_CGeoObject_Callback)(_in ev_bool visible, _in EarthView::World::Spatial::CGeoObject* ref_geoObject);
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_getNode_CNode_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_isLoaded_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_isAttached_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_load_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_unload_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_attachToNode_ev_bool_CNode_Callback)(_in EarthView::World::Graphic::CNode* n);
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_detachFromNode_CNode_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_attachToScene_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_detachFromScene_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_setUserData_void_CFeatureUserData_Callback)(_inout void* userData);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_setSelectable_void_ev_bool_Callback)(_in ev_bool selectable);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_getSelectable_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_update_ev_bool_Callback)();
			typedef EarthView::World::Spatial3D::Atlas::IGlobeLayer*  ( _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLayer_IGlobeLayer_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_getDataset_IDataset_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_getID_ev_uint32_Callback)();
			typedef char*  ( _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_getName_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_setMatrix_void_CMatrix4_Callback)(_in const void* m);
			typedef void*  ( _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_getMatrix_CMatrix4_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback)(_in ev_real64 latitude, _in ev_real64 longitude, _in ev_real64 altitude, _in const void* scale, _in const void* qua);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback)(_out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude, _out void* scale, _out void* qua);
			class CMultiGeometry3DExtensionProxy : public EarthView::World::Geometry3D::CMultiGeometry3DExtension
			{
			private:
				EarthView_World_Geometry3D_CMultiGeometry3DExtension_appendGeoObject_ev_bool_CGeoObject_Callback* m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_appendGeoObject_ev_bool_CGeoObject_Callback;
				EarthView_World_Geometry3D_CMultiGeometry3DExtension_removeGeoObject_ev_bool_CGeoObject_Callback* m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_removeGeoObject_ev_bool_CGeoObject_Callback;
				EarthView_World_Geometry3D_CMultiGeometry3DExtension_removeAllGeoObjects_void_Callback* m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_removeAllGeoObjects_void_Callback;
				EarthView_World_Geometry3D_CMultiGeometry3DExtension_getGeoObject_CGeoObject_ev_uint32_Callback* m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getGeoObject_CGeoObject_ev_uint32_Callback;
				EarthView_World_Geometry3D_CMultiGeometry3DExtension_getGeoObjectCount_ev_uint64_Callback* m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getGeoObjectCount_ev_uint64_Callback;
				EarthView_World_Geometry3D_CMultiGeometry3DExtension_getDrawWireBoundingBox_ev_bool_Callback* m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getDrawWireBoundingBox_ev_bool_Callback;
				EarthView_World_Geometry3D_CMultiGeometry3DExtension_setDrawWireBoundingBox_void_ev_bool_Callback* m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setDrawWireBoundingBox_void_ev_bool_Callback;
				EarthView_World_Geometry3D_CMultiGeometry3DExtension_build_void_Callback* m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_build_void_Callback;
				EarthView_World_Geometry3D_CMultiGeometry3DExtension_build_void_CSubMeshDataVector_Callback* m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_build_void_CSubMeshDataVector_Callback;
				EarthView_World_Geometry3D_CMultiGeometry3DExtension_render_void_Callback* m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_render_void_Callback;
				EarthView_World_Geometry3D_CMultiGeometry3DExtension_derender_void_Callback* m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_derender_void_Callback;
				EarthView_World_Geometry3D_CMultiGeometry3DExtension_isRendering_ev_bool_Callback* m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_isRendering_ev_bool_Callback;
				EarthView_World_Geometry3D_CMultiGeometry3DExtension_setVisible_void_ev_bool_Callback* m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setVisible_void_ev_bool_Callback;
				EarthView_World_Geometry3D_CMultiGeometry3DExtension_setDenseInterpolation_void_ev_bool_Callback* m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setDenseInterpolation_void_ev_bool_Callback;
				EarthView_World_Geometry3D_CMultiGeometry3DExtension_updateLabel_void_ev_bool_ev_bool_ev_bool_ev_bool_CCamera_Callback* m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_updateLabel_void_ev_bool_ev_bool_ev_bool_ev_bool_CCamera_Callback;
				EarthView_World_Geometry3D_CMultiGeometry3DExtension_updateByCamera_void_CCamera_Callback* m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_updateByCamera_void_CCamera_Callback;
				EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelVisibleDistance_ev_real64_Callback* m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelVisibleDistance_ev_real64_Callback;
				EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelVisibleDistance_void_ev_real64_Callback* m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelVisibleDistance_void_ev_real64_Callback;
				EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelProjOffsetMaxAngle_void_Real_Callback* m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelProjOffsetMaxAngle_void_Real_Callback;
				EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelProjOffsetMaxAngle_Real_Callback* m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelProjOffsetMaxAngle_Real_Callback;
				EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelProjOffsetEnable_void_ev_bool_Callback* m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelProjOffsetEnable_void_ev_bool_Callback;
				EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelProjOffsetEnable_ev_bool_Callback* m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelProjOffsetEnable_ev_bool_Callback;
				EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelProjOffset_void_Real_Callback* m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelProjOffset_void_Real_Callback;
				EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelProjOffset_Real_Callback* m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelProjOffset_Real_Callback;
				EarthView_World_Geometry3D_CMultiGeometry3DExtension_updateMaterial_ev_bool_Callback* m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_updateMaterial_ev_bool_Callback;
				EarthView_World_Geometry3D_CMultiGeometry3DExtension_setVisibilityFilter_ev_bool_ev_bool_IntVector_Callback* m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setVisibilityFilter_ev_bool_ev_bool_IntVector_Callback;
				EarthView_World_Geometry3D_CMultiGeometry3DExtension_setObjectVisibility_ev_bool_ev_bool_CGeoObject_Callback* m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setObjectVisibility_ev_bool_ev_bool_CGeoObject_Callback;
				EarthView_World_Geometry3D_CMultiGeometry3DExtension_getNode_CNode_Callback* m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getNode_CNode_Callback;
				EarthView_World_Geometry3D_CMultiGeometry3DExtension_isLoaded_ev_bool_Callback* m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_isLoaded_ev_bool_Callback;
				EarthView_World_Geometry3D_CMultiGeometry3DExtension_isAttached_ev_bool_Callback* m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_isAttached_ev_bool_Callback;
				EarthView_World_Geometry3D_CMultiGeometry3DExtension_load_ev_bool_Callback* m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_load_ev_bool_Callback;
				EarthView_World_Geometry3D_CMultiGeometry3DExtension_unload_ev_bool_Callback* m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_unload_ev_bool_Callback;
				EarthView_World_Geometry3D_CMultiGeometry3DExtension_attachToNode_ev_bool_CNode_Callback* m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_attachToNode_ev_bool_CNode_Callback;
				EarthView_World_Geometry3D_CMultiGeometry3DExtension_detachFromNode_CNode_Callback* m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_detachFromNode_CNode_Callback;
				EarthView_World_Geometry3D_CMultiGeometry3DExtension_attachToScene_ev_bool_Callback* m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_attachToScene_ev_bool_Callback;
				EarthView_World_Geometry3D_CMultiGeometry3DExtension_detachFromScene_ev_bool_Callback* m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_detachFromScene_ev_bool_Callback;
				EarthView_World_Geometry3D_CMultiGeometry3DExtension_setUserData_void_CFeatureUserData_Callback* m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setUserData_void_CFeatureUserData_Callback;
				EarthView_World_Geometry3D_CMultiGeometry3DExtension_setSelectable_void_ev_bool_Callback* m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setSelectable_void_ev_bool_Callback;
				EarthView_World_Geometry3D_CMultiGeometry3DExtension_getSelectable_ev_bool_Callback* m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getSelectable_ev_bool_Callback;
				EarthView_World_Geometry3D_CMultiGeometry3DExtension_update_ev_bool_Callback* m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_update_ev_bool_Callback;
				EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLayer_IGlobeLayer_Callback* m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLayer_IGlobeLayer_Callback;
				EarthView_World_Geometry3D_CMultiGeometry3DExtension_getDataset_IDataset_Callback* m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getDataset_IDataset_Callback;
				EarthView_World_Geometry3D_CMultiGeometry3DExtension_getID_ev_uint32_Callback* m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getID_ev_uint32_Callback;
				EarthView_World_Geometry3D_CMultiGeometry3DExtension_getName_EVString_Callback* m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getName_EVString_Callback;
				EarthView_World_Geometry3D_CMultiGeometry3DExtension_setMatrix_void_CMatrix4_Callback* m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setMatrix_void_CMatrix4_Callback;
				EarthView_World_Geometry3D_CMultiGeometry3DExtension_getMatrix_CMatrix4_Callback* m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getMatrix_CMatrix4_Callback;
				EarthView_World_Geometry3D_CMultiGeometry3DExtension_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback;
				EarthView_World_Geometry3D_CMultiGeometry3DExtension_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback;
			public:
				CMultiGeometry3DExtensionProxy(EarthView::World::Core::CNameValuePairList *pList) : CMultiGeometry3DExtension(pList)
				{
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_appendGeoObject_ev_bool_CGeoObject_Callback = NULL;
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_removeGeoObject_ev_bool_CGeoObject_Callback = NULL;
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_removeAllGeoObjects_void_Callback = NULL;
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getGeoObject_CGeoObject_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getGeoObjectCount_ev_uint64_Callback = NULL;
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getDrawWireBoundingBox_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setDrawWireBoundingBox_void_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_build_void_Callback = NULL;
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_build_void_CSubMeshDataVector_Callback = NULL;
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_render_void_Callback = NULL;
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_derender_void_Callback = NULL;
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_isRendering_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setVisible_void_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setDenseInterpolation_void_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_updateLabel_void_ev_bool_ev_bool_ev_bool_ev_bool_CCamera_Callback = NULL;
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_updateByCamera_void_CCamera_Callback = NULL;
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelVisibleDistance_ev_real64_Callback = NULL;
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelVisibleDistance_void_ev_real64_Callback = NULL;
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelProjOffsetMaxAngle_void_Real_Callback = NULL;
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelProjOffsetMaxAngle_Real_Callback = NULL;
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelProjOffsetEnable_void_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelProjOffsetEnable_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelProjOffset_void_Real_Callback = NULL;
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelProjOffset_Real_Callback = NULL;
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_updateMaterial_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setVisibilityFilter_ev_bool_ev_bool_IntVector_Callback = NULL;
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setObjectVisibility_ev_bool_ev_bool_CGeoObject_Callback = NULL;
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getNode_CNode_Callback = NULL;
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_isLoaded_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_isAttached_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_load_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_unload_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_attachToNode_ev_bool_CNode_Callback = NULL;
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_detachFromNode_CNode_Callback = NULL;
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_attachToScene_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_detachFromScene_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setUserData_void_CFeatureUserData_Callback = NULL;
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setSelectable_void_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getSelectable_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_update_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLayer_IGlobeLayer_Callback = NULL;
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getDataset_IDataset_Callback = NULL;
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getID_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getName_EVString_Callback = NULL;
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setMatrix_void_CMatrix4_Callback = NULL;
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getMatrix_CMatrix4_Callback = NULL;
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = NULL;
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_appendGeoObject_ev_bool_CGeoObject(EarthView_World_Geometry3D_CMultiGeometry3DExtension_appendGeoObject_ev_bool_CGeoObject_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_appendGeoObject_ev_bool_CGeoObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_removeGeoObject_ev_bool_CGeoObject(EarthView_World_Geometry3D_CMultiGeometry3DExtension_removeGeoObject_ev_bool_CGeoObject_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_removeGeoObject_ev_bool_CGeoObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_removeAllGeoObjects_void(EarthView_World_Geometry3D_CMultiGeometry3DExtension_removeAllGeoObjects_void_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_removeAllGeoObjects_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getGeoObject_CGeoObject_ev_uint32(EarthView_World_Geometry3D_CMultiGeometry3DExtension_getGeoObject_CGeoObject_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getGeoObject_CGeoObject_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getGeoObjectCount_ev_uint64(EarthView_World_Geometry3D_CMultiGeometry3DExtension_getGeoObjectCount_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getGeoObjectCount_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getDrawWireBoundingBox_ev_bool(EarthView_World_Geometry3D_CMultiGeometry3DExtension_getDrawWireBoundingBox_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getDrawWireBoundingBox_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setDrawWireBoundingBox_void_ev_bool(EarthView_World_Geometry3D_CMultiGeometry3DExtension_setDrawWireBoundingBox_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setDrawWireBoundingBox_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_build_void(EarthView_World_Geometry3D_CMultiGeometry3DExtension_build_void_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_build_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_build_void_CSubMeshDataVector(EarthView_World_Geometry3D_CMultiGeometry3DExtension_build_void_CSubMeshDataVector_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_build_void_CSubMeshDataVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_render_void(EarthView_World_Geometry3D_CMultiGeometry3DExtension_render_void_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_render_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_derender_void(EarthView_World_Geometry3D_CMultiGeometry3DExtension_derender_void_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_derender_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_isRendering_ev_bool(EarthView_World_Geometry3D_CMultiGeometry3DExtension_isRendering_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_isRendering_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setVisible_void_ev_bool(EarthView_World_Geometry3D_CMultiGeometry3DExtension_setVisible_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setVisible_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setDenseInterpolation_void_ev_bool(EarthView_World_Geometry3D_CMultiGeometry3DExtension_setDenseInterpolation_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setDenseInterpolation_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_updateLabel_void_ev_bool_ev_bool_ev_bool_ev_bool_CCamera(EarthView_World_Geometry3D_CMultiGeometry3DExtension_updateLabel_void_ev_bool_ev_bool_ev_bool_ev_bool_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_updateLabel_void_ev_bool_ev_bool_ev_bool_ev_bool_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_updateByCamera_void_CCamera(EarthView_World_Geometry3D_CMultiGeometry3DExtension_updateByCamera_void_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_updateByCamera_void_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelVisibleDistance_ev_real64(EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelVisibleDistance_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelVisibleDistance_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelVisibleDistance_void_ev_real64(EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelVisibleDistance_void_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelVisibleDistance_void_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelProjOffsetMaxAngle_void_Real(EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelProjOffsetMaxAngle_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelProjOffsetMaxAngle_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelProjOffsetMaxAngle_Real(EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelProjOffsetMaxAngle_Real_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelProjOffsetMaxAngle_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelProjOffsetEnable_void_ev_bool(EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelProjOffsetEnable_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelProjOffsetEnable_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelProjOffsetEnable_ev_bool(EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelProjOffsetEnable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelProjOffsetEnable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelProjOffset_void_Real(EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelProjOffset_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelProjOffset_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelProjOffset_Real(EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelProjOffset_Real_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelProjOffset_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_updateMaterial_ev_bool(EarthView_World_Geometry3D_CMultiGeometry3DExtension_updateMaterial_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_updateMaterial_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setVisibilityFilter_ev_bool_ev_bool_IntVector(EarthView_World_Geometry3D_CMultiGeometry3DExtension_setVisibilityFilter_ev_bool_ev_bool_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setVisibilityFilter_ev_bool_ev_bool_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setObjectVisibility_ev_bool_ev_bool_CGeoObject(EarthView_World_Geometry3D_CMultiGeometry3DExtension_setObjectVisibility_ev_bool_ev_bool_CGeoObject_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setObjectVisibility_ev_bool_ev_bool_CGeoObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getNode_CNode(EarthView_World_Geometry3D_CMultiGeometry3DExtension_getNode_CNode_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getNode_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_isLoaded_ev_bool(EarthView_World_Geometry3D_CMultiGeometry3DExtension_isLoaded_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_isLoaded_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_isAttached_ev_bool(EarthView_World_Geometry3D_CMultiGeometry3DExtension_isAttached_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_isAttached_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_load_ev_bool(EarthView_World_Geometry3D_CMultiGeometry3DExtension_load_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_load_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_unload_ev_bool(EarthView_World_Geometry3D_CMultiGeometry3DExtension_unload_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_unload_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_attachToNode_ev_bool_CNode(EarthView_World_Geometry3D_CMultiGeometry3DExtension_attachToNode_ev_bool_CNode_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_attachToNode_ev_bool_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_detachFromNode_CNode(EarthView_World_Geometry3D_CMultiGeometry3DExtension_detachFromNode_CNode_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_detachFromNode_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_attachToScene_ev_bool(EarthView_World_Geometry3D_CMultiGeometry3DExtension_attachToScene_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_attachToScene_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_detachFromScene_ev_bool(EarthView_World_Geometry3D_CMultiGeometry3DExtension_detachFromScene_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_detachFromScene_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setUserData_void_CFeatureUserData(EarthView_World_Geometry3D_CMultiGeometry3DExtension_setUserData_void_CFeatureUserData_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setUserData_void_CFeatureUserData_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setSelectable_void_ev_bool(EarthView_World_Geometry3D_CMultiGeometry3DExtension_setSelectable_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setSelectable_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getSelectable_ev_bool(EarthView_World_Geometry3D_CMultiGeometry3DExtension_getSelectable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getSelectable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_update_ev_bool(EarthView_World_Geometry3D_CMultiGeometry3DExtension_update_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_update_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLayer_IGlobeLayer(EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLayer_IGlobeLayer_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLayer_IGlobeLayer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getDataset_IDataset(EarthView_World_Geometry3D_CMultiGeometry3DExtension_getDataset_IDataset_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getDataset_IDataset_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getID_ev_uint32(EarthView_World_Geometry3D_CMultiGeometry3DExtension_getID_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getID_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getName_EVString(EarthView_World_Geometry3D_CMultiGeometry3DExtension_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setMatrix_void_CMatrix4(EarthView_World_Geometry3D_CMultiGeometry3DExtension_setMatrix_void_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setMatrix_void_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getMatrix_CMatrix4(EarthView_World_Geometry3D_CMultiGeometry3DExtension_getMatrix_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getMatrix_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(EarthView_World_Geometry3D_CMultiGeometry3DExtension_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(EarthView_World_Geometry3D_CMultiGeometry3DExtension_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = pCallback;
				}
				virtual ev_bool appendGeoObject(_in EarthView::World::Spatial::CGeoObject* ref_geoObject)
				{
					if(m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_appendGeoObject_ev_bool_CGeoObject_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_appendGeoObject_ev_bool_CGeoObject_Callback(ref_geoObject);
						return returnValue;
					}
					else
						return this->CMultiGeometry3DExtension::appendGeoObject(ref_geoObject);
				}
				virtual ev_bool removeGeoObject(_in EarthView::World::Spatial::CGeoObject* geoObject)
				{
					if(m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_removeGeoObject_ev_bool_CGeoObject_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_removeGeoObject_ev_bool_CGeoObject_Callback(geoObject);
						return returnValue;
					}
					else
						return this->CMultiGeometry3DExtension::removeGeoObject(geoObject);
				}
				virtual void removeAllGeoObjects()
				{
					if(m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_removeAllGeoObjects_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_removeAllGeoObjects_void_Callback();
					}
					else
						return this->CMultiGeometry3DExtension::removeAllGeoObjects();
				}
				virtual EarthView::World::Spatial::CGeoObject* getGeoObject(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getGeoObject_CGeoObject_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::CGeoObject* returnValue = m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getGeoObject_CGeoObject_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CMultiGeometry3DExtension::getGeoObject(index);
				}
				virtual ev_uint64 getGeoObjectCount() const
				{
					if(m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getGeoObjectCount_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getGeoObjectCount_ev_uint64_Callback();
						return returnValue;
					}
					else
						return this->CMultiGeometry3DExtension::getGeoObjectCount();
				}
				virtual ev_bool getDrawWireBoundingBox() const
				{
					if(m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getDrawWireBoundingBox_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getDrawWireBoundingBox_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CMultiGeometry3DExtension::getDrawWireBoundingBox();
				}
				virtual void setDrawWireBoundingBox(_in ev_bool isdraw)
				{
					if(m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setDrawWireBoundingBox_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setDrawWireBoundingBox_void_ev_bool_Callback(isdraw);
					}
					else
						return this->CMultiGeometry3DExtension::setDrawWireBoundingBox(isdraw);
				}
				virtual void build()
				{
					if(m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_build_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_build_void_Callback();
					}
					else
						return this->CMultiGeometry3DExtension::build();
				}
				virtual void build(_inout EarthView::World::Geometry3D::CSubMeshDataVector& subMeshData)
				{
					if(m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_build_void_CSubMeshDataVector_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_build_void_CSubMeshDataVector_Callback(&subMeshData);
					}
					else
						return this->CMultiGeometry3DExtension::build(subMeshData);
				}
				virtual void render()
				{
					if(m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_render_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_render_void_Callback();
					}
					else
						return this->CMultiGeometry3DExtension::render();
				}
				virtual void derender()
				{
					if(m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_derender_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_derender_void_Callback();
					}
					else
						return this->CMultiGeometry3DExtension::derender();
				}
				virtual ev_bool isRendering() const
				{
					if(m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_isRendering_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_isRendering_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CMultiGeometry3DExtension::isRendering();
				}
				virtual void setVisible(_in ev_bool visible)
				{
					if(m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setVisible_void_ev_bool_Callback(visible);
					}
					else
						return this->CMultiGeometry3DExtension::setVisible(visible);
				}
				virtual void setDenseInterpolation(_in ev_bool dense)
				{
					if(m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setDenseInterpolation_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setDenseInterpolation_void_ev_bool_Callback(dense);
					}
					else
						return this->CMultiGeometry3DExtension::setDenseInterpolation(dense);
				}
				virtual void setUserData(_inout EarthView::World::Spatial3D::CFeatureUserData& userData)
				{
					if(m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setUserData_void_CFeatureUserData_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setUserData_void_CFeatureUserData_Callback(&userData);
					}
					else
						return this->CMultiGeometry3DExtension::setUserData(userData);
				}
				virtual void setSelectable(_in ev_bool selectable)
				{
					if(m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setSelectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setSelectable_void_ev_bool_Callback(selectable);
					}
					else
						return this->CMultiGeometry3DExtension::setSelectable(selectable);
				}
				virtual void updateLabel(_in ev_bool resetTextStyle, _in ev_bool derenderTxt, _in ev_bool reCreate, _in ev_bool attachLabel, _in EarthView::World::Graphic::CCamera* pCamera)
				{
					if(m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_updateLabel_void_ev_bool_ev_bool_ev_bool_ev_bool_CCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_updateLabel_void_ev_bool_ev_bool_ev_bool_ev_bool_CCamera_Callback(resetTextStyle, derenderTxt, reCreate, attachLabel, pCamera);
					}
					else
						return this->CMultiGeometry3DExtension::updateLabel(resetTextStyle, derenderTxt, reCreate, attachLabel, pCamera);
				}
				virtual void updateByCamera(_in EarthView::World::Graphic::CCamera* pCamera)
				{
					if(m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_updateByCamera_void_CCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_updateByCamera_void_CCamera_Callback(pCamera);
					}
					else
						return this->CMultiGeometry3DExtension::updateByCamera(pCamera);
				}
				virtual ev_real64 getLabelVisibleDistance()
				{
					if(m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelVisibleDistance_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelVisibleDistance_ev_real64_Callback();
						return returnValue;
					}
					else
						return this->CMultiGeometry3DExtension::getLabelVisibleDistance();
				}
				virtual void setLabelVisibleDistance(_in ev_real64 dis)
				{
					if(m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelVisibleDistance_void_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelVisibleDistance_void_ev_real64_Callback(dis);
					}
					else
						return this->CMultiGeometry3DExtension::setLabelVisibleDistance(dis);
				}
				virtual void setLabelProjOffsetMaxAngle(_in Real angle)
				{
					if(m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelProjOffsetMaxAngle_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelProjOffsetMaxAngle_void_Real_Callback(angle);
					}
					else
						return this->CMultiGeometry3DExtension::setLabelProjOffsetMaxAngle(angle);
				}
				virtual Real getLabelProjOffsetMaxAngle() const
				{
					if(m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelProjOffsetMaxAngle_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelProjOffsetMaxAngle_Real_Callback();
						return returnValue;
					}
					else
						return this->CMultiGeometry3DExtension::getLabelProjOffsetMaxAngle();
				}
				virtual void setLabelProjOffsetEnable(_in ev_bool useProjOffset)
				{
					if(m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelProjOffsetEnable_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelProjOffsetEnable_void_ev_bool_Callback(useProjOffset);
					}
					else
						return this->CMultiGeometry3DExtension::setLabelProjOffsetEnable(useProjOffset);
				}
				virtual ev_bool getLabelProjOffsetEnable() const
				{
					if(m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelProjOffsetEnable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelProjOffsetEnable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CMultiGeometry3DExtension::getLabelProjOffsetEnable();
				}
				virtual void setLabelProjOffset(_in Real offset)
				{
					if(m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelProjOffset_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelProjOffset_void_Real_Callback(offset);
					}
					else
						return this->CMultiGeometry3DExtension::setLabelProjOffset(offset);
				}
				virtual Real getLabelProjOffset() const
				{
					if(m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelProjOffset_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelProjOffset_Real_Callback();
						return returnValue;
					}
					else
						return this->CMultiGeometry3DExtension::getLabelProjOffset();
				}
				virtual ev_bool updateMaterial()
				{
					if(m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_updateMaterial_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_updateMaterial_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CMultiGeometry3DExtension::updateMaterial();
				}
				virtual ev_bool setVisibilityFilter(_in ev_bool visible, _in const EarthView::World::Core::IntVector& ids)
				{
					if(m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setVisibilityFilter_ev_bool_ev_bool_IntVector_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setVisibilityFilter_ev_bool_ev_bool_IntVector_Callback(visible, &ids);
						return returnValue;
					}
					else
						return this->CMultiGeometry3DExtension::setVisibilityFilter(visible, ids);
				}
				virtual ev_bool setObjectVisibility(_in ev_bool visible, _in EarthView::World::Spatial::CGeoObject* ref_geoObject)
				{
					if(m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setObjectVisibility_ev_bool_ev_bool_CGeoObject_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setObjectVisibility_ev_bool_ev_bool_CGeoObject_Callback(visible, ref_geoObject);
						return returnValue;
					}
					else
						return this->CMultiGeometry3DExtension::setObjectVisibility(visible, ref_geoObject);
				}
				virtual EarthView::World::Graphic::CNode* getNode()
				{
					if(m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getNode_CNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getNode_CNode_Callback();
						return returnValue;
					}
					else
						return this->CMultiGeometry3DExtension::getNode();
				}
				virtual ev_bool isLoaded()
				{
					if(m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_isLoaded_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_isLoaded_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CMultiGeometry3DExtension::isLoaded();
				}
				virtual ev_bool isAttached()
				{
					if(m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_isAttached_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_isAttached_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CMultiGeometry3DExtension::isAttached();
				}
				virtual ev_bool load()
				{
					if(m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_load_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_load_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CMultiGeometry3DExtension::load();
				}
				virtual ev_bool unload()
				{
					if(m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_unload_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_unload_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CMultiGeometry3DExtension::unload();
				}
				virtual ev_bool attachToNode(_in EarthView::World::Graphic::CNode* n)
				{
					if(m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_attachToNode_ev_bool_CNode_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_attachToNode_ev_bool_CNode_Callback(n);
						return returnValue;
					}
					else
						return this->CMultiGeometry3DExtension::attachToNode(n);
				}
				virtual EarthView::World::Graphic::CNode* detachFromNode()
				{
					if(m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_detachFromNode_CNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_detachFromNode_CNode_Callback();
						return returnValue;
					}
					else
						return this->CMultiGeometry3DExtension::detachFromNode();
				}
				virtual ev_bool attachToScene()
				{
					if(m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_attachToScene_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_attachToScene_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CMultiGeometry3DExtension::attachToScene();
				}
				virtual ev_bool detachFromScene()
				{
					if(m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_detachFromScene_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_detachFromScene_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CMultiGeometry3DExtension::detachFromScene();
				}
				virtual ev_bool getSelectable()
				{
					if(m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getSelectable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CMultiGeometry3DExtension::getSelectable();
				}
				virtual ev_bool update()
				{
					if(m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_update_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_update_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CMultiGeometry3DExtension::update();
				}
				virtual EarthView::World::Spatial3D::Atlas::IGlobeLayer* getLayer()
				{
					if(m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLayer_IGlobeLayer_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial3D::Atlas::IGlobeLayer* returnValue = m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLayer_IGlobeLayer_Callback();
						return returnValue;
					}
					else
						return this->CMultiGeometry3DExtension::getLayer();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
				{
					if(m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getDataset_IDataset_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getDataset_IDataset_Callback();
						return returnValue;
					}
					else
						return this->CMultiGeometry3DExtension::getDataset();
				}
				virtual ev_uint32 getID()
				{
					if(m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getID_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getID_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CMultiGeometry3DExtension::getID();
				}
				virtual EVString getName()
				{
					if(m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CMultiGeometry3DExtension::getName();
				}
				virtual void setMatrix(_in const EarthView::World::Spatial::Math::CMatrix4& m)
				{
					if(m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setMatrix_void_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setMatrix_void_CMatrix4_Callback(&m);
					}
					else
						return this->CMultiGeometry3DExtension::setMatrix(m);
				}
				virtual EarthView::World::Spatial::Math::CMatrix4 getMatrix()
				{
					if(m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getMatrix_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CMatrix4 returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getMatrix_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->CMultiGeometry3DExtension::getMatrix();
				}
				virtual void setPosition(_in ev_real64 latitude, _in ev_real64 longitude, _in ev_real64 altitude, _in const EarthView::World::Spatial::Math::CVector3& scale, _in const EarthView::World::Spatial::Math::CQuaternion& qua)
				{
					if(m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback(latitude, longitude, altitude, &scale, &qua);
					}
					else
						return this->CMultiGeometry3DExtension::setPosition(latitude, longitude, altitude, scale, qua);
				}
				virtual void getPosition(_out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude, _out EarthView::World::Spatial::Math::CVector3& scale, _out EarthView::World::Spatial::Math::CQuaternion& qua)
				{
					if(m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback(latitude, longitude, altitude, &scale, &qua);
					}
					else
						return this->CMultiGeometry3DExtension::getPosition(latitude, longitude, altitude, scale, qua);
				}
			};
			REGISTER_FACTORY_CLASS(CMultiGeometry3DExtensionProxy);
			extern "C" EV_DLL_EXPORT  EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener*  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_getListener_CMultiGeometry3DExtensionListener(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener* objXXXX = ptrNativeObject->getListener();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_setListener_void_CMultiGeometry3DExtensionListener(void *pObjectXXXX, _in EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener* ref_listener )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				ptrNativeObject->setListener(ref_listener);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_appendGeoObject_ev_bool_CGeoObject(void *pObjectXXXX, _in EarthView::World::Spatial::CGeoObject* ref_geoObject )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				if (dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::appendGeoObject(ref_geoObject);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->appendGeoObject(ref_geoObject);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_appendGeoObject_ev_bool_CGeoObject( void *pObjectXXXX, EarthView_World_Geometry3D_CMultiGeometry3DExtension_appendGeoObject_ev_bool_CGeoObject_Callback* pCallback )
			{
				CMultiGeometry3DExtensionProxy* ptr = dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_appendGeoObject_ev_bool_CGeoObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_appendGeoObject_ev_bool_CGeoObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::CGeoObject* ref_geoObject )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::appendGeoObject(ref_geoObject);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_removeGeoObject_ev_bool_CGeoObject(void *pObjectXXXX, _in EarthView::World::Spatial::CGeoObject* geoObject )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				if (dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::removeGeoObject(geoObject);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->removeGeoObject(geoObject);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_removeGeoObject_ev_bool_CGeoObject( void *pObjectXXXX, EarthView_World_Geometry3D_CMultiGeometry3DExtension_removeGeoObject_ev_bool_CGeoObject_Callback* pCallback )
			{
				CMultiGeometry3DExtensionProxy* ptr = dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_removeGeoObject_ev_bool_CGeoObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_removeGeoObject_ev_bool_CGeoObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::CGeoObject* geoObject )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::removeGeoObject(geoObject);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_removeAllGeoObjects_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				if (dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::removeAllGeoObjects();
				else
					ptrNativeObject->removeAllGeoObjects();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_removeAllGeoObjects_void( void *pObjectXXXX, EarthView_World_Geometry3D_CMultiGeometry3DExtension_removeAllGeoObjects_void_Callback* pCallback )
			{
				CMultiGeometry3DExtensionProxy* ptr = dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_removeAllGeoObjects_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_removeAllGeoObjects_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::removeAllGeoObjects();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CGeoObject*  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_getGeoObject_CGeoObject_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				if (dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::CGeoObject* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::getGeoObject(index);
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::CGeoObject* objXXXX = ptrNativeObject->getGeoObject(index);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getGeoObject_CGeoObject_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CMultiGeometry3DExtension_getGeoObject_CGeoObject_ev_uint32_Callback* pCallback )
			{
				CMultiGeometry3DExtensionProxy* ptr = dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getGeoObject_CGeoObject_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CGeoObject*  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_getGeoObject_CGeoObject_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				EarthView::World::Spatial::CGeoObject* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::getGeoObject(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_getGeoObjectCount_ev_uint64(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				if (dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*)ptrNativeObject) != NULL)
				{
					ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::getGeoObjectCount();
					return objXXXX;
				}
				else
				{
					ev_uint64 objXXXX = ptrNativeObject->getGeoObjectCount();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getGeoObjectCount_ev_uint64( void *pObjectXXXX, EarthView_World_Geometry3D_CMultiGeometry3DExtension_getGeoObjectCount_ev_uint64_Callback* pCallback )
			{
				CMultiGeometry3DExtensionProxy* ptr = dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getGeoObjectCount_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_getGeoObjectCount_ev_uint64_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::getGeoObjectCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Geometry3D::CGeoEntity*  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_getGeoEntity_CGeoEntity(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				EarthView::World::Geometry3D::CGeoEntity* objXXXX = ptrNativeObject->getGeoEntity();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_getDrawWireBoundingBox_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				if (dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::getDrawWireBoundingBox();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getDrawWireBoundingBox();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getDrawWireBoundingBox_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CMultiGeometry3DExtension_getDrawWireBoundingBox_ev_bool_Callback* pCallback )
			{
				CMultiGeometry3DExtensionProxy* ptr = dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getDrawWireBoundingBox_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_getDrawWireBoundingBox_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::getDrawWireBoundingBox();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_setDrawWireBoundingBox_void_ev_bool(void *pObjectXXXX, _in ev_bool isdraw )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				if (dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::setDrawWireBoundingBox(isdraw);
				else
					ptrNativeObject->setDrawWireBoundingBox(isdraw);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setDrawWireBoundingBox_void_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CMultiGeometry3DExtension_setDrawWireBoundingBox_void_ev_bool_Callback* pCallback )
			{
				CMultiGeometry3DExtensionProxy* ptr = dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setDrawWireBoundingBox_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_setDrawWireBoundingBox_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool isdraw )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::setDrawWireBoundingBox(isdraw);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_draw_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				ptrNativeObject->draw();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_build_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				if (dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::build();
				else
					ptrNativeObject->build();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_build_void( void *pObjectXXXX, EarthView_World_Geometry3D_CMultiGeometry3DExtension_build_void_Callback* pCallback )
			{
				CMultiGeometry3DExtensionProxy* ptr = dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_build_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_build_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::build();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_build_void_CSubMeshDataVector(void *pObjectXXXX, _inout void* subMeshData )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				if (dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::build(*(EarthView::World::Geometry3D::CSubMeshDataVector*)subMeshData);
				else
					ptrNativeObject->build(*(EarthView::World::Geometry3D::CSubMeshDataVector*)subMeshData);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_build_void_CSubMeshDataVector( void *pObjectXXXX, EarthView_World_Geometry3D_CMultiGeometry3DExtension_build_void_CSubMeshDataVector_Callback* pCallback )
			{
				CMultiGeometry3DExtensionProxy* ptr = dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_build_void_CSubMeshDataVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_build_void_CSubMeshDataVector_NoVirtual(void *pObjectXXXX, _inout void* subMeshData )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::build(*(EarthView::World::Geometry3D::CSubMeshDataVector*)subMeshData);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_render_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				if (dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::render();
				else
					ptrNativeObject->render();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_render_void( void *pObjectXXXX, EarthView_World_Geometry3D_CMultiGeometry3DExtension_render_void_Callback* pCallback )
			{
				CMultiGeometry3DExtensionProxy* ptr = dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_render_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_render_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::render();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_derender_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				if (dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::derender();
				else
					ptrNativeObject->derender();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_derender_void( void *pObjectXXXX, EarthView_World_Geometry3D_CMultiGeometry3DExtension_derender_void_Callback* pCallback )
			{
				CMultiGeometry3DExtensionProxy* ptr = dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_derender_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_derender_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::derender();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_isRendering_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				if (dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::isRendering();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isRendering();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_isRendering_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CMultiGeometry3DExtension_isRendering_ev_bool_Callback* pCallback )
			{
				CMultiGeometry3DExtensionProxy* ptr = dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_isRendering_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_isRendering_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::isRendering();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_setVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool visible )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				if (dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::setVisible(visible);
				else
					ptrNativeObject->setVisible(visible);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CMultiGeometry3DExtension_setVisible_void_ev_bool_Callback* pCallback )
			{
				CMultiGeometry3DExtensionProxy* ptr = dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setVisible_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_setVisible_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool visible )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::setVisible(visible);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_setDenseInterpolation_void_ev_bool(void *pObjectXXXX, _in ev_bool dense )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				if (dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::setDenseInterpolation(dense);
				else
					ptrNativeObject->setDenseInterpolation(dense);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setDenseInterpolation_void_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CMultiGeometry3DExtension_setDenseInterpolation_void_ev_bool_Callback* pCallback )
			{
				CMultiGeometry3DExtensionProxy* ptr = dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setDenseInterpolation_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_setDenseInterpolation_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool dense )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::setDenseInterpolation(dense);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_setUserData_void_CFeatureUserData(void *pObjectXXXX, _inout void* userData )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				if (dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::setUserData(*(EarthView::World::Spatial3D::CFeatureUserData*)userData);
				else
					ptrNativeObject->setUserData(*(EarthView::World::Spatial3D::CFeatureUserData*)userData);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setUserData_void_CFeatureUserData( void *pObjectXXXX, EarthView_World_Geometry3D_CMultiGeometry3DExtension_setUserData_void_CFeatureUserData_Callback* pCallback )
			{
				CMultiGeometry3DExtensionProxy* ptr = dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setUserData_void_CFeatureUserData(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_setUserData_void_CFeatureUserData_NoVirtual(void *pObjectXXXX, _inout void* userData )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::setUserData(*(EarthView::World::Spatial3D::CFeatureUserData*)userData);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_getUserData_CFeatureUserData(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				const EarthView::World::Spatial3D::CFeatureUserData& objXXXX = ptrNativeObject->getUserData();
				const EarthView::World::Spatial3D::CFeatureUserData *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_setSelectable_void_ev_bool(void *pObjectXXXX, _in ev_bool selectable )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				if (dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::setSelectable(selectable);
				else
					ptrNativeObject->setSelectable(selectable);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setSelectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CMultiGeometry3DExtension_setSelectable_void_ev_bool_Callback* pCallback )
			{
				CMultiGeometry3DExtensionProxy* ptr = dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setSelectable_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_setSelectable_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool selectable )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::setSelectable(selectable);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_getSceneNodePostion_CVector3(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->getSceneNodePostion();
				const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_setSceneNodePostion_void_CVector3(void *pObjectXXXX, _in const void* pos )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				ptrNativeObject->setSceneNodePostion(*(EarthView::World::Spatial::Math::CVector3*)pos);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_setAltitudePrecision_void_ev_int32(void *pObjectXXXX, _in ev_int32 precision )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				ptrNativeObject->setAltitudePrecision(precision);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_setProjOffsetMaxAngle_void_Real(void *pObjectXXXX, _in Real angle )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				ptrNativeObject->setProjOffsetMaxAngle(angle);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_getProjOffsetMaxAngle_Real(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getProjOffsetMaxAngle();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_setStencilEnable_void_ev_bool(void *pObjectXXXX, _in ev_bool useStencil )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				ptrNativeObject->setStencilEnable(useStencil);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_getStencilEnable_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getStencilEnable();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_setProjOffsetEnable_void_ev_bool(void *pObjectXXXX, _in ev_bool useProjOffset )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				ptrNativeObject->setProjOffsetEnable(useProjOffset);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_getProjOffsetEnable_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getProjOffsetEnable();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_setProjOffset_void_Real(void *pObjectXXXX, _in Real offset )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				ptrNativeObject->setProjOffset(offset);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_getProjOffset_Real(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getProjOffset();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Geometry3D::CRenderableGeometryExtensionListener*  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_getRenderableListener_CRenderableGeometryExtensionListener(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				EarthView::World::Geometry3D::CRenderableGeometryExtensionListener* objXXXX = ptrNativeObject->getRenderableListener();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLevel_void_ev_int32(void *pObjectXXXX, _in ev_int32 level )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				ptrNativeObject->setLevel(level);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_setRoadMinMaxVisibleDistance_void_Real_Real(void *pObjectXXXX, _in Real min, _in Real max )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				ptrNativeObject->setRoadMinMaxVisibleDistance(min, max);
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_exist_bool_CMultiGeometry3DExtension(_in EarthView::World::Geometry3D::CMultiGeometry3DExtension* extension )
			{
				bool objXXXX = EarthView::World::Geometry3D::CMultiGeometry3DExtension::exist(extension);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_updateLabel_void_ev_bool_ev_bool_ev_bool_ev_bool_CCamera(void *pObjectXXXX, _in ev_bool resetTextStyle, _in ev_bool derenderTxt, _in ev_bool reCreate, _in ev_bool attachLabel, _in EarthView::World::Graphic::CCamera* pCamera )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				if (dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::updateLabel(resetTextStyle, derenderTxt, reCreate, attachLabel, pCamera);
				else
					ptrNativeObject->updateLabel(resetTextStyle, derenderTxt, reCreate, attachLabel, pCamera);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_updateLabel_void_ev_bool_ev_bool_ev_bool_ev_bool_CCamera( void *pObjectXXXX, EarthView_World_Geometry3D_CMultiGeometry3DExtension_updateLabel_void_ev_bool_ev_bool_ev_bool_ev_bool_CCamera_Callback* pCallback )
			{
				CMultiGeometry3DExtensionProxy* ptr = dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_updateLabel_void_ev_bool_ev_bool_ev_bool_ev_bool_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_updateLabel_void_ev_bool_ev_bool_ev_bool_ev_bool_CCamera_NoVirtual(void *pObjectXXXX, _in ev_bool resetTextStyle, _in ev_bool derenderTxt, _in ev_bool reCreate, _in ev_bool attachLabel, _in EarthView::World::Graphic::CCamera* pCamera )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::updateLabel(resetTextStyle, derenderTxt, reCreate, attachLabel, pCamera);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_updateByCamera_void_CCamera(void *pObjectXXXX, _in EarthView::World::Graphic::CCamera* pCamera )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				if (dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::updateByCamera(pCamera);
				else
					ptrNativeObject->updateByCamera(pCamera);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_updateByCamera_void_CCamera( void *pObjectXXXX, EarthView_World_Geometry3D_CMultiGeometry3DExtension_updateByCamera_void_CCamera_Callback* pCallback )
			{
				CMultiGeometry3DExtensionProxy* ptr = dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_updateByCamera_void_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_updateByCamera_void_CCamera_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CCamera* pCamera )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::updateByCamera(pCamera);
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelVisibleDistance_ev_real64(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				if (dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*)ptrNativeObject) != NULL)
				{
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::getLabelVisibleDistance();
					return objXXXX;
				}
				else
				{
					ev_real64 objXXXX = ptrNativeObject->getLabelVisibleDistance();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelVisibleDistance_ev_real64( void *pObjectXXXX, EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelVisibleDistance_ev_real64_Callback* pCallback )
			{
				CMultiGeometry3DExtensionProxy* ptr = dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelVisibleDistance_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelVisibleDistance_ev_real64_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::getLabelVisibleDistance();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelVisibleDistance_void_ev_real64(void *pObjectXXXX, _in ev_real64 dis )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				if (dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::setLabelVisibleDistance(dis);
				else
					ptrNativeObject->setLabelVisibleDistance(dis);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelVisibleDistance_void_ev_real64( void *pObjectXXXX, EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelVisibleDistance_void_ev_real64_Callback* pCallback )
			{
				CMultiGeometry3DExtensionProxy* ptr = dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelVisibleDistance_void_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelVisibleDistance_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 dis )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::setLabelVisibleDistance(dis);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelProjOffsetMaxAngle_void_Real(void *pObjectXXXX, _in Real angle )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				if (dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::setLabelProjOffsetMaxAngle(angle);
				else
					ptrNativeObject->setLabelProjOffsetMaxAngle(angle);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelProjOffsetMaxAngle_void_Real( void *pObjectXXXX, EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelProjOffsetMaxAngle_void_Real_Callback* pCallback )
			{
				CMultiGeometry3DExtensionProxy* ptr = dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelProjOffsetMaxAngle_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelProjOffsetMaxAngle_void_Real_NoVirtual(void *pObjectXXXX, _in Real angle )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::setLabelProjOffsetMaxAngle(angle);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelProjOffsetMaxAngle_Real(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				if (dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::getLabelProjOffsetMaxAngle();
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getLabelProjOffsetMaxAngle();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelProjOffsetMaxAngle_Real( void *pObjectXXXX, EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelProjOffsetMaxAngle_Real_Callback* pCallback )
			{
				CMultiGeometry3DExtensionProxy* ptr = dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelProjOffsetMaxAngle_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelProjOffsetMaxAngle_Real_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::getLabelProjOffsetMaxAngle();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelProjOffsetEnable_void_ev_bool(void *pObjectXXXX, _in ev_bool useProjOffset )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				if (dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::setLabelProjOffsetEnable(useProjOffset);
				else
					ptrNativeObject->setLabelProjOffsetEnable(useProjOffset);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelProjOffsetEnable_void_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelProjOffsetEnable_void_ev_bool_Callback* pCallback )
			{
				CMultiGeometry3DExtensionProxy* ptr = dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelProjOffsetEnable_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelProjOffsetEnable_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool useProjOffset )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::setLabelProjOffsetEnable(useProjOffset);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelProjOffsetEnable_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				if (dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::getLabelProjOffsetEnable();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getLabelProjOffsetEnable();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelProjOffsetEnable_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelProjOffsetEnable_ev_bool_Callback* pCallback )
			{
				CMultiGeometry3DExtensionProxy* ptr = dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelProjOffsetEnable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelProjOffsetEnable_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::getLabelProjOffsetEnable();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelProjOffset_void_Real(void *pObjectXXXX, _in Real offset )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				if (dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::setLabelProjOffset(offset);
				else
					ptrNativeObject->setLabelProjOffset(offset);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelProjOffset_void_Real( void *pObjectXXXX, EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelProjOffset_void_Real_Callback* pCallback )
			{
				CMultiGeometry3DExtensionProxy* ptr = dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelProjOffset_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelProjOffset_void_Real_NoVirtual(void *pObjectXXXX, _in Real offset )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::setLabelProjOffset(offset);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelProjOffset_Real(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				if (dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::getLabelProjOffset();
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getLabelProjOffset();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelProjOffset_Real( void *pObjectXXXX, EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelProjOffset_Real_Callback* pCallback )
			{
				CMultiGeometry3DExtensionProxy* ptr = dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelProjOffset_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelProjOffset_Real_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::getLabelProjOffset();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_updateMaterial_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				if (dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::updateMaterial();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->updateMaterial();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_updateMaterial_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CMultiGeometry3DExtension_updateMaterial_ev_bool_Callback* pCallback )
			{
				CMultiGeometry3DExtensionProxy* ptr = dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_updateMaterial_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_updateMaterial_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::updateMaterial();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_attachStatisticsExtension_void_CGeoStatistics3DExtension(void *pObjectXXXX, _in EarthView::World::Geometry3D::CGeoStatistics3DExtension* statisticsEx )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				ptrNativeObject->attachStatisticsExtension(statisticsEx);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Geometry3D::CGeoStatistics3DExtension*  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_getStatisticsExtension_CGeoStatistics3DExtension(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				EarthView::World::Geometry3D::CGeoStatistics3DExtension* objXXXX = ptrNativeObject->getStatisticsExtension();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_updateStatisticsExtension_ev_bool_ev_bool_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool derenderEx, _in ev_bool reBuildEx, _in ev_bool renderEx )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->updateStatisticsExtension(derenderEx, reBuildEx, renderEx);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_setVisibilityFilter_ev_bool_ev_bool_IntVector(void *pObjectXXXX, _in ev_bool visible, _in const void* ids )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				if (dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::setVisibilityFilter(visible, *(EarthView::World::Core::IntVector*)ids);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->setVisibilityFilter(visible, *(EarthView::World::Core::IntVector*)ids);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setVisibilityFilter_ev_bool_ev_bool_IntVector( void *pObjectXXXX, EarthView_World_Geometry3D_CMultiGeometry3DExtension_setVisibilityFilter_ev_bool_ev_bool_IntVector_Callback* pCallback )
			{
				CMultiGeometry3DExtensionProxy* ptr = dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setVisibilityFilter_ev_bool_ev_bool_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_setVisibilityFilter_ev_bool_ev_bool_IntVector_NoVirtual(void *pObjectXXXX, _in ev_bool visible, _in const void* ids )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::setVisibilityFilter(visible, *(EarthView::World::Core::IntVector*)ids);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_setObjectVisibility_ev_bool_ev_bool_CGeoObject(void *pObjectXXXX, _in ev_bool visible, _in EarthView::World::Spatial::CGeoObject* ref_geoObject )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				if (dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::setObjectVisibility(visible, ref_geoObject);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->setObjectVisibility(visible, ref_geoObject);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setObjectVisibility_ev_bool_ev_bool_CGeoObject( void *pObjectXXXX, EarthView_World_Geometry3D_CMultiGeometry3DExtension_setObjectVisibility_ev_bool_ev_bool_CGeoObject_Callback* pCallback )
			{
				CMultiGeometry3DExtensionProxy* ptr = dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setObjectVisibility_ev_bool_ev_bool_CGeoObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_setObjectVisibility_ev_bool_ev_bool_CGeoObject_NoVirtual(void *pObjectXXXX, _in ev_bool visible, _in EarthView::World::Spatial::CGeoObject* ref_geoObject )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::setObjectVisibility(visible, ref_geoObject);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_getNode_CNode(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				if (dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::getNode();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->getNode();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getNode_CNode( void *pObjectXXXX, EarthView_World_Geometry3D_CMultiGeometry3DExtension_getNode_CNode_Callback* pCallback )
			{
				CMultiGeometry3DExtensionProxy* ptr = dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getNode_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_getNode_CNode_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::getNode();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_isLoaded_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				if (dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::isLoaded();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isLoaded();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_isLoaded_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CMultiGeometry3DExtension_isLoaded_ev_bool_Callback* pCallback )
			{
				CMultiGeometry3DExtensionProxy* ptr = dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_isLoaded_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_isLoaded_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::isLoaded();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_isAttached_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				if (dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::isAttached();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isAttached();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_isAttached_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CMultiGeometry3DExtension_isAttached_ev_bool_Callback* pCallback )
			{
				CMultiGeometry3DExtensionProxy* ptr = dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_isAttached_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_isAttached_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::isAttached();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_load_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				if (dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::load();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->load();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_load_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CMultiGeometry3DExtension_load_ev_bool_Callback* pCallback )
			{
				CMultiGeometry3DExtensionProxy* ptr = dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_load_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_load_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::load();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_unload_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				if (dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::unload();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->unload();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_unload_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CMultiGeometry3DExtension_unload_ev_bool_Callback* pCallback )
			{
				CMultiGeometry3DExtensionProxy* ptr = dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_unload_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_unload_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::unload();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_attachToNode_ev_bool_CNode(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* n )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				if (dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::attachToNode(n);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->attachToNode(n);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_attachToNode_ev_bool_CNode( void *pObjectXXXX, EarthView_World_Geometry3D_CMultiGeometry3DExtension_attachToNode_ev_bool_CNode_Callback* pCallback )
			{
				CMultiGeometry3DExtensionProxy* ptr = dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_attachToNode_ev_bool_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_attachToNode_ev_bool_CNode_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* n )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::attachToNode(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_detachFromNode_CNode(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				if (dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::detachFromNode();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->detachFromNode();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_detachFromNode_CNode( void *pObjectXXXX, EarthView_World_Geometry3D_CMultiGeometry3DExtension_detachFromNode_CNode_Callback* pCallback )
			{
				CMultiGeometry3DExtensionProxy* ptr = dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_detachFromNode_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_detachFromNode_CNode_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::detachFromNode();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_attachToScene_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				if (dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::attachToScene();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->attachToScene();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_attachToScene_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CMultiGeometry3DExtension_attachToScene_ev_bool_Callback* pCallback )
			{
				CMultiGeometry3DExtensionProxy* ptr = dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_attachToScene_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_attachToScene_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::attachToScene();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_detachFromScene_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				if (dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::detachFromScene();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->detachFromScene();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_detachFromScene_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CMultiGeometry3DExtension_detachFromScene_ev_bool_Callback* pCallback )
			{
				CMultiGeometry3DExtensionProxy* ptr = dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_detachFromScene_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_detachFromScene_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtension::detachFromScene();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtension_appendMovableObject_ev_bool_CMovableObject(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* mo )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->appendMovableObject(mo);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CMultiGeometry3DExtension_getSelectable_ev_bool_Callback* pCallback )
			{
				CMultiGeometry3DExtensionProxy* ptr = dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getSelectable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_update_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CMultiGeometry3DExtension_update_ev_bool_Callback* pCallback )
			{
				CMultiGeometry3DExtensionProxy* ptr = dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_update_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLayer_IGlobeLayer( void *pObjectXXXX, EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLayer_IGlobeLayer_Callback* pCallback )
			{
				CMultiGeometry3DExtensionProxy* ptr = dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLayer_IGlobeLayer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getDataset_IDataset( void *pObjectXXXX, EarthView_World_Geometry3D_CMultiGeometry3DExtension_getDataset_IDataset_Callback* pCallback )
			{
				CMultiGeometry3DExtensionProxy* ptr = dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getDataset_IDataset(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getID_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CMultiGeometry3DExtension_getID_ev_uint32_Callback* pCallback )
			{
				CMultiGeometry3DExtensionProxy* ptr = dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getID_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getName_EVString( void *pObjectXXXX, EarthView_World_Geometry3D_CMultiGeometry3DExtension_getName_EVString_Callback* pCallback )
			{
				CMultiGeometry3DExtensionProxy* ptr = dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setMatrix_void_CMatrix4( void *pObjectXXXX, EarthView_World_Geometry3D_CMultiGeometry3DExtension_setMatrix_void_CMatrix4_Callback* pCallback )
			{
				CMultiGeometry3DExtensionProxy* ptr = dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setMatrix_void_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getMatrix_CMatrix4( void *pObjectXXXX, EarthView_World_Geometry3D_CMultiGeometry3DExtension_getMatrix_CMatrix4_Callback* pCallback )
			{
				CMultiGeometry3DExtensionProxy* ptr = dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getMatrix_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion( void *pObjectXXXX, EarthView_World_Geometry3D_CMultiGeometry3DExtension_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback )
			{
				CMultiGeometry3DExtensionProxy* ptr = dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion( void *pObjectXXXX, EarthView_World_Geometry3D_CMultiGeometry3DExtension_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback )
			{
				CMultiGeometry3DExtensionProxy* ptr = dynamic_cast<CMultiGeometry3DExtensionProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtension_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Geometry3D::CGeometryExtensionBackgroundWorkManager*  _stdcall EarthView_World_Geometry3D_CGeometryExtensionBackgroundWorkManager_getSingletonPtr_CGeometryExtensionBackgroundWorkManager( )
			{
				EarthView::World::Geometry3D::CGeometryExtensionBackgroundWorkManager* objXXXX = EarthView::World::Geometry3D::CGeometryExtensionBackgroundWorkManager::getSingletonPtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeometryExtensionBackgroundWorkManager_releaseSingleton_void( )
			{
				EarthView::World::Geometry3D::CGeometryExtensionBackgroundWorkManager::releaseSingleton();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeometryExtensionBackgroundWorkManager_init_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeometryExtensionBackgroundWorkManager* ptrNativeObject = (EarthView::World::Geometry3D::CGeometryExtensionBackgroundWorkManager*) pObjectXXXX;
				ptrNativeObject->init();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CWorkQueue*  _stdcall EarthView_World_Geometry3D_CGeometryExtensionBackgroundWorkManager_getWorkQuque_CWorkQueue(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeometryExtensionBackgroundWorkManager* ptrNativeObject = (EarthView::World::Geometry3D::CGeometryExtensionBackgroundWorkManager*) pObjectXXXX;
				EarthView::World::Core::CWorkQueue* objXXXX = ptrNativeObject->getWorkQuque();
				return objXXXX;
			}
		}
	}
}
