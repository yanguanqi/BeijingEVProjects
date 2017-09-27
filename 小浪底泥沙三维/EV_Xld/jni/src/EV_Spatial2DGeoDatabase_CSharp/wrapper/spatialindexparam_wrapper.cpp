/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2dgeodatabase/spatialindexparam.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace GeoDataset
			{
				typedef int  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CRTreeSpatialIndexParam_getSpatialIndexType_EVSpatialIndexEnum_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CRTreeSpatialIndexParam_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef void  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CRTreeSpatialIndexParam_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class CRTreeSpatialIndexParamProxy : public EarthView::World::Spatial2D::GeoDataset::CRTreeSpatialIndexParam
				{
				private:
					EarthView_World_Spatial2D_GeoDataset_CRTreeSpatialIndexParam_getSpatialIndexType_EVSpatialIndexEnum_Callback* m_EarthView_World_Spatial2D_GeoDataset_CRTreeSpatialIndexParam_getSpatialIndexType_EVSpatialIndexEnum_Callback;
					EarthView_World_Spatial2D_GeoDataset_CRTreeSpatialIndexParam_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial2D_GeoDataset_CRTreeSpatialIndexParam_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial2D_GeoDataset_CRTreeSpatialIndexParam_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial2D_GeoDataset_CRTreeSpatialIndexParam_fromStream_void_CDataStream_Callback;
				public:
					CRTreeSpatialIndexParamProxy(EarthView::World::Core::CNameValuePairList *pList) : CRTreeSpatialIndexParam(pList)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CRTreeSpatialIndexParam_getSpatialIndexType_EVSpatialIndexEnum_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CRTreeSpatialIndexParam_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CRTreeSpatialIndexParam_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CRTreeSpatialIndexParam_getSpatialIndexType_EVSpatialIndexEnum(EarthView_World_Spatial2D_GeoDataset_CRTreeSpatialIndexParam_getSpatialIndexType_EVSpatialIndexEnum_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CRTreeSpatialIndexParam_getSpatialIndexType_EVSpatialIndexEnum_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CRTreeSpatialIndexParam_toStream_void_CDataStream(EarthView_World_Spatial2D_GeoDataset_CRTreeSpatialIndexParam_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CRTreeSpatialIndexParam_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CRTreeSpatialIndexParam_fromStream_void_CDataStream(EarthView_World_Spatial2D_GeoDataset_CRTreeSpatialIndexParam_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CRTreeSpatialIndexParam_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CRTreeSpatialIndexParam_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_GeoDataset_CRTreeSpatialIndexParam_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CRTreeSpatialIndexParam::toStream(stream);
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CRTreeSpatialIndexParam_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_GeoDataset_CRTreeSpatialIndexParam_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CRTreeSpatialIndexParam::fromStream(stream);
					}
					virtual EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum getSpatialIndexType()
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CRTreeSpatialIndexParam_getSpatialIndexType_EVSpatialIndexEnum_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum returnValue = (EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum)m_EarthView_World_Spatial2D_GeoDataset_CRTreeSpatialIndexParam_getSpatialIndexType_EVSpatialIndexEnum_Callback();
							return returnValue;
						}
						else
							return this->CRTreeSpatialIndexParam::getSpatialIndexType();
					}
				};
				REGISTER_FACTORY_CLASS(CRTreeSpatialIndexParamProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_GeoDataset_CRTreeSpatialIndexParam_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial2D::GeoDataset::CRTreeSpatialIndexParam* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CRTreeSpatialIndexParam*) pObjectXXXX;
					if (dynamic_cast<CRTreeSpatialIndexParamProxy*>((EarthView::World::Spatial2D::GeoDataset::CRTreeSpatialIndexParam*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CRTreeSpatialIndexParam::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CRTreeSpatialIndexParam_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CRTreeSpatialIndexParam_toStream_void_CDataStream_Callback* pCallback )
				{
					CRTreeSpatialIndexParamProxy* ptr = dynamic_cast<CRTreeSpatialIndexParamProxy*>((EarthView::World::Spatial2D::GeoDataset::CRTreeSpatialIndexParam*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CRTreeSpatialIndexParam_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_GeoDataset_CRTreeSpatialIndexParam_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial2D::GeoDataset::CRTreeSpatialIndexParam* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CRTreeSpatialIndexParam*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CRTreeSpatialIndexParam::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_GeoDataset_CRTreeSpatialIndexParam_fromStream_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial2D::GeoDataset::CRTreeSpatialIndexParam* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CRTreeSpatialIndexParam*) pObjectXXXX;
					if (dynamic_cast<CRTreeSpatialIndexParamProxy*>((EarthView::World::Spatial2D::GeoDataset::CRTreeSpatialIndexParam*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CRTreeSpatialIndexParam::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CRTreeSpatialIndexParam_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CRTreeSpatialIndexParam_fromStream_void_CDataStream_Callback* pCallback )
				{
					CRTreeSpatialIndexParamProxy* ptr = dynamic_cast<CRTreeSpatialIndexParamProxy*>((EarthView::World::Spatial2D::GeoDataset::CRTreeSpatialIndexParam*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CRTreeSpatialIndexParam_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_GeoDataset_CRTreeSpatialIndexParam_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial2D::GeoDataset::CRTreeSpatialIndexParam* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CRTreeSpatialIndexParam*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CRTreeSpatialIndexParam::fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CRTreeSpatialIndexParam_getSpatialIndexType_EVSpatialIndexEnum( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CRTreeSpatialIndexParam_getSpatialIndexType_EVSpatialIndexEnum_Callback* pCallback )
				{
					CRTreeSpatialIndexParamProxy* ptr = dynamic_cast<CRTreeSpatialIndexParamProxy*>((EarthView::World::Spatial2D::GeoDataset::CRTreeSpatialIndexParam*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CRTreeSpatialIndexParam_getSpatialIndexType_EVSpatialIndexEnum(pCallback);
					}
				}
				typedef int  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_getSpatialIndexType_EVSpatialIndexEnum_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef void  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class CSpatialGridIndexParamProxy : public EarthView::World::Spatial2D::GeoDataset::CSpatialGridIndexParam
				{
				private:
					EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_getSpatialIndexType_EVSpatialIndexEnum_Callback* m_EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_getSpatialIndexType_EVSpatialIndexEnum_Callback;
					EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_fromStream_void_CDataStream_Callback;
				public:
					CSpatialGridIndexParamProxy(EarthView::World::Core::CNameValuePairList *pList) : CSpatialGridIndexParam(pList)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_getSpatialIndexType_EVSpatialIndexEnum_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_getSpatialIndexType_EVSpatialIndexEnum(EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_getSpatialIndexType_EVSpatialIndexEnum_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_getSpatialIndexType_EVSpatialIndexEnum_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_toStream_void_CDataStream(EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_fromStream_void_CDataStream(EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CSpatialGridIndexParam::toStream(stream);
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CSpatialGridIndexParam::fromStream(stream);
					}
					virtual EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum getSpatialIndexType()
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_getSpatialIndexType_EVSpatialIndexEnum_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum returnValue = (EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum)m_EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_getSpatialIndexType_EVSpatialIndexEnum_Callback();
							return returnValue;
						}
						else
							return this->CSpatialGridIndexParam::getSpatialIndexType();
					}
				};
				REGISTER_FACTORY_CLASS(CSpatialGridIndexParamProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_setGridOneSize_void_ev_real64(void *pObjectXXXX, _in const ev_real64 gridSize )
				{
					EarthView::World::Spatial2D::GeoDataset::CSpatialGridIndexParam* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CSpatialGridIndexParam*) pObjectXXXX;
					ptrNativeObject->setGridOneSize(gridSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_setGridTwoSize_void_ev_real64(void *pObjectXXXX, _in const ev_real64 gridSize )
				{
					EarthView::World::Spatial2D::GeoDataset::CSpatialGridIndexParam* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CSpatialGridIndexParam*) pObjectXXXX;
					ptrNativeObject->setGridTwoSize(gridSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_setGridThreeSize_void_ev_real64(void *pObjectXXXX, _in const ev_real64 gridSize )
				{
					EarthView::World::Spatial2D::GeoDataset::CSpatialGridIndexParam* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CSpatialGridIndexParam*) pObjectXXXX;
					ptrNativeObject->setGridThreeSize(gridSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_getGridSize_void_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _inout ev_real64& gridOneSize, _inout ev_real64& gridTwoSize, _inout ev_real64& gridThreeSize )
				{
					const EarthView::World::Spatial2D::GeoDataset::CSpatialGridIndexParam* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CSpatialGridIndexParam*) pObjectXXXX;
					ptrNativeObject->getGridSize(gridOneSize, gridTwoSize, gridThreeSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial2D::GeoDataset::CSpatialGridIndexParam* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CSpatialGridIndexParam*) pObjectXXXX;
					if (dynamic_cast<CSpatialGridIndexParamProxy*>((EarthView::World::Spatial2D::GeoDataset::CSpatialGridIndexParam*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CSpatialGridIndexParam::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_toStream_void_CDataStream_Callback* pCallback )
				{
					CSpatialGridIndexParamProxy* ptr = dynamic_cast<CSpatialGridIndexParamProxy*>((EarthView::World::Spatial2D::GeoDataset::CSpatialGridIndexParam*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial2D::GeoDataset::CSpatialGridIndexParam* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CSpatialGridIndexParam*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CSpatialGridIndexParam::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_fromStream_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial2D::GeoDataset::CSpatialGridIndexParam* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CSpatialGridIndexParam*) pObjectXXXX;
					if (dynamic_cast<CSpatialGridIndexParamProxy*>((EarthView::World::Spatial2D::GeoDataset::CSpatialGridIndexParam*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CSpatialGridIndexParam::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_fromStream_void_CDataStream_Callback* pCallback )
				{
					CSpatialGridIndexParamProxy* ptr = dynamic_cast<CSpatialGridIndexParamProxy*>((EarthView::World::Spatial2D::GeoDataset::CSpatialGridIndexParam*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial2D::GeoDataset::CSpatialGridIndexParam* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CSpatialGridIndexParam*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CSpatialGridIndexParam::fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_getSpatialIndexType_EVSpatialIndexEnum( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_getSpatialIndexType_EVSpatialIndexEnum_Callback* pCallback )
				{
					CSpatialGridIndexParamProxy* ptr = dynamic_cast<CSpatialGridIndexParamProxy*>((EarthView::World::Spatial2D::GeoDataset::CSpatialGridIndexParam*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_getSpatialIndexType_EVSpatialIndexEnum(pCallback);
					}
				}
				typedef EarthView::World::Spatial::GeoDataset::ISpatialIndexParam*  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CSpatialIndexParamFactory_createSpatialIndexParam_ISpatialIndexParam_EVSpatialIndexEnum_Callback)(_in int type);
				typedef EarthView::World::Spatial::GeoDataset::ISpatialIndexParam*  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CSpatialIndexParamFactory_createSpatialIndexParam_ISpatialIndexParam_CDataStream_Callback)(_inout void* stream);
				class CSpatialIndexParamFactoryProxy : public EarthView::World::Spatial2D::GeoDataset::CSpatialIndexParamFactory
				{
				private:
					EarthView_World_Spatial2D_GeoDataset_CSpatialIndexParamFactory_createSpatialIndexParam_ISpatialIndexParam_EVSpatialIndexEnum_Callback* m_EarthView_World_Spatial2D_GeoDataset_CSpatialIndexParamFactory_createSpatialIndexParam_ISpatialIndexParam_EVSpatialIndexEnum_Callback;
					EarthView_World_Spatial2D_GeoDataset_CSpatialIndexParamFactory_createSpatialIndexParam_ISpatialIndexParam_CDataStream_Callback* m_EarthView_World_Spatial2D_GeoDataset_CSpatialIndexParamFactory_createSpatialIndexParam_ISpatialIndexParam_CDataStream_Callback;
				public:
					CSpatialIndexParamFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CSpatialIndexParamFactory(pList)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CSpatialIndexParamFactory_createSpatialIndexParam_ISpatialIndexParam_EVSpatialIndexEnum_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CSpatialIndexParamFactory_createSpatialIndexParam_ISpatialIndexParam_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CSpatialIndexParamFactory_createSpatialIndexParam_ISpatialIndexParam_EVSpatialIndexEnum(EarthView_World_Spatial2D_GeoDataset_CSpatialIndexParamFactory_createSpatialIndexParam_ISpatialIndexParam_EVSpatialIndexEnum_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CSpatialIndexParamFactory_createSpatialIndexParam_ISpatialIndexParam_EVSpatialIndexEnum_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CSpatialIndexParamFactory_createSpatialIndexParam_ISpatialIndexParam_CDataStream(EarthView_World_Spatial2D_GeoDataset_CSpatialIndexParamFactory_createSpatialIndexParam_ISpatialIndexParam_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CSpatialIndexParamFactory_createSpatialIndexParam_ISpatialIndexParam_CDataStream_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::GeoDataset::ISpatialIndexParam* createSpatialIndexParam(_in EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum type)
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CSpatialIndexParamFactory_createSpatialIndexParam_ISpatialIndexParam_EVSpatialIndexEnum_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::ISpatialIndexParam* returnValue = m_EarthView_World_Spatial2D_GeoDataset_CSpatialIndexParamFactory_createSpatialIndexParam_ISpatialIndexParam_EVSpatialIndexEnum_Callback((int)type);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CSpatialIndexParamFactory::createSpatialIndexParam(type);
					}
					virtual EarthView::World::Spatial::GeoDataset::ISpatialIndexParam* createSpatialIndexParam(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CSpatialIndexParamFactory_createSpatialIndexParam_ISpatialIndexParam_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::ISpatialIndexParam* returnValue = m_EarthView_World_Spatial2D_GeoDataset_CSpatialIndexParamFactory_createSpatialIndexParam_ISpatialIndexParam_CDataStream_Callback(&stream);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CSpatialIndexParamFactory::createSpatialIndexParam(stream);
					}
				};
				REGISTER_FACTORY_CLASS(CSpatialIndexParamFactoryProxy);
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::ISpatialIndexParam*  _stdcall EarthView_World_Spatial2D_GeoDataset_CSpatialIndexParamFactory_createSpatialIndexParam_ISpatialIndexParam_EVSpatialIndexEnum(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial2D::GeoDataset::CSpatialIndexParamFactory* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CSpatialIndexParamFactory*) pObjectXXXX;
					if (dynamic_cast<CSpatialIndexParamFactoryProxy*>((EarthView::World::Spatial2D::GeoDataset::CSpatialIndexParamFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::ISpatialIndexParam* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CSpatialIndexParamFactory::createSpatialIndexParam((EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum)type);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::ISpatialIndexParam* objXXXX = ptrNativeObject->createSpatialIndexParam((EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum)type);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CSpatialIndexParamFactory_createSpatialIndexParam_ISpatialIndexParam_EVSpatialIndexEnum( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CSpatialIndexParamFactory_createSpatialIndexParam_ISpatialIndexParam_EVSpatialIndexEnum_Callback* pCallback )
				{
					CSpatialIndexParamFactoryProxy* ptr = dynamic_cast<CSpatialIndexParamFactoryProxy*>((EarthView::World::Spatial2D::GeoDataset::CSpatialIndexParamFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CSpatialIndexParamFactory_createSpatialIndexParam_ISpatialIndexParam_EVSpatialIndexEnum(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::ISpatialIndexParam*  _stdcall EarthView_World_Spatial2D_GeoDataset_CSpatialIndexParamFactory_createSpatialIndexParam_ISpatialIndexParam_EVSpatialIndexEnum_NoVirtual(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial2D::GeoDataset::CSpatialIndexParamFactory* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CSpatialIndexParamFactory*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::ISpatialIndexParam* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CSpatialIndexParamFactory::createSpatialIndexParam((EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum)type);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::ISpatialIndexParam*  _stdcall EarthView_World_Spatial2D_GeoDataset_CSpatialIndexParamFactory_createSpatialIndexParam_ISpatialIndexParam_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial2D::GeoDataset::CSpatialIndexParamFactory* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CSpatialIndexParamFactory*) pObjectXXXX;
					if (dynamic_cast<CSpatialIndexParamFactoryProxy*>((EarthView::World::Spatial2D::GeoDataset::CSpatialIndexParamFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::ISpatialIndexParam* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CSpatialIndexParamFactory::createSpatialIndexParam(*(EarthView::World::Core::CDataStream*)stream);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::ISpatialIndexParam* objXXXX = ptrNativeObject->createSpatialIndexParam(*(EarthView::World::Core::CDataStream*)stream);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CSpatialIndexParamFactory_createSpatialIndexParam_ISpatialIndexParam_CDataStream( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CSpatialIndexParamFactory_createSpatialIndexParam_ISpatialIndexParam_CDataStream_Callback* pCallback )
				{
					CSpatialIndexParamFactoryProxy* ptr = dynamic_cast<CSpatialIndexParamFactoryProxy*>((EarthView::World::Spatial2D::GeoDataset::CSpatialIndexParamFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CSpatialIndexParamFactory_createSpatialIndexParam_ISpatialIndexParam_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::ISpatialIndexParam*  _stdcall EarthView_World_Spatial2D_GeoDataset_CSpatialIndexParamFactory_createSpatialIndexParam_ISpatialIndexParam_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial2D::GeoDataset::CSpatialIndexParamFactory* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CSpatialIndexParamFactory*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::ISpatialIndexParam* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CSpatialIndexParamFactory::createSpatialIndexParam(*(EarthView::World::Core::CDataStream*)stream);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
			}
		}
	}
}
