/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataset/modeltemplateplugin.h"
extern "C" EV_DLL_EXPORT  char*  _stdcall CResourceData_getName_EVString(void *pObjectXXXX )
{
	CResourceData* ptrNativeObject = (CResourceData*) pObjectXXXX;
	EVString objXXXX = ptrNativeObject->getName();
	return objXXXX.makeBuffer();
}
extern "C" EV_DLL_EXPORT  void  _stdcall CResourceData_setName_void_EVString(void *pObjectXXXX, _in const char* name )
{
	EarthView::World::Core::ev_string name1 = name;
	CResourceData* ptrNativeObject = (CResourceData*) pObjectXXXX;
	ptrNativeObject->setName(name1);
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CResourceData_getDataType_EVString(void *pObjectXXXX )
{
	CResourceData* ptrNativeObject = (CResourceData*) pObjectXXXX;
	EVString objXXXX = ptrNativeObject->getDataType();
	return objXXXX.makeBuffer();
}
extern "C" EV_DLL_EXPORT  void  _stdcall CResourceData_setDataType_void_EVString(void *pObjectXXXX, _in const char* dataType )
{
	EarthView::World::Core::ev_string dataType1 = dataType;
	CResourceData* ptrNativeObject = (CResourceData*) pObjectXXXX;
	ptrNativeObject->setDataType(dataType1);
}
extern "C" EV_DLL_EXPORT  void*  _stdcall CResourceData_getResourceData_MemoryDataStreamPtr(void *pObjectXXXX )
{
	CResourceData* ptrNativeObject = (CResourceData*) pObjectXXXX;
	EarthView::World::Core::MemoryDataStreamPtr objXXXX = ptrNativeObject->getResourceData();
	EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
	((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
	return (void*)pXXXX;
}
extern "C" EV_DLL_EXPORT  void  _stdcall CResourceData_setResourceData_void_MemoryDataStreamPtr(void *pObjectXXXX, _in const void* data )
{
	CResourceData* ptrNativeObject = (CResourceData*) pObjectXXXX;
	ptrNativeObject->setResourceData(*(EarthView::World::Core::MemoryDataStreamPtr*)data);
}
extern "C" EV_DLL_EXPORT  int  _stdcall CResourceData_getResourceType_MaterialResourceType(void *pObjectXXXX )
{
	CResourceData* ptrNativeObject = (CResourceData*) pObjectXXXX;
	EarthView::World::Spatial3D::Dataset::MaterialResourceType objXXXX = ptrNativeObject->getResourceType();
	return (int)objXXXX;
}
extern "C" EV_DLL_EXPORT  void  _stdcall CResourceData_setResourceType_void_MaterialResourceType(void *pObjectXXXX, _in int type )
{
	CResourceData* ptrNativeObject = (CResourceData*) pObjectXXXX;
	ptrNativeObject->setResourceType((EarthView::World::Spatial3D::Dataset::MaterialResourceType)type);
}
extern "C" EV_DLL_EXPORT  void  _stdcall CResourceDataList_push_back_void_CResourceData(void *pObjectXXXX, _in void* t )
{
	CResourceDataList* ptrNativeObject = (CResourceDataList*) pObjectXXXX;
	ptrNativeObject->push_back(*(CResourceData*)t);
}
extern "C" EV_DLL_EXPORT  void  _stdcall CResourceDataList_push_front_void_CResourceData(void *pObjectXXXX, _in void* t )
{
	CResourceDataList* ptrNativeObject = (CResourceDataList*) pObjectXXXX;
	ptrNativeObject->push_front(*(CResourceData*)t);
}
extern "C" EV_DLL_EXPORT  void  _stdcall CResourceDataList_pop_back_void(void *pObjectXXXX )
{
	CResourceDataList* ptrNativeObject = (CResourceDataList*) pObjectXXXX;
	ptrNativeObject->pop_back();
}
extern "C" EV_DLL_EXPORT  void  _stdcall CResourceDataList_pop_front_void(void *pObjectXXXX )
{
	CResourceDataList* ptrNativeObject = (CResourceDataList*) pObjectXXXX;
	ptrNativeObject->pop_front();
}
extern "C" EV_DLL_EXPORT  void*  _stdcall CResourceDataList_front_CResourceData(void *pObjectXXXX )
{
	CResourceDataList* ptrNativeObject = (CResourceDataList*) pObjectXXXX;
	CResourceData& objXXXX = ptrNativeObject->front();
	CResourceData *pXXXX = &objXXXX;
	return (void*)pXXXX;
}
extern "C" EV_DLL_EXPORT  void*  _stdcall CResourceDataList_back_CResourceData(void *pObjectXXXX )
{
	CResourceDataList* ptrNativeObject = (CResourceDataList*) pObjectXXXX;
	CResourceData& objXXXX = ptrNativeObject->back();
	CResourceData *pXXXX = &objXXXX;
	return (void*)pXXXX;
}
extern "C" EV_DLL_EXPORT  void*  _stdcall CResourceDataList_at_CResourceData_ev_uint32(void *pObjectXXXX, _in ev_uint32 pos )
{
	CResourceDataList* ptrNativeObject = (CResourceDataList*) pObjectXXXX;
	CResourceData& objXXXX = ptrNativeObject->at(pos);
	CResourceData *pXXXX = &objXXXX;
	return (void*)pXXXX;
}
extern "C" EV_DLL_EXPORT  void  _stdcall CResourceDataList_insert_void_ev_uint32_CResourceData(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
{
	CResourceDataList* ptrNativeObject = (CResourceDataList*) pObjectXXXX;
	ptrNativeObject->insert(pos, *(CResourceData*)t);
}
extern "C" EV_DLL_EXPORT  void  _stdcall CResourceDataList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
{
	CResourceDataList* ptrNativeObject = (CResourceDataList*) pObjectXXXX;
	ptrNativeObject->remove(pos);
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CResourceDataList_empty_ev_bool(void *pObjectXXXX )
{
	const CResourceDataList* ptrNativeObject = (CResourceDataList*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->empty();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall CResourceDataList_size_ev_size_t(void *pObjectXXXX )
{
	const CResourceDataList* ptrNativeObject = (CResourceDataList*) pObjectXXXX;
	ev_size_t objXXXX = ptrNativeObject->size();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  void  _stdcall CResourceDataList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
{
	CResourceDataList* ptrNativeObject = (CResourceDataList*) pObjectXXXX;
	ptrNativeObject->resize(newSize);
}
extern "C" EV_DLL_EXPORT  void  _stdcall CResourceDataList_clear_void(void *pObjectXXXX )
{
	CResourceDataList* ptrNativeObject = (CResourceDataList*) pObjectXXXX;
	ptrNativeObject->clear();
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CModelData_getName_EVString(void *pObjectXXXX )
{
	CModelData* ptrNativeObject = (CModelData*) pObjectXXXX;
	EVString objXXXX = ptrNativeObject->getName();
	return objXXXX.makeBuffer();
}
extern "C" EV_DLL_EXPORT  void  _stdcall CModelData_setName_void_EVString(void *pObjectXXXX, _in const char* name )
{
	EarthView::World::Core::ev_string name1 = name;
	CModelData* ptrNativeObject = (CModelData*) pObjectXXXX;
	ptrNativeObject->setName(name1);
}
extern "C" EV_DLL_EXPORT  void  _stdcall CModelData_setModelData_void_MemoryDataStreamPtr(void *pObjectXXXX, _in const void* data )
{
	CModelData* ptrNativeObject = (CModelData*) pObjectXXXX;
	ptrNativeObject->setModelData(*(EarthView::World::Core::MemoryDataStreamPtr*)data);
}
extern "C" EV_DLL_EXPORT  void*  _stdcall CModelData_getModelData_MemoryDataStreamPtr(void *pObjectXXXX )
{
	CModelData* ptrNativeObject = (CModelData*) pObjectXXXX;
	EarthView::World::Core::MemoryDataStreamPtr objXXXX = ptrNativeObject->getModelData();
	EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
	((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
	return (void*)pXXXX;
}
extern "C" EV_DLL_EXPORT  void  _stdcall CModelData_setDataType_void_EVString(void *pObjectXXXX, _in const char* dataType )
{
	EarthView::World::Core::ev_string dataType1 = dataType;
	CModelData* ptrNativeObject = (CModelData*) pObjectXXXX;
	ptrNativeObject->setDataType(dataType1);
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CModelData_getDataType_EVString(void *pObjectXXXX )
{
	CModelData* ptrNativeObject = (CModelData*) pObjectXXXX;
	EVString objXXXX = ptrNativeObject->getDataType();
	return objXXXX.makeBuffer();
}
extern "C" EV_DLL_EXPORT  void  _stdcall CModelData_setBoundingbox_void_CAxisAlignedBox(void *pObjectXXXX, _in const void* box )
{
	CModelData* ptrNativeObject = (CModelData*) pObjectXXXX;
	ptrNativeObject->setBoundingbox(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)box);
}
extern "C" EV_DLL_EXPORT  void*  _stdcall CModelData_getBoundingbox_CAxisAlignedBox(void *pObjectXXXX )
{
	CModelData* ptrNativeObject = (CModelData*) pObjectXXXX;
	EarthView::World::Spatial::Math::CAxisAlignedBox objXXXX = ptrNativeObject->getBoundingbox();
	EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = new EarthView::World::Spatial::Math::CAxisAlignedBox(objXXXX);
	((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
	return (void*)pXXXX;
}
extern "C" EV_DLL_EXPORT  void  _stdcall CModelData_setResourceList_void_CResourceDataList(void *pObjectXXXX, _in const void* res )
{
	CModelData* ptrNativeObject = (CModelData*) pObjectXXXX;
	ptrNativeObject->setResourceList(*(CResourceDataList*)res);
}
extern "C" EV_DLL_EXPORT  void*  _stdcall CModelData_getResourceList_CResourceDataList(void *pObjectXXXX )
{
	CModelData* ptrNativeObject = (CModelData*) pObjectXXXX;
	CResourceDataList objXXXX = ptrNativeObject->getResourceList();
	CResourceDataList *pXXXX = new CResourceDataList(objXXXX);
	((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
	return (void*)pXXXX;
}
typedef bool  ( _stdcall IModelTemplatePlugin_getImportModelData_bool_EVString_CModelData_Callback)(_in char*& meshPath, _out void* importModelData);
typedef char*  ( _stdcall IModelTemplatePlugin_getPluginName_EVString_Callback)();
typedef bool  ( _stdcall IModelTemplatePlugin_getRealResourceData_bool_CResourceData_CResourceData_Callback)(_in void* srcResourceData, _out void* destResourceData);
typedef bool  ( _stdcall IModelTemplatePlugin_getRealModelData_bool_CModelData_CModelData_Callback)(_in void* srcResourceData, _out void* destModelData);
class IModelTemplatePluginProxy : public IModelTemplatePlugin
{
private:
	IModelTemplatePlugin_getImportModelData_bool_EVString_CModelData_Callback* m_IModelTemplatePlugin_getImportModelData_bool_EVString_CModelData_Callback;
	IModelTemplatePlugin_getPluginName_EVString_Callback* m_IModelTemplatePlugin_getPluginName_EVString_Callback;
	IModelTemplatePlugin_getRealResourceData_bool_CResourceData_CResourceData_Callback* m_IModelTemplatePlugin_getRealResourceData_bool_CResourceData_CResourceData_Callback;
	IModelTemplatePlugin_getRealModelData_bool_CModelData_CModelData_Callback* m_IModelTemplatePlugin_getRealModelData_bool_CModelData_CModelData_Callback;
public:
	IModelTemplatePluginProxy(EarthView::World::Core::CNameValuePairList *pList) : IModelTemplatePlugin(pList)
	{
		m_IModelTemplatePlugin_getImportModelData_bool_EVString_CModelData_Callback = NULL;
		m_IModelTemplatePlugin_getPluginName_EVString_Callback = NULL;
		m_IModelTemplatePlugin_getRealResourceData_bool_CResourceData_CResourceData_Callback = NULL;
		m_IModelTemplatePlugin_getRealModelData_bool_CModelData_CModelData_Callback = NULL;
	}
public:
	ev_void registerCallback_IModelTemplatePlugin_getImportModelData_bool_EVString_CModelData(IModelTemplatePlugin_getImportModelData_bool_EVString_CModelData_Callback* pCallback)
	{
		m_IModelTemplatePlugin_getImportModelData_bool_EVString_CModelData_Callback = pCallback;
	}
	ev_void registerCallback_IModelTemplatePlugin_getPluginName_EVString(IModelTemplatePlugin_getPluginName_EVString_Callback* pCallback)
	{
		m_IModelTemplatePlugin_getPluginName_EVString_Callback = pCallback;
	}
	ev_void registerCallback_IModelTemplatePlugin_getRealResourceData_bool_CResourceData_CResourceData(IModelTemplatePlugin_getRealResourceData_bool_CResourceData_CResourceData_Callback* pCallback)
	{
		m_IModelTemplatePlugin_getRealResourceData_bool_CResourceData_CResourceData_Callback = pCallback;
	}
	ev_void registerCallback_IModelTemplatePlugin_getRealModelData_bool_CModelData_CModelData(IModelTemplatePlugin_getRealModelData_bool_CModelData_CModelData_Callback* pCallback)
	{
		m_IModelTemplatePlugin_getRealModelData_bool_CModelData_CModelData_Callback = pCallback;
	}
	virtual bool getImportModelData(_in const EVString& meshPath, _out CModelData& importModelData)
	{
		if(m_IModelTemplatePlugin_getImportModelData_bool_EVString_CModelData_Callback != NULL && this->isCustomExtend())
		{
			char* meshPath_Char = meshPath.makeBuffer();
			bool returnValue = m_IModelTemplatePlugin_getImportModelData_bool_EVString_CModelData_Callback(meshPath_Char, &importModelData);
			return returnValue;
		}
		else
			return this->IModelTemplatePlugin::getImportModelData(meshPath, importModelData);
	}
	virtual EVString getPluginName()
	{
		if(m_IModelTemplatePlugin_getPluginName_EVString_Callback != NULL && this->isCustomExtend())
		{
			EVString returnValue = m_IModelTemplatePlugin_getPluginName_EVString_Callback();
			return returnValue;
		}
		else
			return this->IModelTemplatePlugin::getPluginName();
	}
	virtual bool getRealResourceData(_in CResourceData& srcResourceData, _out CResourceData& destResourceData)
	{
		if(m_IModelTemplatePlugin_getRealResourceData_bool_CResourceData_CResourceData_Callback != NULL && this->isCustomExtend())
		{
			bool returnValue = m_IModelTemplatePlugin_getRealResourceData_bool_CResourceData_CResourceData_Callback(&srcResourceData, &destResourceData);
			return returnValue;
		}
		else
			return this->IModelTemplatePlugin::getRealResourceData(srcResourceData, destResourceData);
	}
	virtual bool getRealModelData(_in CModelData& srcResourceData, _out CModelData& destModelData)
	{
		if(m_IModelTemplatePlugin_getRealModelData_bool_CModelData_CModelData_Callback != NULL && this->isCustomExtend())
		{
			bool returnValue = m_IModelTemplatePlugin_getRealModelData_bool_CModelData_CModelData_Callback(&srcResourceData, &destModelData);
			return returnValue;
		}
		else
			return this->IModelTemplatePlugin::getRealModelData(srcResourceData, destModelData);
	}
};
REGISTER_FACTORY_CLASS(IModelTemplatePluginProxy);
extern "C" EV_DLL_EXPORT  bool  _stdcall IModelTemplatePlugin_getImportModelData_bool_EVString_CModelData(void *pObjectXXXX, _in const char* meshPath, _out void* importModelData )
{
	EarthView::World::Core::ev_string meshPath1 = meshPath;
	IModelTemplatePlugin* ptrNativeObject = (IModelTemplatePlugin*) pObjectXXXX;
	if (dynamic_cast<IModelTemplatePluginProxy*>((IModelTemplatePlugin*)ptrNativeObject) != NULL)
	{
		bool objXXXX = ptrNativeObject->IModelTemplatePlugin::getImportModelData(meshPath1, *(CModelData*)importModelData);
		return objXXXX;
	}
	else
	{
		bool objXXXX = ptrNativeObject->getImportModelData(meshPath1, *(CModelData*)importModelData);
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_IModelTemplatePlugin_getImportModelData_bool_EVString_CModelData( void *pObjectXXXX, IModelTemplatePlugin_getImportModelData_bool_EVString_CModelData_Callback* pCallback )
{
	IModelTemplatePluginProxy* ptr = dynamic_cast<IModelTemplatePluginProxy*>((IModelTemplatePlugin*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_IModelTemplatePlugin_getImportModelData_bool_EVString_CModelData(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  bool  _stdcall IModelTemplatePlugin_getImportModelData_bool_EVString_CModelData_NoVirtual(void *pObjectXXXX, _in const char* meshPath, _out void* importModelData )
{
	EarthView::World::Core::ev_string meshPath1 = meshPath;
	IModelTemplatePlugin* ptrNativeObject = (IModelTemplatePlugin*) pObjectXXXX;
	bool objXXXX = ptrNativeObject->IModelTemplatePlugin::getImportModelData(meshPath1, *(CModelData*)importModelData);
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  char*  _stdcall IModelTemplatePlugin_getPluginName_EVString(void *pObjectXXXX )
{
	IModelTemplatePlugin* ptrNativeObject = (IModelTemplatePlugin*) pObjectXXXX;
	if (dynamic_cast<IModelTemplatePluginProxy*>((IModelTemplatePlugin*)ptrNativeObject) != NULL)
	{
		EVString objXXXX = ptrNativeObject->IModelTemplatePlugin::getPluginName();
		return objXXXX.makeBuffer();
	}
	else
	{
		EVString objXXXX = ptrNativeObject->getPluginName();
		return objXXXX.makeBuffer();
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_IModelTemplatePlugin_getPluginName_EVString( void *pObjectXXXX, IModelTemplatePlugin_getPluginName_EVString_Callback* pCallback )
{
	IModelTemplatePluginProxy* ptr = dynamic_cast<IModelTemplatePluginProxy*>((IModelTemplatePlugin*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_IModelTemplatePlugin_getPluginName_EVString(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  char*  _stdcall IModelTemplatePlugin_getPluginName_EVString_NoVirtual(void *pObjectXXXX )
{
	IModelTemplatePlugin* ptrNativeObject = (IModelTemplatePlugin*) pObjectXXXX;
	EVString objXXXX = ptrNativeObject->IModelTemplatePlugin::getPluginName();
	return objXXXX.makeBuffer();
}
extern "C" EV_DLL_EXPORT  bool  _stdcall IModelTemplatePlugin_getRealResourceData_bool_CResourceData_CResourceData(void *pObjectXXXX, _in void* srcResourceData, _out void* destResourceData )
{
	IModelTemplatePlugin* ptrNativeObject = (IModelTemplatePlugin*) pObjectXXXX;
	if (dynamic_cast<IModelTemplatePluginProxy*>((IModelTemplatePlugin*)ptrNativeObject) != NULL)
	{
		bool objXXXX = ptrNativeObject->IModelTemplatePlugin::getRealResourceData(*(CResourceData*)srcResourceData, *(CResourceData*)destResourceData);
		return objXXXX;
	}
	else
	{
		bool objXXXX = ptrNativeObject->getRealResourceData(*(CResourceData*)srcResourceData, *(CResourceData*)destResourceData);
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_IModelTemplatePlugin_getRealResourceData_bool_CResourceData_CResourceData( void *pObjectXXXX, IModelTemplatePlugin_getRealResourceData_bool_CResourceData_CResourceData_Callback* pCallback )
{
	IModelTemplatePluginProxy* ptr = dynamic_cast<IModelTemplatePluginProxy*>((IModelTemplatePlugin*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_IModelTemplatePlugin_getRealResourceData_bool_CResourceData_CResourceData(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  bool  _stdcall IModelTemplatePlugin_getRealResourceData_bool_CResourceData_CResourceData_NoVirtual(void *pObjectXXXX, _in void* srcResourceData, _out void* destResourceData )
{
	IModelTemplatePlugin* ptrNativeObject = (IModelTemplatePlugin*) pObjectXXXX;
	bool objXXXX = ptrNativeObject->IModelTemplatePlugin::getRealResourceData(*(CResourceData*)srcResourceData, *(CResourceData*)destResourceData);
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  bool  _stdcall IModelTemplatePlugin_getRealModelData_bool_CModelData_CModelData(void *pObjectXXXX, _in void* srcResourceData, _out void* destModelData )
{
	IModelTemplatePlugin* ptrNativeObject = (IModelTemplatePlugin*) pObjectXXXX;
	if (dynamic_cast<IModelTemplatePluginProxy*>((IModelTemplatePlugin*)ptrNativeObject) != NULL)
	{
		bool objXXXX = ptrNativeObject->IModelTemplatePlugin::getRealModelData(*(CModelData*)srcResourceData, *(CModelData*)destModelData);
		return objXXXX;
	}
	else
	{
		bool objXXXX = ptrNativeObject->getRealModelData(*(CModelData*)srcResourceData, *(CModelData*)destModelData);
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_IModelTemplatePlugin_getRealModelData_bool_CModelData_CModelData( void *pObjectXXXX, IModelTemplatePlugin_getRealModelData_bool_CModelData_CModelData_Callback* pCallback )
{
	IModelTemplatePluginProxy* ptr = dynamic_cast<IModelTemplatePluginProxy*>((IModelTemplatePlugin*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_IModelTemplatePlugin_getRealModelData_bool_CModelData_CModelData(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  bool  _stdcall IModelTemplatePlugin_getRealModelData_bool_CModelData_CModelData_NoVirtual(void *pObjectXXXX, _in void* srcResourceData, _out void* destModelData )
{
	IModelTemplatePlugin* ptrNativeObject = (IModelTemplatePlugin*) pObjectXXXX;
	bool objXXXX = ptrNativeObject->IModelTemplatePlugin::getRealModelData(*(CModelData*)srcResourceData, *(CModelData*)destModelData);
	return objXXXX;
}
