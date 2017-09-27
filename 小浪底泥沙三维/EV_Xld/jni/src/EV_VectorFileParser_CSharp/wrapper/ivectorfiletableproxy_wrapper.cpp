/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "vectorfileparser/ivectorfiletableproxy.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace VectorFileParser
			{
				typedef void*  ( _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileTableProxy_max_CVariant_EVString_Callback)(_in char*& expression);
				typedef void*  ( _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileTableProxy_min_CVariant_EVString_Callback)(_in char*& expression);
				typedef void*  ( _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileTableProxy_column_CVariantArray_EVString_ev_bool_Callback)(_in char*& fieldName, _in ev_bool isUnique);
				class IVectorFileTableProxyProxy : public EarthView::World::Spatial::VectorFileParser::IVectorFileTableProxy
				{
				private:
					EarthView_World_Spatial_VectorFileParser_IVectorFileTableProxy_max_CVariant_EVString_Callback* m_EarthView_World_Spatial_VectorFileParser_IVectorFileTableProxy_max_CVariant_EVString_Callback;
					EarthView_World_Spatial_VectorFileParser_IVectorFileTableProxy_min_CVariant_EVString_Callback* m_EarthView_World_Spatial_VectorFileParser_IVectorFileTableProxy_min_CVariant_EVString_Callback;
					EarthView_World_Spatial_VectorFileParser_IVectorFileTableProxy_column_CVariantArray_EVString_ev_bool_Callback* m_EarthView_World_Spatial_VectorFileParser_IVectorFileTableProxy_column_CVariantArray_EVString_ev_bool_Callback;
				public:
					IVectorFileTableProxyProxy(EarthView::World::Core::CNameValuePairList *pList) : IVectorFileTableProxy(pList)
					{
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileTableProxy_max_CVariant_EVString_Callback = NULL;
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileTableProxy_min_CVariant_EVString_Callback = NULL;
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileTableProxy_column_CVariantArray_EVString_ev_bool_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileTableProxy_max_CVariant_EVString(EarthView_World_Spatial_VectorFileParser_IVectorFileTableProxy_max_CVariant_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileTableProxy_max_CVariant_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileTableProxy_min_CVariant_EVString(EarthView_World_Spatial_VectorFileParser_IVectorFileTableProxy_min_CVariant_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileTableProxy_min_CVariant_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileTableProxy_column_CVariantArray_EVString_ev_bool(EarthView_World_Spatial_VectorFileParser_IVectorFileTableProxy_column_CVariantArray_EVString_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileTableProxy_column_CVariantArray_EVString_ev_bool_Callback = pCallback;
					}
					virtual EarthView::World::Core::CVariant max(_in const EVString& expression)
					{
						if(m_EarthView_World_Spatial_VectorFileParser_IVectorFileTableProxy_max_CVariant_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* expression_Char = expression.makeBuffer();
							EarthView::World::Core::CVariant returnValue = *(EarthView::World::Core::CVariant*)m_EarthView_World_Spatial_VectorFileParser_IVectorFileTableProxy_max_CVariant_EVString_Callback(expression_Char);
							return returnValue;
						}
						else
							return this->IVectorFileTableProxy::max(expression);
					}
					virtual EarthView::World::Core::CVariant min(_in const EVString& expression)
					{
						if(m_EarthView_World_Spatial_VectorFileParser_IVectorFileTableProxy_min_CVariant_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* expression_Char = expression.makeBuffer();
							EarthView::World::Core::CVariant returnValue = *(EarthView::World::Core::CVariant*)m_EarthView_World_Spatial_VectorFileParser_IVectorFileTableProxy_min_CVariant_EVString_Callback(expression_Char);
							return returnValue;
						}
						else
							return this->IVectorFileTableProxy::min(expression);
					}
					virtual EarthView::World::Core::CVariantArray column(_in const EVString& fieldName, _in ev_bool isUnique)
					{
						if(m_EarthView_World_Spatial_VectorFileParser_IVectorFileTableProxy_column_CVariantArray_EVString_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							char* fieldName_Char = fieldName.makeBuffer();
							EarthView::World::Core::CVariantArray returnValue = *(EarthView::World::Core::CVariantArray*)m_EarthView_World_Spatial_VectorFileParser_IVectorFileTableProxy_column_CVariantArray_EVString_ev_bool_Callback(fieldName_Char, isUnique);
							return returnValue;
						}
						else
							return this->IVectorFileTableProxy::column(fieldName, isUnique);
					}
				};
				REGISTER_FACTORY_CLASS(IVectorFileTableProxyProxy);
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileTableProxy_max_CVariant_EVString(void *pObjectXXXX, _in const char* expression )
				{
					EarthView::World::Core::ev_string expression1 = expression;
					EarthView::World::Spatial::VectorFileParser::IVectorFileTableProxy* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileTableProxy*) pObjectXXXX;
					if (dynamic_cast<IVectorFileTableProxyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileTableProxy*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CVariant objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileTableProxy::max(expression1);
						EarthView::World::Core::CVariant *pXXXX = new EarthView::World::Core::CVariant(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Core::CVariant objXXXX = ptrNativeObject->max(expression1);
						EarthView::World::Core::CVariant *pXXXX = new EarthView::World::Core::CVariant(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileTableProxy_max_CVariant_EVString( void *pObjectXXXX, EarthView_World_Spatial_VectorFileParser_IVectorFileTableProxy_max_CVariant_EVString_Callback* pCallback )
				{
					IVectorFileTableProxyProxy* ptr = dynamic_cast<IVectorFileTableProxyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileTableProxy*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileTableProxy_max_CVariant_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileTableProxy_max_CVariant_EVString_NoVirtual(void *pObjectXXXX, _in const char* expression )
				{
					EarthView::World::Core::ev_string expression1 = expression;
					EarthView::World::Spatial::VectorFileParser::IVectorFileTableProxy* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileTableProxy*) pObjectXXXX;
					EarthView::World::Core::CVariant objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileTableProxy::max(expression1);
					EarthView::World::Core::CVariant *pXXXX = new EarthView::World::Core::CVariant(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileTableProxy_min_CVariant_EVString(void *pObjectXXXX, _in const char* expression )
				{
					EarthView::World::Core::ev_string expression1 = expression;
					EarthView::World::Spatial::VectorFileParser::IVectorFileTableProxy* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileTableProxy*) pObjectXXXX;
					if (dynamic_cast<IVectorFileTableProxyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileTableProxy*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CVariant objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileTableProxy::min(expression1);
						EarthView::World::Core::CVariant *pXXXX = new EarthView::World::Core::CVariant(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Core::CVariant objXXXX = ptrNativeObject->min(expression1);
						EarthView::World::Core::CVariant *pXXXX = new EarthView::World::Core::CVariant(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileTableProxy_min_CVariant_EVString( void *pObjectXXXX, EarthView_World_Spatial_VectorFileParser_IVectorFileTableProxy_min_CVariant_EVString_Callback* pCallback )
				{
					IVectorFileTableProxyProxy* ptr = dynamic_cast<IVectorFileTableProxyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileTableProxy*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileTableProxy_min_CVariant_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileTableProxy_min_CVariant_EVString_NoVirtual(void *pObjectXXXX, _in const char* expression )
				{
					EarthView::World::Core::ev_string expression1 = expression;
					EarthView::World::Spatial::VectorFileParser::IVectorFileTableProxy* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileTableProxy*) pObjectXXXX;
					EarthView::World::Core::CVariant objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileTableProxy::min(expression1);
					EarthView::World::Core::CVariant *pXXXX = new EarthView::World::Core::CVariant(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileTableProxy_column_CVariantArray_EVString_ev_bool(void *pObjectXXXX, _in const char* fieldName, _in ev_bool isUnique )
				{
					EarthView::World::Core::ev_string fieldName1 = fieldName;
					EarthView::World::Spatial::VectorFileParser::IVectorFileTableProxy* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileTableProxy*) pObjectXXXX;
					if (dynamic_cast<IVectorFileTableProxyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileTableProxy*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CVariantArray objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileTableProxy::column(fieldName1, isUnique);
						EarthView::World::Core::CVariantArray *pXXXX = new EarthView::World::Core::CVariantArray(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Core::CVariantArray objXXXX = ptrNativeObject->column(fieldName1, isUnique);
						EarthView::World::Core::CVariantArray *pXXXX = new EarthView::World::Core::CVariantArray(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileTableProxy_column_CVariantArray_EVString_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_VectorFileParser_IVectorFileTableProxy_column_CVariantArray_EVString_ev_bool_Callback* pCallback )
				{
					IVectorFileTableProxyProxy* ptr = dynamic_cast<IVectorFileTableProxyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileTableProxy*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileTableProxy_column_CVariantArray_EVString_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileTableProxy_column_CVariantArray_EVString_ev_bool_NoVirtual(void *pObjectXXXX, _in const char* fieldName, _in ev_bool isUnique )
				{
					EarthView::World::Core::ev_string fieldName1 = fieldName;
					EarthView::World::Spatial::VectorFileParser::IVectorFileTableProxy* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileTableProxy*) pObjectXXXX;
					EarthView::World::Core::CVariantArray objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileTableProxy::column(fieldName1, isUnique);
					EarthView::World::Core::CVariantArray *pXXXX = new EarthView::World::Core::CVariantArray(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
		}
	}
}
