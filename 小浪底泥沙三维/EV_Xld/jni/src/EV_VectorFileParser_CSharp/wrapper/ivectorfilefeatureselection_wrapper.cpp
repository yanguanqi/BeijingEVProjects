/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "vectorfileparser/ivectorfilefeatureselection.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace VectorFileParser
			{
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_getCount_ev_uint32_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_getID_ev_uint32_ev_uint32_Callback)(_in ev_uint32 index);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_getIDs_ev_uint32_ev_uint32_Callback)(_out ev_uint32* ids);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_findID_ev_int32_ev_uint32_Callback)(_in ev_uint32 id);
				typedef EarthView::World::Spatial::GeoDataset::IFeatureIterator*  ( _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_query_IFeatureIterator_IQueryFilter_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
				typedef EarthView::World::Spatial::GeoDataset::IFeatureSelection*  ( _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_select_IFeatureSelection_IQueryFilter_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_addID_ev_bool_ev_uint32_Callback)(_in ev_uint32 id);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_addIDs_ev_uint32_ev_uint32_ev_uint32_Callback)(_in ev_uint32* id, _in ev_uint32 size);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_remove_ev_uint32_ev_uint32_ev_uint32_Callback)(_in ev_uint32 index, _in ev_uint32 size);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_clear_ev_uint32_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_intersect_void_IFeatureSelection_Callback)(_in const EarthView::World::Spatial::GeoDataset::IFeatureSelection* set);
				typedef void  ( _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_difference_void_IFeatureSelection_Callback)(_in const EarthView::World::Spatial::GeoDataset::IFeatureSelection* set);
				typedef void  ( _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_append_void_IFeatureSelection_Callback)(_in const EarthView::World::Spatial::GeoDataset::IFeatureSelection* set);
				class IVectorFileFeatureSelectionProxy : public EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection
				{
				private:
					EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_getCount_ev_uint32_Callback* m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_getCount_ev_uint32_Callback;
					EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_getID_ev_uint32_ev_uint32_Callback* m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_getID_ev_uint32_ev_uint32_Callback;
					EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_getIDs_ev_uint32_ev_uint32_Callback* m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_getIDs_ev_uint32_ev_uint32_Callback;
					EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_findID_ev_int32_ev_uint32_Callback* m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_findID_ev_int32_ev_uint32_Callback;
					EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_query_IFeatureIterator_IQueryFilter_Callback* m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_query_IFeatureIterator_IQueryFilter_Callback;
					EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_select_IFeatureSelection_IQueryFilter_Callback* m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_select_IFeatureSelection_IQueryFilter_Callback;
					EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_addID_ev_bool_ev_uint32_Callback* m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_addID_ev_bool_ev_uint32_Callback;
					EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_addIDs_ev_uint32_ev_uint32_ev_uint32_Callback* m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_addIDs_ev_uint32_ev_uint32_ev_uint32_Callback;
					EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_remove_ev_uint32_ev_uint32_ev_uint32_Callback* m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_remove_ev_uint32_ev_uint32_ev_uint32_Callback;
					EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_clear_ev_uint32_Callback* m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_clear_ev_uint32_Callback;
					EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_intersect_void_IFeatureSelection_Callback* m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_intersect_void_IFeatureSelection_Callback;
					EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_difference_void_IFeatureSelection_Callback* m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_difference_void_IFeatureSelection_Callback;
					EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_append_void_IFeatureSelection_Callback* m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_append_void_IFeatureSelection_Callback;
				public:
					IVectorFileFeatureSelectionProxy(EarthView::World::Core::CNameValuePairList *pList) : IVectorFileFeatureSelection(pList)
					{
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_getCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_getID_ev_uint32_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_getIDs_ev_uint32_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_findID_ev_int32_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_query_IFeatureIterator_IQueryFilter_Callback = NULL;
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_select_IFeatureSelection_IQueryFilter_Callback = NULL;
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_addID_ev_bool_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_addIDs_ev_uint32_ev_uint32_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_remove_ev_uint32_ev_uint32_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_clear_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_intersect_void_IFeatureSelection_Callback = NULL;
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_difference_void_IFeatureSelection_Callback = NULL;
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_append_void_IFeatureSelection_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_getCount_ev_uint32(EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_getCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_getCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_getID_ev_uint32_ev_uint32(EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_getID_ev_uint32_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_getID_ev_uint32_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_getIDs_ev_uint32_ev_uint32(EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_getIDs_ev_uint32_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_getIDs_ev_uint32_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_findID_ev_int32_ev_uint32(EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_findID_ev_int32_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_findID_ev_int32_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_query_IFeatureIterator_IQueryFilter(EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_query_IFeatureIterator_IQueryFilter_Callback* pCallback)
					{
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_query_IFeatureIterator_IQueryFilter_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_select_IFeatureSelection_IQueryFilter(EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_select_IFeatureSelection_IQueryFilter_Callback* pCallback)
					{
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_select_IFeatureSelection_IQueryFilter_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_addID_ev_bool_ev_uint32(EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_addID_ev_bool_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_addID_ev_bool_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_addIDs_ev_uint32_ev_uint32_ev_uint32(EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_addIDs_ev_uint32_ev_uint32_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_addIDs_ev_uint32_ev_uint32_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_remove_ev_uint32_ev_uint32_ev_uint32(EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_remove_ev_uint32_ev_uint32_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_remove_ev_uint32_ev_uint32_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_clear_ev_uint32(EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_clear_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_clear_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_intersect_void_IFeatureSelection(EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_intersect_void_IFeatureSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_intersect_void_IFeatureSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_difference_void_IFeatureSelection(EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_difference_void_IFeatureSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_difference_void_IFeatureSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_append_void_IFeatureSelection(EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_append_void_IFeatureSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_append_void_IFeatureSelection_Callback = pCallback;
					}
					virtual ev_uint32 getCount() const
					{
						if(m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_getCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_getCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->IVectorFileFeatureSelection::getCount();
					}
					virtual ev_uint32 getID(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_getID_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_getID_ev_uint32_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->IVectorFileFeatureSelection::getID(index);
					}
					virtual ev_uint32 getIDs(_out ev_uint32* ids) const
					{
						if(m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_getIDs_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_getIDs_ev_uint32_ev_uint32_Callback(ids);
							return returnValue;
						}
						else
							return this->IVectorFileFeatureSelection::getIDs(ids);
					}
					virtual ev_int32 findID(_in ev_uint32 id) const
					{
						if(m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_findID_ev_int32_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_findID_ev_int32_ev_uint32_Callback(id);
							return returnValue;
						}
						else
							return this->IVectorFileFeatureSelection::findID(id);
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeatureIterator* query(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter) const
					{
						if(m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_query_IFeatureIterator_IQueryFilter_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeatureIterator* returnValue = m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_query_IFeatureIterator_IQueryFilter_Callback(filter);
							return returnValue;
						}
						else
							return this->IVectorFileFeatureSelection::query(filter);
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeatureSelection* select(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter) const
					{
						if(m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_select_IFeatureSelection_IQueryFilter_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeatureSelection* returnValue = m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_select_IFeatureSelection_IQueryFilter_Callback(filter);
							return returnValue;
						}
						else
							return this->IVectorFileFeatureSelection::select(filter);
					}
					virtual ev_bool addID(_in ev_uint32 id)
					{
						if(m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_addID_ev_bool_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_addID_ev_bool_ev_uint32_Callback(id);
							return returnValue;
						}
						else
							return this->IVectorFileFeatureSelection::addID(id);
					}
					virtual ev_uint32 addIDs(_in ev_uint32* id, _in ev_uint32 size)
					{
						if(m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_addIDs_ev_uint32_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_addIDs_ev_uint32_ev_uint32_ev_uint32_Callback(id, size);
							return returnValue;
						}
						else
							return this->IVectorFileFeatureSelection::addIDs(id, size);
					}
					virtual ev_uint32 remove(_in ev_uint32 index, _in ev_uint32 size)
					{
						if(m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_remove_ev_uint32_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_remove_ev_uint32_ev_uint32_ev_uint32_Callback(index, size);
							return returnValue;
						}
						else
							return this->IVectorFileFeatureSelection::remove(index, size);
					}
					virtual ev_uint32 clear()
					{
						if(m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_clear_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_clear_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->IVectorFileFeatureSelection::clear();
					}
					virtual void intersect(_in const EarthView::World::Spatial::GeoDataset::IFeatureSelection* set)
					{
						if(m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_intersect_void_IFeatureSelection_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_intersect_void_IFeatureSelection_Callback(set);
						}
						else
							return this->IVectorFileFeatureSelection::intersect(set);
					}
					virtual void difference(_in const EarthView::World::Spatial::GeoDataset::IFeatureSelection* set)
					{
						if(m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_difference_void_IFeatureSelection_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_difference_void_IFeatureSelection_Callback(set);
						}
						else
							return this->IVectorFileFeatureSelection::difference(set);
					}
					virtual void append(_in const EarthView::World::Spatial::GeoDataset::IFeatureSelection* set)
					{
						if(m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_append_void_IFeatureSelection_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_append_void_IFeatureSelection_Callback(set);
						}
						else
							return this->IVectorFileFeatureSelection::append(set);
					}
				};
				REGISTER_FACTORY_CLASS(IVectorFileFeatureSelectionProxy);
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_getCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection*) pObjectXXXX;
					if (dynamic_cast<IVectorFileFeatureSelectionProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection::getCount();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_getCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_getCount_ev_uint32_Callback* pCallback )
				{
					IVectorFileFeatureSelectionProxy* ptr = dynamic_cast<IVectorFileFeatureSelectionProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_getCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_getCount_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection::getCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_getID_ev_uint32_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection*) pObjectXXXX;
					if (dynamic_cast<IVectorFileFeatureSelectionProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection::getID(index);
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getID(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_getID_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_getID_ev_uint32_ev_uint32_Callback* pCallback )
				{
					IVectorFileFeatureSelectionProxy* ptr = dynamic_cast<IVectorFileFeatureSelectionProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_getID_ev_uint32_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_getID_ev_uint32_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection::getID(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_getIDs_ev_uint32_ev_uint32(void *pObjectXXXX, _out ev_uint32* ids )
				{
					const EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection*) pObjectXXXX;
					if (dynamic_cast<IVectorFileFeatureSelectionProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection::getIDs(ids);
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getIDs(ids);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_getIDs_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_getIDs_ev_uint32_ev_uint32_Callback* pCallback )
				{
					IVectorFileFeatureSelectionProxy* ptr = dynamic_cast<IVectorFileFeatureSelectionProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_getIDs_ev_uint32_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_getIDs_ev_uint32_ev_uint32_NoVirtual(void *pObjectXXXX, _out ev_uint32* ids )
				{
					const EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection::getIDs(ids);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_findID_ev_int32_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
				{
					const EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection*) pObjectXXXX;
					if (dynamic_cast<IVectorFileFeatureSelectionProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection::findID(id);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->findID(id);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_findID_ev_int32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_findID_ev_int32_ev_uint32_Callback* pCallback )
				{
					IVectorFileFeatureSelectionProxy* ptr = dynamic_cast<IVectorFileFeatureSelectionProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_findID_ev_int32_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_findID_ev_int32_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 id )
				{
					const EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection::findID(id);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureIterator*  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_query_IFeatureIterator_IQueryFilter(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter )
				{
					const EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection*) pObjectXXXX;
					if (dynamic_cast<IVectorFileFeatureSelectionProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IFeatureIterator* objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection::query(filter);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IFeatureIterator* objXXXX = ptrNativeObject->query(filter);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_query_IFeatureIterator_IQueryFilter( void *pObjectXXXX, EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_query_IFeatureIterator_IQueryFilter_Callback* pCallback )
				{
					IVectorFileFeatureSelectionProxy* ptr = dynamic_cast<IVectorFileFeatureSelectionProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_query_IFeatureIterator_IQueryFilter(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureIterator*  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_query_IFeatureIterator_IQueryFilter_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter )
				{
					const EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeatureIterator* objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection::query(filter);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureSelection*  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_select_IFeatureSelection_IQueryFilter(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter )
				{
					const EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection*) pObjectXXXX;
					if (dynamic_cast<IVectorFileFeatureSelectionProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IFeatureSelection* objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection::select(filter);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IFeatureSelection* objXXXX = ptrNativeObject->select(filter);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_select_IFeatureSelection_IQueryFilter( void *pObjectXXXX, EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_select_IFeatureSelection_IQueryFilter_Callback* pCallback )
				{
					IVectorFileFeatureSelectionProxy* ptr = dynamic_cast<IVectorFileFeatureSelectionProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_select_IFeatureSelection_IQueryFilter(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureSelection*  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_select_IFeatureSelection_IQueryFilter_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter )
				{
					const EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeatureSelection* objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection::select(filter);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_addID_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection*) pObjectXXXX;
					if (dynamic_cast<IVectorFileFeatureSelectionProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection::addID(id);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->addID(id);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_addID_ev_bool_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_addID_ev_bool_ev_uint32_Callback* pCallback )
				{
					IVectorFileFeatureSelectionProxy* ptr = dynamic_cast<IVectorFileFeatureSelectionProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_addID_ev_bool_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_addID_ev_bool_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection::addID(id);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_addIDs_ev_uint32_ev_uint32_ev_uint32(void *pObjectXXXX, _in ev_uint32* id, _in ev_uint32 size )
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection*) pObjectXXXX;
					if (dynamic_cast<IVectorFileFeatureSelectionProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection::addIDs(id, size);
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->addIDs(id, size);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_addIDs_ev_uint32_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_addIDs_ev_uint32_ev_uint32_ev_uint32_Callback* pCallback )
				{
					IVectorFileFeatureSelectionProxy* ptr = dynamic_cast<IVectorFileFeatureSelectionProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_addIDs_ev_uint32_ev_uint32_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_addIDs_ev_uint32_ev_uint32_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32* id, _in ev_uint32 size )
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection::addIDs(id, size);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_remove_ev_uint32_ev_uint32_ev_uint32(void *pObjectXXXX, _in ev_uint32 index, _in ev_uint32 size )
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection*) pObjectXXXX;
					if (dynamic_cast<IVectorFileFeatureSelectionProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection::remove(index, size);
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->remove(index, size);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_remove_ev_uint32_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_remove_ev_uint32_ev_uint32_ev_uint32_Callback* pCallback )
				{
					IVectorFileFeatureSelectionProxy* ptr = dynamic_cast<IVectorFileFeatureSelectionProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_remove_ev_uint32_ev_uint32_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_remove_ev_uint32_ev_uint32_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index, _in ev_uint32 size )
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection::remove(index, size);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_clear_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection*) pObjectXXXX;
					if (dynamic_cast<IVectorFileFeatureSelectionProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection::clear();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->clear();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_clear_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_clear_ev_uint32_Callback* pCallback )
				{
					IVectorFileFeatureSelectionProxy* ptr = dynamic_cast<IVectorFileFeatureSelectionProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_clear_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_clear_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection::clear();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_intersect_void_IFeatureSelection(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IFeatureSelection* set )
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection*) pObjectXXXX;
					if (dynamic_cast<IVectorFileFeatureSelectionProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection::intersect(set);
					else
						ptrNativeObject->intersect(set);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_intersect_void_IFeatureSelection( void *pObjectXXXX, EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_intersect_void_IFeatureSelection_Callback* pCallback )
				{
					IVectorFileFeatureSelectionProxy* ptr = dynamic_cast<IVectorFileFeatureSelectionProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_intersect_void_IFeatureSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_intersect_void_IFeatureSelection_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IFeatureSelection* set )
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection::intersect(set);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_difference_void_IFeatureSelection(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IFeatureSelection* set )
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection*) pObjectXXXX;
					if (dynamic_cast<IVectorFileFeatureSelectionProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection::difference(set);
					else
						ptrNativeObject->difference(set);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_difference_void_IFeatureSelection( void *pObjectXXXX, EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_difference_void_IFeatureSelection_Callback* pCallback )
				{
					IVectorFileFeatureSelectionProxy* ptr = dynamic_cast<IVectorFileFeatureSelectionProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_difference_void_IFeatureSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_difference_void_IFeatureSelection_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IFeatureSelection* set )
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection::difference(set);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_append_void_IFeatureSelection(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IFeatureSelection* set )
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection*) pObjectXXXX;
					if (dynamic_cast<IVectorFileFeatureSelectionProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection::append(set);
					else
						ptrNativeObject->append(set);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_append_void_IFeatureSelection( void *pObjectXXXX, EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_append_void_IFeatureSelection_Callback* pCallback )
				{
					IVectorFileFeatureSelectionProxy* ptr = dynamic_cast<IVectorFileFeatureSelectionProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_append_void_IFeatureSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileFeatureSelection_append_void_IFeatureSelection_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IFeatureSelection* set )
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection::append(set);
				}
			}
		}
	}
}
