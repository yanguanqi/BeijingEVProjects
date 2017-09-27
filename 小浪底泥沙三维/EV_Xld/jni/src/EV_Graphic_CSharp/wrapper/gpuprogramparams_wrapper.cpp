/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/gpuprogramparams.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
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
			extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Graphic_GpuConstantDefinition_constType( void *pObjectXXXX )
			{
				EarthView::World::Graphic::GpuConstantDefinition* ptrNativeObject = (EarthView::World::Graphic::GpuConstantDefinition*) pObjectXXXX;
				EarthView::World::Graphic::GpuConstantType objXXXX = ptrNativeObject->constType;
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_GpuConstantDefinition_constType( void *pObjectXXXX, int  value )
			{
				((EarthView::World::Graphic::GpuConstantDefinition*)pObjectXXXX)->constType = (EarthView::World::Graphic::GpuConstantType)value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall Get_EarthView_World_Graphic_GpuConstantDefinition_physicalIndex( void *pObjectXXXX )
			{
				EarthView::World::Graphic::GpuConstantDefinition* ptrNativeObject = (EarthView::World::Graphic::GpuConstantDefinition*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->physicalIndex;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_GpuConstantDefinition_physicalIndex( void *pObjectXXXX, ev_uint64   value )
			{
				((EarthView::World::Graphic::GpuConstantDefinition*)pObjectXXXX)->physicalIndex = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall Get_EarthView_World_Graphic_GpuConstantDefinition_logicalIndex( void *pObjectXXXX )
			{
				EarthView::World::Graphic::GpuConstantDefinition* ptrNativeObject = (EarthView::World::Graphic::GpuConstantDefinition*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->logicalIndex;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_GpuConstantDefinition_logicalIndex( void *pObjectXXXX, ev_uint64   value )
			{
				((EarthView::World::Graphic::GpuConstantDefinition*)pObjectXXXX)->logicalIndex = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall Get_EarthView_World_Graphic_GpuConstantDefinition_elementSize( void *pObjectXXXX )
			{
				EarthView::World::Graphic::GpuConstantDefinition* ptrNativeObject = (EarthView::World::Graphic::GpuConstantDefinition*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->elementSize;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_GpuConstantDefinition_elementSize( void *pObjectXXXX, ev_uint64   value )
			{
				((EarthView::World::Graphic::GpuConstantDefinition*)pObjectXXXX)->elementSize = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall Get_EarthView_World_Graphic_GpuConstantDefinition_arraySize( void *pObjectXXXX )
			{
				EarthView::World::Graphic::GpuConstantDefinition* ptrNativeObject = (EarthView::World::Graphic::GpuConstantDefinition*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->arraySize;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_GpuConstantDefinition_arraySize( void *pObjectXXXX, ev_uint64   value )
			{
				((EarthView::World::Graphic::GpuConstantDefinition*)pObjectXXXX)->arraySize = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall Get_EarthView_World_Graphic_GpuConstantDefinition_variability( void *pObjectXXXX )
			{
				EarthView::World::Graphic::GpuConstantDefinition* ptrNativeObject = (EarthView::World::Graphic::GpuConstantDefinition*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->variability;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_GpuConstantDefinition_variability( void *pObjectXXXX, ev_uint16  value )
			{
				((EarthView::World::Graphic::GpuConstantDefinition*)pObjectXXXX)->variability = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_GpuConstantDefinition_isFloat_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::GpuConstantDefinition* ptrNativeObject = (EarthView::World::Graphic::GpuConstantDefinition*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isFloat();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_GpuConstantDefinition_isFloat_ev_bool_GpuConstantType(_in int c )
			{
				ev_bool objXXXX = EarthView::World::Graphic::GpuConstantDefinition::isFloat((EarthView::World::Graphic::GpuConstantType)c);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_GpuConstantDefinition_isSampler_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::GpuConstantDefinition* ptrNativeObject = (EarthView::World::Graphic::GpuConstantDefinition*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isSampler();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_GpuConstantDefinition_isSampler_ev_bool_GpuConstantType(_in int c )
			{
				ev_bool objXXXX = EarthView::World::Graphic::GpuConstantDefinition::isSampler((EarthView::World::Graphic::GpuConstantType)c);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_GpuConstantDefinition_getElementSize_ev_size_t_GpuConstantType_ev_bool(_in int ctype, _in ev_bool padToMultiplesOf4 )
			{
				ev_size_t objXXXX = EarthView::World::Graphic::GpuConstantDefinition::getElementSize((EarthView::World::Graphic::GpuConstantType)ctype, padToMultiplesOf4);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_GpuConstantDefinitionMap_push_ev_bool_EVString_GpuConstantDefinition(void *pObjectXXXX, _in const char* key, _in void* val )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::GpuConstantDefinitionMap* ptrNativeObject = (EarthView::World::Graphic::GpuConstantDefinitionMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push(key1, *(EarthView::World::Graphic::GpuConstantDefinition*)val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_GpuConstantDefinitionMap_exist_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::GpuConstantDefinitionMap* ptrNativeObject = (EarthView::World::Graphic::GpuConstantDefinitionMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_GpuConstantDefinitionMap_OperatorIndex_GpuConstantDefinition_EVString(void *pObjXXXX, _in const char* key )
			{
				EarthView::World::Graphic::GpuConstantDefinitionMap& objYYYY = *(EarthView::World::Graphic::GpuConstantDefinitionMap*) pObjXXXX;
				EarthView::World::Graphic::GpuConstantDefinition& objXXXX = objYYYY[key];
				EarthView::World::Graphic::GpuConstantDefinition *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_GpuConstantDefinitionMap_get_GpuConstantDefinition_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::GpuConstantDefinitionMap* ptrNativeObject = (EarthView::World::Graphic::GpuConstantDefinitionMap*) pObjectXXXX;
				EarthView::World::Graphic::GpuConstantDefinition& objXXXX = ptrNativeObject->get(key1);
				EarthView::World::Graphic::GpuConstantDefinition *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_GpuConstantDefinitionMap_erase_void_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::GpuConstantDefinitionMap* ptrNativeObject = (EarthView::World::Graphic::GpuConstantDefinitionMap*) pObjectXXXX;
				ptrNativeObject->erase(key1);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_GpuConstantDefinitionMap_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::GpuConstantDefinitionMap* ptrNativeObject = (EarthView::World::Graphic::GpuConstantDefinitionMap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_GpuConstantDefinitionMap_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::GpuConstantDefinitionMap* ptrNativeObject = (EarthView::World::Graphic::GpuConstantDefinitionMap*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_GpuConstantDefinitionMap_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::GpuConstantDefinitionMap* ptrNativeObject = (EarthView::World::Graphic::GpuConstantDefinitionMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_GpuConstantDefinitionPair_first( void *pObjectXXXX )
			{
				EarthView::World::Graphic::GpuConstantDefinitionPair* ptrNativeObject = (EarthView::World::Graphic::GpuConstantDefinitionPair*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->first;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_GpuConstantDefinitionPair_first( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::GpuConstantDefinitionPair*)pObjectXXXX)->first = value1;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_GpuConstantDefinitionPair_second( void *pObjectXXXX )
			{
				EarthView::World::Graphic::GpuConstantDefinitionPair* ptrNativeObject = (EarthView::World::Graphic::GpuConstantDefinitionPair*) pObjectXXXX;
				EarthView::World::Graphic::GpuConstantDefinition &objXXXX = ptrNativeObject->second;
				EarthView::World::Graphic::GpuConstantDefinition *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_GpuConstantDefinitionPair_second( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::GpuConstantDefinitionPair*)pObjectXXXX)->second = *(EarthView::World::Graphic::GpuConstantDefinition*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_GpuConstantDefinitionIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::GpuConstantDefinitionIterator* ptrNativeObject = (EarthView::World::Graphic::GpuConstantDefinitionIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_GpuConstantDefinitionIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::GpuConstantDefinitionIterator* ptrNativeObject = (EarthView::World::Graphic::GpuConstantDefinitionIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_GpuConstantDefinitionIterator_nextKey_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::GpuConstantDefinitionIterator* ptrNativeObject = (EarthView::World::Graphic::GpuConstantDefinitionIterator*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->nextKey();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_GpuConstantDefinitionIterator_nextValue_GpuConstantDefinition(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::GpuConstantDefinitionIterator* ptrNativeObject = (EarthView::World::Graphic::GpuConstantDefinitionIterator*) pObjectXXXX;
				EarthView::World::Graphic::GpuConstantDefinition objXXXX = ptrNativeObject->nextValue();
				EarthView::World::Graphic::GpuConstantDefinition *pXXXX = new EarthView::World::Graphic::GpuConstantDefinition(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::GpuConstantDefinition*  _stdcall EarthView_World_Graphic_GpuConstantDefinitionIterator_nextValuePtr_GpuConstantDefinition(void *pObjectXXXX )
			{
				EarthView::World::Graphic::GpuConstantDefinitionIterator* ptrNativeObject = (EarthView::World::Graphic::GpuConstantDefinitionIterator*) pObjectXXXX;
				EarthView::World::Graphic::GpuConstantDefinition* objXXXX = ptrNativeObject->nextValuePtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_GpuConstantDefinitionIterator_next_GpuConstantDefinition(void *pObjectXXXX )
			{
				EarthView::World::Graphic::GpuConstantDefinitionIterator* ptrNativeObject = (EarthView::World::Graphic::GpuConstantDefinitionIterator*) pObjectXXXX;
				EarthView::World::Graphic::GpuConstantDefinition objXXXX = ptrNativeObject->next();
				EarthView::World::Graphic::GpuConstantDefinition *pXXXX = new EarthView::World::Graphic::GpuConstantDefinition(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_GpuConstantDefinitionIterator_getBegin_GpuConstantDefinitionPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::GpuConstantDefinitionIterator* ptrNativeObject = (EarthView::World::Graphic::GpuConstantDefinitionIterator*) pObjectXXXX;
				const EarthView::World::Graphic::GpuConstantDefinitionPair& objXXXX = ptrNativeObject->getBegin();
				const EarthView::World::Graphic::GpuConstantDefinitionPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_GpuConstantDefinitionIterator_getEnd_GpuConstantDefinitionPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::GpuConstantDefinitionIterator* ptrNativeObject = (EarthView::World::Graphic::GpuConstantDefinitionIterator*) pObjectXXXX;
				const EarthView::World::Graphic::GpuConstantDefinitionPair& objXXXX = ptrNativeObject->getEnd();
				const EarthView::World::Graphic::GpuConstantDefinitionPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_GpuConstantDefinitionIterator_getCurrent_GpuConstantDefinitionPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::GpuConstantDefinitionIterator* ptrNativeObject = (EarthView::World::Graphic::GpuConstantDefinitionIterator*) pObjectXXXX;
				const EarthView::World::Graphic::GpuConstantDefinitionPair& objXXXX = ptrNativeObject->getCurrent();
				const EarthView::World::Graphic::GpuConstantDefinitionPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall Get_EarthView_World_Graphic_GpuNamedConstants_floatBufferSize( void *pObjectXXXX )
			{
				EarthView::World::Graphic::GpuNamedConstants* ptrNativeObject = (EarthView::World::Graphic::GpuNamedConstants*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->floatBufferSize;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_GpuNamedConstants_floatBufferSize( void *pObjectXXXX, ev_uint64   value )
			{
				((EarthView::World::Graphic::GpuNamedConstants*)pObjectXXXX)->floatBufferSize = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall Get_EarthView_World_Graphic_GpuNamedConstants_intBufferSize( void *pObjectXXXX )
			{
				EarthView::World::Graphic::GpuNamedConstants* ptrNativeObject = (EarthView::World::Graphic::GpuNamedConstants*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->intBufferSize;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_GpuNamedConstants_intBufferSize( void *pObjectXXXX, ev_uint64   value )
			{
				((EarthView::World::Graphic::GpuNamedConstants*)pObjectXXXX)->intBufferSize = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_GpuNamedConstants_map( void *pObjectXXXX )
			{
				EarthView::World::Graphic::GpuNamedConstants* ptrNativeObject = (EarthView::World::Graphic::GpuNamedConstants*) pObjectXXXX;
				EarthView::World::Graphic::GpuConstantDefinitionMap &objXXXX = ptrNativeObject->map;
				EarthView::World::Graphic::GpuConstantDefinitionMap *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_GpuNamedConstants_map( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::GpuNamedConstants*)pObjectXXXX)->map = *(EarthView::World::Graphic::GpuConstantDefinitionMap*)value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_GpuNamedConstants_generateConstantDefinitionArrayEntries_void_EVString_GpuConstantDefinition(void *pObjectXXXX, _in const char* paramName, _in const void* baseDef )
			{
				EarthView::World::Core::ev_string paramName1 = paramName;
				EarthView::World::Graphic::GpuNamedConstants* ptrNativeObject = (EarthView::World::Graphic::GpuNamedConstants*) pObjectXXXX;
				ptrNativeObject->generateConstantDefinitionArrayEntries(paramName1, *(EarthView::World::Graphic::GpuConstantDefinition*)baseDef);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_GpuNamedConstants_getGenerateAllConstantDefinitionArrayEntries_ev_bool( )
			{
				ev_bool objXXXX = EarthView::World::Graphic::GpuNamedConstants::getGenerateAllConstantDefinitionArrayEntries();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_GpuNamedConstants_setGenerateAllConstantDefinitionArrayEntries_void_ev_bool(_in ev_bool generateAll )
			{
				EarthView::World::Graphic::GpuNamedConstants::setGenerateAllConstantDefinitionArrayEntries(generateAll);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_GpuNamedConstants_save_void_EVString(void *pObjectXXXX, _in const char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				const EarthView::World::Graphic::GpuNamedConstants* ptrNativeObject = (EarthView::World::Graphic::GpuNamedConstants*) pObjectXXXX;
				ptrNativeObject->save(filename1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_GpuNamedConstants_load_void_DataStreamPtr(void *pObjectXXXX, _inout void* stream )
			{
				EarthView::World::Graphic::GpuNamedConstants* ptrNativeObject = (EarthView::World::Graphic::GpuNamedConstants*) pObjectXXXX;
				ptrNativeObject->load(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::GpuNamedConstants*  _stdcall EarthView_World_Graphic_GpuNamedConstantsPtr_get_GpuNamedConstants(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::GpuNamedConstantsPtr* ptrNativeObject = (EarthView::World::Graphic::GpuNamedConstantsPtr*) pObjectXXXX;
				EarthView::World::Graphic::GpuNamedConstants* objXXXX = ptrNativeObject->get();
				return objXXXX;
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuNamedConstantsSerializer_writeFileHeader_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuNamedConstantsSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback)(_in ev_uint16 id, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuNamedConstantsSerializer_readFileHeader_void_DataStreamPtr_Callback)(_in void* stream);
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_CGpuNamedConstantsSerializer_readChunk_ev_uint16_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipToLittleEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuNamedConstantsSerializer_determineEndianness_void_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuNamedConstantsSerializer_determineEndianness_void_Endian_Callback)(_in int requestedEndian);
			class CGpuNamedConstantsSerializerProxy : public EarthView::World::Graphic::CGpuNamedConstantsSerializer
			{
			private:
				EarthView_World_Graphic_CGpuNamedConstantsSerializer_writeFileHeader_void_Callback* m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_writeFileHeader_void_Callback;
				EarthView_World_Graphic_CGpuNamedConstantsSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback* m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback;
				EarthView_World_Graphic_CGpuNamedConstantsSerializer_readFileHeader_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_readFileHeader_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CGpuNamedConstantsSerializer_readChunk_ev_uint16_DataStreamPtr_Callback* m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_readChunk_ev_uint16_DataStreamPtr_Callback;
				EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipToLittleEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CGpuNamedConstantsSerializer_determineEndianness_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_determineEndianness_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CGpuNamedConstantsSerializer_determineEndianness_void_Endian_Callback* m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_determineEndianness_void_Endian_Callback;
			public:
				CGpuNamedConstantsSerializerProxy(EarthView::World::Core::CNameValuePairList *pList) : CGpuNamedConstantsSerializer(pList)
				{
					m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_writeFileHeader_void_Callback = NULL;
					m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_readFileHeader_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_readChunk_ev_uint16_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipToLittleEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_determineEndianness_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_determineEndianness_void_Endian_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CGpuNamedConstantsSerializer_writeFileHeader_void(EarthView_World_Graphic_CGpuNamedConstantsSerializer_writeFileHeader_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_writeFileHeader_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuNamedConstantsSerializer_writeChunkHeader_void_ev_uint16_ev_size_t(EarthView_World_Graphic_CGpuNamedConstantsSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuNamedConstantsSerializer_readFileHeader_void_DataStreamPtr(EarthView_World_Graphic_CGpuNamedConstantsSerializer_readFileHeader_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_readFileHeader_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuNamedConstantsSerializer_readChunk_ev_uint16_DataStreamPtr(EarthView_World_Graphic_CGpuNamedConstantsSerializer_readChunk_ev_uint16_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_readChunk_ev_uint16_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipToLittleEndian_void_void_ev_size_t(EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipToLittleEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipFromLittleEndian_void_void_ev_size_t(EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipEndian_void_void_ev_size_t(EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuNamedConstantsSerializer_determineEndianness_void_DataStreamPtr(EarthView_World_Graphic_CGpuNamedConstantsSerializer_determineEndianness_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_determineEndianness_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuNamedConstantsSerializer_determineEndianness_void_Endian(EarthView_World_Graphic_CGpuNamedConstantsSerializer_determineEndianness_void_Endian_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_determineEndianness_void_Endian_Callback = pCallback;
				}
				virtual void writeFileHeader()
				{
					if(m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_writeFileHeader_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_writeFileHeader_void_Callback();
					}
					else
						return this->CGpuNamedConstantsSerializer::writeFileHeader();
				}
				virtual void writeChunkHeader(_in ev_uint16 id, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback(id, size);
					}
					else
						return this->CGpuNamedConstantsSerializer::writeChunkHeader(id, size);
				}
				virtual void readFileHeader(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_readFileHeader_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_readFileHeader_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CGpuNamedConstantsSerializer::readFileHeader(stream);
				}
				virtual ev_uint16 readChunk(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_readChunk_ev_uint16_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_readChunk_ev_uint16_DataStreamPtr_Callback(&stream);
						return returnValue;
					}
					else
						return this->CGpuNamedConstantsSerializer::readChunk(stream);
				}
				virtual void flipToLittleEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CGpuNamedConstantsSerializer::flipToLittleEndian(pData, size, count);
				}
				virtual void flipToLittleEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipToLittleEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipToLittleEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CGpuNamedConstantsSerializer::flipToLittleEndian(pData, size);
				}
				virtual void flipFromLittleEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CGpuNamedConstantsSerializer::flipFromLittleEndian(pData, size, count);
				}
				virtual void flipFromLittleEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CGpuNamedConstantsSerializer::flipFromLittleEndian(pData, size);
				}
				virtual void flipEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CGpuNamedConstantsSerializer::flipEndian(pData, size, count);
				}
				virtual void flipEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CGpuNamedConstantsSerializer::flipEndian(pData, size);
				}
				virtual void determineEndianness(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_determineEndianness_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_determineEndianness_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CGpuNamedConstantsSerializer::determineEndianness(stream);
				}
				virtual void determineEndianness(_in EarthView::World::Graphic::CSerializer::Endian requestedEndian)
				{
					if(m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_determineEndianness_void_Endian_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGpuNamedConstantsSerializer_determineEndianness_void_Endian_Callback((int)requestedEndian);
					}
					else
						return this->CGpuNamedConstantsSerializer::determineEndianness(requestedEndian);
				}
			};
			REGISTER_FACTORY_CLASS(CGpuNamedConstantsSerializerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuNamedConstantsSerializer_exportNamedConstants_void_GpuNamedConstants_EVString_Endian(void *pObjectXXXX, _in const EarthView::World::Graphic::GpuNamedConstants* pConsts, _in const char* filename, _in int endianMode )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Graphic::CGpuNamedConstantsSerializer* ptrNativeObject = (EarthView::World::Graphic::CGpuNamedConstantsSerializer*) pObjectXXXX;
				ptrNativeObject->exportNamedConstants(pConsts, filename1, (EarthView::World::Graphic::CSerializer::Endian)endianMode);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuNamedConstantsSerializer_exportNamedConstants_void_GpuNamedConstants_EVString(void *pObjectXXXX, _in const EarthView::World::Graphic::GpuNamedConstants* pConsts, _in const char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Graphic::CGpuNamedConstantsSerializer* ptrNativeObject = (EarthView::World::Graphic::CGpuNamedConstantsSerializer*) pObjectXXXX;
				ptrNativeObject->exportNamedConstants(pConsts, filename1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuNamedConstantsSerializer_exportNamedConstants_void_GpuNamedConstants_DataStreamPtr_Endian(void *pObjectXXXX, _in const EarthView::World::Graphic::GpuNamedConstants* pConsts, _in void* stream, _in int endianMode )
			{
				EarthView::World::Graphic::CGpuNamedConstantsSerializer* ptrNativeObject = (EarthView::World::Graphic::CGpuNamedConstantsSerializer*) pObjectXXXX;
				ptrNativeObject->exportNamedConstants(pConsts, *(EarthView::World::Core::DataStreamPtr*)stream, (EarthView::World::Graphic::CSerializer::Endian)endianMode);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuNamedConstantsSerializer_exportNamedConstants_void_GpuNamedConstants_DataStreamPtr(void *pObjectXXXX, _in const EarthView::World::Graphic::GpuNamedConstants* pConsts, _in void* stream )
			{
				EarthView::World::Graphic::CGpuNamedConstantsSerializer* ptrNativeObject = (EarthView::World::Graphic::CGpuNamedConstantsSerializer*) pObjectXXXX;
				ptrNativeObject->exportNamedConstants(pConsts, *(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuNamedConstantsSerializer_importNamedConstants_void_DataStreamPtr_GpuNamedConstants(void *pObjectXXXX, _inout void* stream, _inout EarthView::World::Graphic::GpuNamedConstants* pDest )
			{
				EarthView::World::Graphic::CGpuNamedConstantsSerializer* ptrNativeObject = (EarthView::World::Graphic::CGpuNamedConstantsSerializer*) pObjectXXXX;
				ptrNativeObject->importNamedConstants(*(EarthView::World::Core::DataStreamPtr*)stream, pDest);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuNamedConstantsSerializer_writeFileHeader_void( void *pObjectXXXX, EarthView_World_Graphic_CGpuNamedConstantsSerializer_writeFileHeader_void_Callback* pCallback )
			{
				CGpuNamedConstantsSerializerProxy* ptr = dynamic_cast<CGpuNamedConstantsSerializerProxy*>((EarthView::World::Graphic::CGpuNamedConstantsSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuNamedConstantsSerializer_writeFileHeader_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuNamedConstantsSerializer_writeChunkHeader_void_ev_uint16_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CGpuNamedConstantsSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback* pCallback )
			{
				CGpuNamedConstantsSerializerProxy* ptr = dynamic_cast<CGpuNamedConstantsSerializerProxy*>((EarthView::World::Graphic::CGpuNamedConstantsSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuNamedConstantsSerializer_writeChunkHeader_void_ev_uint16_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuNamedConstantsSerializer_readFileHeader_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CGpuNamedConstantsSerializer_readFileHeader_void_DataStreamPtr_Callback* pCallback )
			{
				CGpuNamedConstantsSerializerProxy* ptr = dynamic_cast<CGpuNamedConstantsSerializerProxy*>((EarthView::World::Graphic::CGpuNamedConstantsSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuNamedConstantsSerializer_readFileHeader_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuNamedConstantsSerializer_readChunk_ev_uint16_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CGpuNamedConstantsSerializer_readChunk_ev_uint16_DataStreamPtr_Callback* pCallback )
			{
				CGpuNamedConstantsSerializerProxy* ptr = dynamic_cast<CGpuNamedConstantsSerializerProxy*>((EarthView::World::Graphic::CGpuNamedConstantsSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuNamedConstantsSerializer_readChunk_ev_uint16_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CGpuNamedConstantsSerializerProxy* ptr = dynamic_cast<CGpuNamedConstantsSerializerProxy*>((EarthView::World::Graphic::CGpuNamedConstantsSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipToLittleEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CGpuNamedConstantsSerializerProxy* ptr = dynamic_cast<CGpuNamedConstantsSerializerProxy*>((EarthView::World::Graphic::CGpuNamedConstantsSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipToLittleEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CGpuNamedConstantsSerializerProxy* ptr = dynamic_cast<CGpuNamedConstantsSerializerProxy*>((EarthView::World::Graphic::CGpuNamedConstantsSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipFromLittleEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CGpuNamedConstantsSerializerProxy* ptr = dynamic_cast<CGpuNamedConstantsSerializerProxy*>((EarthView::World::Graphic::CGpuNamedConstantsSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipFromLittleEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CGpuNamedConstantsSerializerProxy* ptr = dynamic_cast<CGpuNamedConstantsSerializerProxy*>((EarthView::World::Graphic::CGpuNamedConstantsSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CGpuNamedConstantsSerializerProxy* ptr = dynamic_cast<CGpuNamedConstantsSerializerProxy*>((EarthView::World::Graphic::CGpuNamedConstantsSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuNamedConstantsSerializer_flipEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuNamedConstantsSerializer_determineEndianness_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CGpuNamedConstantsSerializer_determineEndianness_void_DataStreamPtr_Callback* pCallback )
			{
				CGpuNamedConstantsSerializerProxy* ptr = dynamic_cast<CGpuNamedConstantsSerializerProxy*>((EarthView::World::Graphic::CGpuNamedConstantsSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuNamedConstantsSerializer_determineEndianness_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuNamedConstantsSerializer_determineEndianness_void_Endian( void *pObjectXXXX, EarthView_World_Graphic_CGpuNamedConstantsSerializer_determineEndianness_void_Endian_Callback* pCallback )
			{
				CGpuNamedConstantsSerializerProxy* ptr = dynamic_cast<CGpuNamedConstantsSerializerProxy*>((EarthView::World::Graphic::CGpuNamedConstantsSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuNamedConstantsSerializer_determineEndianness_void_Endian(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall Get_EarthView_World_Graphic_GpuLogicalIndexUse_physicalIndex( void *pObjectXXXX )
			{
				EarthView::World::Graphic::GpuLogicalIndexUse* ptrNativeObject = (EarthView::World::Graphic::GpuLogicalIndexUse*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->physicalIndex;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_GpuLogicalIndexUse_physicalIndex( void *pObjectXXXX, ev_uint64   value )
			{
				((EarthView::World::Graphic::GpuLogicalIndexUse*)pObjectXXXX)->physicalIndex = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall Get_EarthView_World_Graphic_GpuLogicalIndexUse_currentSize( void *pObjectXXXX )
			{
				EarthView::World::Graphic::GpuLogicalIndexUse* ptrNativeObject = (EarthView::World::Graphic::GpuLogicalIndexUse*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->currentSize;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_GpuLogicalIndexUse_currentSize( void *pObjectXXXX, ev_uint64   value )
			{
				((EarthView::World::Graphic::GpuLogicalIndexUse*)pObjectXXXX)->currentSize = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall Get_EarthView_World_Graphic_GpuLogicalIndexUse_variability( void *pObjectXXXX )
			{
				EarthView::World::Graphic::GpuLogicalIndexUse* ptrNativeObject = (EarthView::World::Graphic::GpuLogicalIndexUse*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->variability;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_GpuLogicalIndexUse_variability( void *pObjectXXXX, ev_uint16  value )
			{
				((EarthView::World::Graphic::GpuLogicalIndexUse*)pObjectXXXX)->variability = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_GpuLogicalIndexUseMap_push_ev_bool_ev_size_t_GpuLogicalIndexUse(void *pObjectXXXX, _in const ev_uint64 & key, _in void* val )
			{
				EarthView::World::Graphic::GpuLogicalIndexUseMap* ptrNativeObject = (EarthView::World::Graphic::GpuLogicalIndexUseMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push((ev_size_t&)key, *(EarthView::World::Graphic::GpuLogicalIndexUse*)val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_GpuLogicalIndexUseMap_exist_ev_bool_ev_size_t(void *pObjectXXXX, _in const ev_uint64 & key )
			{
				EarthView::World::Graphic::GpuLogicalIndexUseMap* ptrNativeObject = (EarthView::World::Graphic::GpuLogicalIndexUseMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist((ev_size_t&)key);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_GpuLogicalIndexUseMap_OperatorIndex_GpuLogicalIndexUse_ev_size_t(void *pObjXXXX, _in const ev_uint64 & key )
			{
				EarthView::World::Graphic::GpuLogicalIndexUseMap& objYYYY = *(EarthView::World::Graphic::GpuLogicalIndexUseMap*) pObjXXXX;
				EarthView::World::Graphic::GpuLogicalIndexUse& objXXXX = objYYYY[key];
				EarthView::World::Graphic::GpuLogicalIndexUse *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_GpuLogicalIndexUseMap_get_GpuLogicalIndexUse_ev_size_t(void *pObjectXXXX, _in const ev_uint64 & key )
			{
				EarthView::World::Graphic::GpuLogicalIndexUseMap* ptrNativeObject = (EarthView::World::Graphic::GpuLogicalIndexUseMap*) pObjectXXXX;
				EarthView::World::Graphic::GpuLogicalIndexUse& objXXXX = ptrNativeObject->get((ev_size_t&)key);
				EarthView::World::Graphic::GpuLogicalIndexUse *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_GpuLogicalIndexUseMap_erase_void_ev_size_t(void *pObjectXXXX, _in const ev_uint64 & key )
			{
				EarthView::World::Graphic::GpuLogicalIndexUseMap* ptrNativeObject = (EarthView::World::Graphic::GpuLogicalIndexUseMap*) pObjectXXXX;
				ptrNativeObject->erase((ev_size_t&)key);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_GpuLogicalIndexUseMap_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::GpuLogicalIndexUseMap* ptrNativeObject = (EarthView::World::Graphic::GpuLogicalIndexUseMap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_GpuLogicalIndexUseMap_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::GpuLogicalIndexUseMap* ptrNativeObject = (EarthView::World::Graphic::GpuLogicalIndexUseMap*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_GpuLogicalIndexUseMap_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::GpuLogicalIndexUseMap* ptrNativeObject = (EarthView::World::Graphic::GpuLogicalIndexUseMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_GpuLogicalBufferStruct_map( void *pObjectXXXX )
			{
				EarthView::World::Graphic::GpuLogicalBufferStruct* ptrNativeObject = (EarthView::World::Graphic::GpuLogicalBufferStruct*) pObjectXXXX;
				EarthView::World::Graphic::GpuLogicalIndexUseMap &objXXXX = ptrNativeObject->map;
				EarthView::World::Graphic::GpuLogicalIndexUseMap *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_GpuLogicalBufferStruct_map( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::GpuLogicalBufferStruct*)pObjectXXXX)->map = *(EarthView::World::Graphic::GpuLogicalIndexUseMap*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall Get_EarthView_World_Graphic_GpuLogicalBufferStruct_bufferSize( void *pObjectXXXX )
			{
				EarthView::World::Graphic::GpuLogicalBufferStruct* ptrNativeObject = (EarthView::World::Graphic::GpuLogicalBufferStruct*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->bufferSize;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_GpuLogicalBufferStruct_bufferSize( void *pObjectXXXX, ev_uint64   value )
			{
				((EarthView::World::Graphic::GpuLogicalBufferStruct*)pObjectXXXX)->bufferSize = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::GpuLogicalBufferStruct*  _stdcall EarthView_World_Graphic_GpuLogicalBufferStructPtr_get_GpuLogicalBufferStruct(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::GpuLogicalBufferStructPtr* ptrNativeObject = (EarthView::World::Graphic::GpuLogicalBufferStructPtr*) pObjectXXXX;
				EarthView::World::Graphic::GpuLogicalBufferStruct* objXXXX = ptrNativeObject->get();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_FloatConstantList_push_back_void_ev_real32(void *pObjectXXXX, _in ev_real32& t )
			{
				EarthView::World::Graphic::FloatConstantList* ptrNativeObject = (EarthView::World::Graphic::FloatConstantList*) pObjectXXXX;
				ptrNativeObject->push_back(t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_FloatConstantList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::FloatConstantList* ptrNativeObject = (EarthView::World::Graphic::FloatConstantList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  ev_real32&  _stdcall EarthView_World_Graphic_FloatConstantList_front_ev_real32(void *pObjectXXXX )
			{
				EarthView::World::Graphic::FloatConstantList* ptrNativeObject = (EarthView::World::Graphic::FloatConstantList*) pObjectXXXX;
				ev_real32& objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real32&  _stdcall EarthView_World_Graphic_FloatConstantList_back_ev_real32(void *pObjectXXXX )
			{
				EarthView::World::Graphic::FloatConstantList* ptrNativeObject = (EarthView::World::Graphic::FloatConstantList*) pObjectXXXX;
				ev_real32& objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_FloatConstantList_insert_void_ev_uint32_ev_real32(void *pObjectXXXX, _in ev_uint32 pos, _in ev_real32& t )
			{
				EarthView::World::Graphic::FloatConstantList* ptrNativeObject = (EarthView::World::Graphic::FloatConstantList*) pObjectXXXX;
				ptrNativeObject->insert(pos, t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_FloatConstantList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::FloatConstantList* ptrNativeObject = (EarthView::World::Graphic::FloatConstantList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_FloatConstantList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::FloatConstantList* ptrNativeObject = (EarthView::World::Graphic::FloatConstantList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real32&  _stdcall EarthView_World_Graphic_FloatConstantList_OperatorIndex_ev_real32_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::FloatConstantList& objYYYY = *(EarthView::World::Graphic::FloatConstantList*) pObjXXXX;
				ev_real32& objXXXX = objYYYY[n];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real32&  _stdcall EarthView_World_Graphic_FloatConstantList_at_ev_real32_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::FloatConstantList* ptrNativeObject = (EarthView::World::Graphic::FloatConstantList*) pObjectXXXX;
				ev_real32& objXXXX = ptrNativeObject->at(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_FloatConstantList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::FloatConstantList* ptrNativeObject = (EarthView::World::Graphic::FloatConstantList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_FloatConstantList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::FloatConstantList* ptrNativeObject = (EarthView::World::Graphic::FloatConstantList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_FloatConstantList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::FloatConstantList* ptrNativeObject = (EarthView::World::Graphic::FloatConstantList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_FloatConstantList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::FloatConstantList* ptrNativeObject = (EarthView::World::Graphic::FloatConstantList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_IntConstantList_push_back_void_ev_int32(void *pObjectXXXX, _in ev_int32& t )
			{
				EarthView::World::Graphic::IntConstantList* ptrNativeObject = (EarthView::World::Graphic::IntConstantList*) pObjectXXXX;
				ptrNativeObject->push_back(t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_IntConstantList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::IntConstantList* ptrNativeObject = (EarthView::World::Graphic::IntConstantList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  ev_int32&  _stdcall EarthView_World_Graphic_IntConstantList_front_ev_int32(void *pObjectXXXX )
			{
				EarthView::World::Graphic::IntConstantList* ptrNativeObject = (EarthView::World::Graphic::IntConstantList*) pObjectXXXX;
				ev_int32& objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32&  _stdcall EarthView_World_Graphic_IntConstantList_back_ev_int32(void *pObjectXXXX )
			{
				EarthView::World::Graphic::IntConstantList* ptrNativeObject = (EarthView::World::Graphic::IntConstantList*) pObjectXXXX;
				ev_int32& objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_IntConstantList_insert_void_ev_uint32_ev_int32(void *pObjectXXXX, _in ev_uint32 pos, _in ev_int32& t )
			{
				EarthView::World::Graphic::IntConstantList* ptrNativeObject = (EarthView::World::Graphic::IntConstantList*) pObjectXXXX;
				ptrNativeObject->insert(pos, t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_IntConstantList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::IntConstantList* ptrNativeObject = (EarthView::World::Graphic::IntConstantList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_IntConstantList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::IntConstantList* ptrNativeObject = (EarthView::World::Graphic::IntConstantList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32&  _stdcall EarthView_World_Graphic_IntConstantList_OperatorIndex_ev_int32_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::IntConstantList& objYYYY = *(EarthView::World::Graphic::IntConstantList*) pObjXXXX;
				ev_int32& objXXXX = objYYYY[n];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32&  _stdcall EarthView_World_Graphic_IntConstantList_at_ev_int32_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::IntConstantList* ptrNativeObject = (EarthView::World::Graphic::IntConstantList*) pObjectXXXX;
				ev_int32& objXXXX = ptrNativeObject->at(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_IntConstantList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::IntConstantList* ptrNativeObject = (EarthView::World::Graphic::IntConstantList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_IntConstantList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::IntConstantList* ptrNativeObject = (EarthView::World::Graphic::IntConstantList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_IntConstantList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::IntConstantList* ptrNativeObject = (EarthView::World::Graphic::IntConstantList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_IntConstantList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::IntConstantList* ptrNativeObject = (EarthView::World::Graphic::IntConstantList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_CGpuSharedParameters_getName_EVString(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CGpuSharedParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuSharedParameters*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuSharedParameters_addConstantDefinition_void_EVString_GpuConstantType_ev_size_t(void *pObjectXXXX, _in const char* name, _in int constType, _in ev_uint64  arraySize )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CGpuSharedParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuSharedParameters*) pObjectXXXX;
				ptrNativeObject->addConstantDefinition(name1, (EarthView::World::Graphic::GpuConstantType)constType, arraySize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuSharedParameters_addConstantDefinition_void_EVString_GpuConstantType(void *pObjectXXXX, _in const char* name, _in int constType )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CGpuSharedParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuSharedParameters*) pObjectXXXX;
				ptrNativeObject->addConstantDefinition(name1, (EarthView::World::Graphic::GpuConstantType)constType);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuSharedParameters_removeConstantDefinition_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CGpuSharedParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuSharedParameters*) pObjectXXXX;
				ptrNativeObject->removeConstantDefinition(name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuSharedParameters_removeAllConstantDefinitions_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CGpuSharedParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuSharedParameters*) pObjectXXXX;
				ptrNativeObject->removeAllConstantDefinitions();
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CGpuSharedParameters_getVersion_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuSharedParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuSharedParameters*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getVersion();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuSharedParameters__markDirty_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CGpuSharedParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuSharedParameters*) pObjectXXXX;
				ptrNativeObject->_markDirty();
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CGpuSharedParameters_getFrameLastUpdated_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuSharedParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuSharedParameters*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getFrameLastUpdated();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CGpuSharedParameters_getConstantDefinitionIterator_GpuConstantDefinitionIterator(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuSharedParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuSharedParameters*) pObjectXXXX;
				EarthView::World::Graphic::GpuConstantDefinitionIterator objXXXX = ptrNativeObject->getConstantDefinitionIterator();
				EarthView::World::Graphic::GpuConstantDefinitionIterator *pXXXX = new EarthView::World::Graphic::GpuConstantDefinitionIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CGpuSharedParameters_getConstantDefinition_GpuConstantDefinition_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::World::Graphic::CGpuSharedParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuSharedParameters*) pObjectXXXX;
				const EarthView::World::Graphic::GpuConstantDefinition& objXXXX = ptrNativeObject->getConstantDefinition(name1);
				const EarthView::World::Graphic::GpuConstantDefinition *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CGpuSharedParameters_getConstantDefinitions_GpuNamedConstants(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuSharedParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuSharedParameters*) pObjectXXXX;
				const EarthView::World::Graphic::GpuNamedConstants& objXXXX = ptrNativeObject->getConstantDefinitions();
				const EarthView::World::Graphic::GpuNamedConstants *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuSharedParameters_setNamedConstant_void_EVString_Real(void *pObjectXXXX, _in const char* name, _in Real val )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CGpuSharedParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuSharedParameters*) pObjectXXXX;
				ptrNativeObject->setNamedConstant(name1, val);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuSharedParameters_setNamedConstant_void_EVString_ev_int32(void *pObjectXXXX, _in const char* name, _in ev_int32 val )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CGpuSharedParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuSharedParameters*) pObjectXXXX;
				ptrNativeObject->setNamedConstant(name1, val);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuSharedParameters_setNamedConstant_void_EVString_CVector4(void *pObjectXXXX, _in const char* name, _in const void* vec )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CGpuSharedParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuSharedParameters*) pObjectXXXX;
				ptrNativeObject->setNamedConstant(name1, *(EarthView::World::Spatial::Math::CVector4*)vec);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuSharedParameters_setNamedConstant_void_EVString_CVector3(void *pObjectXXXX, _in const char* name, _in const void* vec )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CGpuSharedParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuSharedParameters*) pObjectXXXX;
				ptrNativeObject->setNamedConstant(name1, *(EarthView::World::Spatial::Math::CVector3*)vec);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuSharedParameters_setNamedConstant_void_EVString_CMatrix4(void *pObjectXXXX, _in const char* name, _in const void* m )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CGpuSharedParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuSharedParameters*) pObjectXXXX;
				ptrNativeObject->setNamedConstant(name1, *(EarthView::World::Spatial::Math::CMatrix4*)m);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuSharedParameters_setNamedConstant_void_EVString_CMatrix4_ev_size_t(void *pObjectXXXX, _in const char* name, _in const EarthView::World::Spatial::Math::CMatrix4* m, _in ev_uint64  numEntries )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CGpuSharedParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuSharedParameters*) pObjectXXXX;
				ptrNativeObject->setNamedConstant(name1, m, numEntries);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuSharedParameters_setNamedConstant_void_EVString_ev_real32_ev_size_t(void *pObjectXXXX, _in const char* name, _in const ev_real32* val, _in ev_uint64  count )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CGpuSharedParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuSharedParameters*) pObjectXXXX;
				ptrNativeObject->setNamedConstant(name1, val, count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuSharedParameters_setNamedConstant_void_EVString_ev_real64_ev_size_t(void *pObjectXXXX, _in const char* name, _in const ev_real64* val, _in ev_uint64  count )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CGpuSharedParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuSharedParameters*) pObjectXXXX;
				ptrNativeObject->setNamedConstant(name1, val, count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuSharedParameters_setNamedConstant_void_EVString_CColourValue(void *pObjectXXXX, _in const char* name, _in const void* colour )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CGpuSharedParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuSharedParameters*) pObjectXXXX;
				ptrNativeObject->setNamedConstant(name1, *(EarthView::World::Graphic::CColourValue*)colour);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuSharedParameters_setNamedConstant_void_EVString_ev_int32_ev_size_t(void *pObjectXXXX, _in const char* name, _in const ev_int32* val, _in ev_uint64  count )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CGpuSharedParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuSharedParameters*) pObjectXXXX;
				ptrNativeObject->setNamedConstant(name1, val, count);
			}
			extern "C" EV_DLL_EXPORT  ev_real32*  _stdcall EarthView_World_Graphic_CGpuSharedParameters_getFloatPointer_ev_real32_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CGpuSharedParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuSharedParameters*) pObjectXXXX;
				ev_real32* objXXXX = ptrNativeObject->getFloatPointer(pos);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32*  _stdcall EarthView_World_Graphic_CGpuSharedParameters_getIntPointer_ev_int32_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CGpuSharedParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuSharedParameters*) pObjectXXXX;
				ev_int32* objXXXX = ptrNativeObject->getIntPointer(pos);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CGpuSharedParameters*  _stdcall EarthView_World_Graphic_GpuSharedParametersPtr_get_CGpuSharedParameters(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::GpuSharedParametersPtr* ptrNativeObject = (EarthView::World::Graphic::GpuSharedParametersPtr*) pObjectXXXX;
				EarthView::World::Graphic::CGpuSharedParameters* objXXXX = ptrNativeObject->get();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuSharedParametersUsage__copySharedParamsToTargetParams_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CGpuSharedParametersUsage* ptrNativeObject = (EarthView::World::Graphic::CGpuSharedParametersUsage*) pObjectXXXX;
				ptrNativeObject->_copySharedParamsToTargetParams();
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_CGpuSharedParametersUsage_getName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuSharedParametersUsage* ptrNativeObject = (EarthView::World::Graphic::CGpuSharedParametersUsage*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CGpuSharedParametersUsage_getSharedParams_GpuSharedParametersPtr(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuSharedParametersUsage* ptrNativeObject = (EarthView::World::Graphic::CGpuSharedParametersUsage*) pObjectXXXX;
				EarthView::World::Graphic::GpuSharedParametersPtr objXXXX = ptrNativeObject->getSharedParams();
				EarthView::World::Graphic::GpuSharedParametersPtr *pXXXX = new EarthView::World::Graphic::GpuSharedParametersPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CGpuProgramParameters*  _stdcall EarthView_World_Graphic_CGpuSharedParametersUsage_getTargetParams_CGpuProgramParameters(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuSharedParametersUsage* ptrNativeObject = (EarthView::World::Graphic::CGpuSharedParametersUsage*) pObjectXXXX;
				EarthView::World::Graphic::CGpuProgramParameters* objXXXX = ptrNativeObject->getTargetParams();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Graphic_CGpuProgramParameters_AutoConstantDefinition_acType( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantDefinition* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantDefinition*) pObjectXXXX;
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType objXXXX = ptrNativeObject->acType;
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CGpuProgramParameters_AutoConstantDefinition_acType( void *pObjectXXXX, int  value )
			{
				((EarthView::World::Graphic::CGpuProgramParameters::AutoConstantDefinition*)pObjectXXXX)->acType = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType)value;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CGpuProgramParameters_AutoConstantDefinition_name( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantDefinition* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantDefinition*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->name;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CGpuProgramParameters_AutoConstantDefinition_name( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CGpuProgramParameters::AutoConstantDefinition*)pObjectXXXX)->name = value1;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall Get_EarthView_World_Graphic_CGpuProgramParameters_AutoConstantDefinition_elementCount( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantDefinition* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantDefinition*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->elementCount;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CGpuProgramParameters_AutoConstantDefinition_elementCount( void *pObjectXXXX, ev_uint64   value )
			{
				((EarthView::World::Graphic::CGpuProgramParameters::AutoConstantDefinition*)pObjectXXXX)->elementCount = value;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Graphic_CGpuProgramParameters_AutoConstantDefinition_elementType( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantDefinition* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantDefinition*) pObjectXXXX;
				EarthView::World::Graphic::CGpuProgramParameters::ElementType objXXXX = ptrNativeObject->elementType;
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CGpuProgramParameters_AutoConstantDefinition_elementType( void *pObjectXXXX, int  value )
			{
				((EarthView::World::Graphic::CGpuProgramParameters::AutoConstantDefinition*)pObjectXXXX)->elementType = (EarthView::World::Graphic::CGpuProgramParameters::ElementType)value;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Graphic_CGpuProgramParameters_AutoConstantDefinition_dataType( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantDefinition* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantDefinition*) pObjectXXXX;
				EarthView::World::Graphic::CGpuProgramParameters::ACDataType objXXXX = ptrNativeObject->dataType;
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CGpuProgramParameters_AutoConstantDefinition_dataType( void *pObjectXXXX, int  value )
			{
				((EarthView::World::Graphic::CGpuProgramParameters::AutoConstantDefinition*)pObjectXXXX)->dataType = (EarthView::World::Graphic::CGpuProgramParameters::ACDataType)value;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Graphic_CGpuProgramParameters_CAutoConstantEntry_paramType( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry*) pObjectXXXX;
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType objXXXX = ptrNativeObject->paramType;
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CGpuProgramParameters_CAutoConstantEntry_paramType( void *pObjectXXXX, int  value )
			{
				((EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry*)pObjectXXXX)->paramType = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType)value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall Get_EarthView_World_Graphic_CGpuProgramParameters_CAutoConstantEntry_physicalIndex( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->physicalIndex;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CGpuProgramParameters_CAutoConstantEntry_physicalIndex( void *pObjectXXXX, ev_uint64   value )
			{
				((EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry*)pObjectXXXX)->physicalIndex = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall Get_EarthView_World_Graphic_CGpuProgramParameters_CAutoConstantEntry_elementCount( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->elementCount;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CGpuProgramParameters_CAutoConstantEntry_elementCount( void *pObjectXXXX, ev_uint64   value )
			{
				((EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry*)pObjectXXXX)->elementCount = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall Get_EarthView_World_Graphic_CGpuProgramParameters_CAutoConstantEntry_variability( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->variability;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CGpuProgramParameters_CAutoConstantEntry_variability( void *pObjectXXXX, ev_uint16  value )
			{
				((EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry*)pObjectXXXX)->variability = value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters_AutoConstantList_push_back_void_CAutoConstantEntry(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters_AutoConstantList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CGpuProgramParameters_AutoConstantList_front_CAutoConstantEntry(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList*) pObjectXXXX;
				EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry& objXXXX = ptrNativeObject->front();
				EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CGpuProgramParameters_AutoConstantList_back_CAutoConstantEntry(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList*) pObjectXXXX;
				EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry& objXXXX = ptrNativeObject->back();
				EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters_AutoConstantList_insert_void_ev_uint32_CAutoConstantEntry(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters_AutoConstantList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CGpuProgramParameters_AutoConstantList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CGpuProgramParameters_AutoConstantList_OperatorIndex_CAutoConstantEntry_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList& objYYYY = *(EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList*) pObjXXXX;
				EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry& objXXXX = objYYYY[n];
				EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CGpuProgramParameters_AutoConstantList_at_CAutoConstantEntry_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList*) pObjectXXXX;
				EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry& objXXXX = ptrNativeObject->at(n);
				EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CGpuProgramParameters_AutoConstantList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters_AutoConstantList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters_AutoConstantList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters_AutoConstantList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters_GpuSharedParamUsageList_push_back_void_CGpuSharedParametersUsage(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Graphic::CGpuProgramParameters::GpuSharedParamUsageList* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters::GpuSharedParamUsageList*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Graphic::CGpuSharedParametersUsage*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters_GpuSharedParamUsageList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CGpuProgramParameters::GpuSharedParamUsageList* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters::GpuSharedParamUsageList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CGpuProgramParameters_GpuSharedParamUsageList_front_CGpuSharedParametersUsage(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CGpuProgramParameters::GpuSharedParamUsageList* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters::GpuSharedParamUsageList*) pObjectXXXX;
				EarthView::World::Graphic::CGpuSharedParametersUsage& objXXXX = ptrNativeObject->front();
				EarthView::World::Graphic::CGpuSharedParametersUsage *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CGpuProgramParameters_GpuSharedParamUsageList_back_CGpuSharedParametersUsage(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CGpuProgramParameters::GpuSharedParamUsageList* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters::GpuSharedParamUsageList*) pObjectXXXX;
				EarthView::World::Graphic::CGpuSharedParametersUsage& objXXXX = ptrNativeObject->back();
				EarthView::World::Graphic::CGpuSharedParametersUsage *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters_GpuSharedParamUsageList_insert_void_ev_uint32_CGpuSharedParametersUsage(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Graphic::CGpuProgramParameters::GpuSharedParamUsageList* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters::GpuSharedParamUsageList*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Graphic::CGpuSharedParametersUsage*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters_GpuSharedParamUsageList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CGpuProgramParameters::GpuSharedParamUsageList* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters::GpuSharedParamUsageList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CGpuProgramParameters_GpuSharedParamUsageList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgramParameters::GpuSharedParamUsageList* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters::GpuSharedParamUsageList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CGpuProgramParameters_GpuSharedParamUsageList_OperatorIndex_CGpuSharedParametersUsage_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CGpuProgramParameters::GpuSharedParamUsageList& objYYYY = *(EarthView::World::Graphic::CGpuProgramParameters::GpuSharedParamUsageList*) pObjXXXX;
				EarthView::World::Graphic::CGpuSharedParametersUsage& objXXXX = objYYYY[n];
				EarthView::World::Graphic::CGpuSharedParametersUsage *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CGpuProgramParameters_GpuSharedParamUsageList_at_CGpuSharedParametersUsage_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CGpuProgramParameters::GpuSharedParamUsageList* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters::GpuSharedParamUsageList*) pObjectXXXX;
				EarthView::World::Graphic::CGpuSharedParametersUsage& objXXXX = ptrNativeObject->at(n);
				EarthView::World::Graphic::CGpuSharedParametersUsage *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CGpuProgramParameters_GpuSharedParamUsageList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgramParameters::GpuSharedParamUsageList* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters::GpuSharedParamUsageList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters_GpuSharedParamUsageList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CGpuProgramParameters::GpuSharedParamUsageList* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters::GpuSharedParamUsageList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters_GpuSharedParamUsageList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CGpuProgramParameters::GpuSharedParamUsageList* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters::GpuSharedParamUsageList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters_GpuSharedParamUsageList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CGpuProgramParameters::GpuSharedParamUsageList* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters::GpuSharedParamUsageList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CGpuProgramParameters_OperatorAssign_CGpuProgramParameters_CGpuProgramParameters(void *pObjXXXX, _in const void* oth )
			{
				EarthView::World::Graphic::CGpuProgramParameters& objXXXX = *((EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX);
				objXXXX = *(EarthView::World::Graphic::CGpuProgramParameters*)oth;
				EarthView::World::Graphic::CGpuProgramParameters *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters__setNamedConstants_void_GpuNamedConstantsPtr(void *pObjectXXXX, _in const void* constantmap )
			{
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->_setNamedConstants(*(EarthView::World::Graphic::GpuNamedConstantsPtr*)constantmap);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters__setLogicalIndexes_void_GpuLogicalBufferStructPtr_GpuLogicalBufferStructPtr(void *pObjectXXXX, _in const void* floatIndexMap, _in const void* intIndexMap )
			{
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->_setLogicalIndexes(*(EarthView::World::Graphic::GpuLogicalBufferStructPtr*)floatIndexMap, *(EarthView::World::Graphic::GpuLogicalBufferStructPtr*)intIndexMap);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CGpuProgramParameters_hasNamedParameters_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasNamedParameters();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CGpuProgramParameters_hasLogicalIndexedParameters_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasLogicalIndexedParameters();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters_setConstant_void_ev_size_t_CVector4(void *pObjectXXXX, _in ev_uint64  index, _in const void* vec )
			{
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->setConstant(index, *(EarthView::World::Spatial::Math::CVector4*)vec);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters_setConstant_void_ev_size_t_Real(void *pObjectXXXX, _in ev_uint64  index, _in Real val )
			{
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->setConstant(index, val);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters_setConstant_void_ev_size_t_CVector3(void *pObjectXXXX, _in ev_uint64  index, _in const void* vec )
			{
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->setConstant(index, *(EarthView::World::Spatial::Math::CVector3*)vec);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters_setConstant_void_ev_size_t_CMatrix4(void *pObjectXXXX, _in ev_uint64  index, _in const void* m )
			{
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->setConstant(index, *(EarthView::World::Spatial::Math::CMatrix4*)m);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters_setConstant_void_ev_size_t_CMatrix4_ev_size_t(void *pObjectXXXX, _in ev_uint64  index, _in const EarthView::World::Spatial::Math::CMatrix4** m, _in ev_uint64  numEntries )
			{
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->setConstant(index, m, numEntries);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters_setConstant_void_ev_size_t_ev_real32_ev_size_t(void *pObjectXXXX, _in ev_uint64  index, _in const ev_real32* val, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->setConstant(index, val, count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters_setConstant_void_ev_size_t_ev_real64_ev_size_t(void *pObjectXXXX, _in ev_uint64  index, _in const ev_real64* val, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->setConstant(index, val, count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters_setConstant_void_ev_size_t_CColourValue(void *pObjectXXXX, _in ev_uint64  index, _in const void* colour )
			{
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->setConstant(index, *(EarthView::World::Graphic::CColourValue*)colour);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters_setConstant_void_ev_size_t_ev_int32_ev_size_t(void *pObjectXXXX, _in ev_uint64  index, _in const ev_int32* val, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->setConstant(index, val, count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters__writeRawConstants_void_ev_size_t_ev_real32_ev_size_t(void *pObjectXXXX, _in ev_uint64  physicalIndex, _in const ev_real32* val, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->_writeRawConstants(physicalIndex, val, count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters__writeRawConstants_void_ev_size_t_ev_real64_ev_size_t(void *pObjectXXXX, _in ev_uint64  physicalIndex, _in const ev_real64* val, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->_writeRawConstants(physicalIndex, val, count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters__writeRawConstants_void_ev_size_t_ev_int32_ev_size_t(void *pObjectXXXX, _in ev_uint64  physicalIndex, _in const ev_int32* val, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->_writeRawConstants(physicalIndex, val, count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters__readRawConstants_void_ev_size_t_ev_size_t_ev_real32(void *pObjectXXXX, _in ev_uint64  physicalIndex, _in ev_uint64  count, _in ev_real32* dest )
			{
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->_readRawConstants(physicalIndex, count, dest);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters__readRawConstants_void_ev_size_t_ev_size_t_ev_int32(void *pObjectXXXX, _in ev_uint64  physicalIndex, _in ev_uint64  count, _in ev_int32* dest )
			{
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->_readRawConstants(physicalIndex, count, dest);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters__writeRawConstant_void_ev_size_t_CVector4_ev_size_t(void *pObjectXXXX, _in ev_uint64  physicalIndex, _in const void* vec, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->_writeRawConstant(physicalIndex, *(EarthView::World::Spatial::Math::CVector4*)vec, count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters__writeRawConstant_void_ev_size_t_CVector4(void *pObjectXXXX, _in ev_uint64  physicalIndex, _in const void* vec )
			{
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->_writeRawConstant(physicalIndex, *(EarthView::World::Spatial::Math::CVector4*)vec);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters__writeRawConstant_void_ev_size_t_Real(void *pObjectXXXX, _in ev_uint64  physicalIndex, _in Real val )
			{
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->_writeRawConstant(physicalIndex, val);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters__writeRawConstant_void_ev_size_t_ev_int32(void *pObjectXXXX, _in ev_uint64  physicalIndex, _in ev_int32 val )
			{
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->_writeRawConstant(physicalIndex, val);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters__writeRawConstant_void_ev_size_t_CVector3(void *pObjectXXXX, _in ev_uint64  physicalIndex, _in const void* vec )
			{
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->_writeRawConstant(physicalIndex, *(EarthView::World::Spatial::Math::CVector3*)vec);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters__writeRawConstant_void_ev_size_t_CMatrix4_ev_size_t(void *pObjectXXXX, _in ev_uint64  physicalIndex, _in const void* m, _in ev_uint64  elementCount )
			{
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->_writeRawConstant(physicalIndex, *(EarthView::World::Spatial::Math::CMatrix4*)m, elementCount);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters__writeRawConstant_void_ev_size_t_CMatrix4_ev_uint32(void *pObjectXXXX, _in ev_uint64  physicalIndex, _in const EarthView::World::Spatial::Math::CMatrix4** m, _in ev_uint32 numEntries )
			{
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->_writeRawConstant(physicalIndex, m, numEntries);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters__writeRawConstant_void_ev_size_t_CColourValue_ev_size_t(void *pObjectXXXX, _in ev_uint64  physicalIndex, _in const void* colour, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->_writeRawConstant(physicalIndex, *(EarthView::World::Graphic::CColourValue*)colour, count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters__writeRawConstant_void_ev_size_t_CColourValue(void *pObjectXXXX, _in ev_uint64  physicalIndex, _in const void* colour )
			{
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->_writeRawConstant(physicalIndex, *(EarthView::World::Graphic::CColourValue*)colour);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CGpuProgramParameters_getConstantDefinitionIterator_GpuConstantDefinitionIterator(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				EarthView::World::Graphic::GpuConstantDefinitionIterator objXXXX = ptrNativeObject->getConstantDefinitionIterator();
				EarthView::World::Graphic::GpuConstantDefinitionIterator *pXXXX = new EarthView::World::Graphic::GpuConstantDefinitionIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CGpuProgramParameters_getConstantDefinition_GpuConstantDefinition_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				const EarthView::World::Graphic::GpuConstantDefinition& objXXXX = ptrNativeObject->getConstantDefinition(name1);
				const EarthView::World::Graphic::GpuConstantDefinition *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CGpuProgramParameters_getConstantDefinitions_GpuNamedConstants(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				const EarthView::World::Graphic::GpuNamedConstants& objXXXX = ptrNativeObject->getConstantDefinitions();
				const EarthView::World::Graphic::GpuNamedConstants *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CGpuProgramParameters_getFloatLogicalBufferStruct_GpuLogicalBufferStructPtr(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				const EarthView::World::Graphic::GpuLogicalBufferStructPtr& objXXXX = ptrNativeObject->getFloatLogicalBufferStruct();
				const EarthView::World::Graphic::GpuLogicalBufferStructPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CGpuProgramParameters_getFloatLogicalIndexForPhysicalIndex_ev_size_t_ev_size_t(void *pObjectXXXX, _in ev_uint64  physicalIndex )
			{
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getFloatLogicalIndexForPhysicalIndex(physicalIndex);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CGpuProgramParameters_getIntLogicalIndexForPhysicalIndex_ev_size_t_ev_size_t(void *pObjectXXXX, _in ev_uint64  physicalIndex )
			{
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getIntLogicalIndexForPhysicalIndex(physicalIndex);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CGpuProgramParameters_getIntLogicalBufferStruct_GpuLogicalBufferStructPtr(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				const EarthView::World::Graphic::GpuLogicalBufferStructPtr& objXXXX = ptrNativeObject->getIntLogicalBufferStruct();
				const EarthView::World::Graphic::GpuLogicalBufferStructPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CGpuProgramParameters_getFloatConstantList_FloatConstantList(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				const EarthView::World::Graphic::FloatConstantList& objXXXX = ptrNativeObject->getFloatConstantList();
				const EarthView::World::Graphic::FloatConstantList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real32*  _stdcall EarthView_World_Graphic_CGpuProgramParameters_getFloatPointer_ev_real32_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ev_real32* objXXXX = ptrNativeObject->getFloatPointer(pos);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CGpuProgramParameters_getIntConstantList_IntConstantList(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				const EarthView::World::Graphic::IntConstantList& objXXXX = ptrNativeObject->getIntConstantList();
				const EarthView::World::Graphic::IntConstantList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32*  _stdcall EarthView_World_Graphic_CGpuProgramParameters_getIntPointer_ev_int32_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ev_int32* objXXXX = ptrNativeObject->getIntPointer(pos);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CGpuProgramParameters_getAutoConstantList_AutoConstantList(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				const EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList& objXXXX = ptrNativeObject->getAutoConstantList();
				const EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters_setAutoConstant_void_ev_size_t_AutoConstantType_ev_size_t(void *pObjectXXXX, _in ev_uint64  index, _in int acType, _in ev_uint64  extraInfo )
			{
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->setAutoConstant(index, (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType)acType, extraInfo);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters_setAutoConstant_void_ev_size_t_AutoConstantType(void *pObjectXXXX, _in ev_uint64  index, _in int acType )
			{
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->setAutoConstant(index, (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType)acType);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters_setAutoConstantReal_void_ev_size_t_AutoConstantType_Real(void *pObjectXXXX, _in ev_uint64  index, _in int acType, _in Real rData )
			{
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->setAutoConstantReal(index, (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType)acType, rData);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters_setAutoConstant_void_ev_size_t_AutoConstantType_ev_uint16_ev_uint16(void *pObjectXXXX, _in ev_uint64  index, _in int acType, _in ev_uint16 extraInfo1, _in ev_uint16 extraInfo2 )
			{
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->setAutoConstant(index, (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType)acType, extraInfo1, extraInfo2);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters__setRawAutoConstant_void_ev_size_t_AutoConstantType_ev_size_t_ev_uint16_ev_size_t(void *pObjectXXXX, _in ev_uint64  physicalIndex, _in int acType, _in ev_uint64  extraInfo, _in ev_uint16 variability, _in ev_uint64  elementSize )
			{
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->_setRawAutoConstant(physicalIndex, (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType)acType, extraInfo, variability, elementSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters__setRawAutoConstant_void_ev_size_t_AutoConstantType_ev_size_t_ev_uint16(void *pObjectXXXX, _in ev_uint64  physicalIndex, _in int acType, _in ev_uint64  extraInfo, _in ev_uint16 variability )
			{
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->_setRawAutoConstant(physicalIndex, (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType)acType, extraInfo, variability);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters__setRawAutoConstantReal_void_ev_size_t_AutoConstantType_Real_ev_uint16_ev_size_t(void *pObjectXXXX, _in ev_uint64  physicalIndex, _in int acType, _in Real rData, _in ev_uint16 variability, _in ev_uint64  elementSize )
			{
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->_setRawAutoConstantReal(physicalIndex, (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType)acType, rData, variability, elementSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters__setRawAutoConstantReal_void_ev_size_t_AutoConstantType_Real_ev_uint16(void *pObjectXXXX, _in ev_uint64  physicalIndex, _in int acType, _in Real rData, _in ev_uint16 variability )
			{
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->_setRawAutoConstantReal(physicalIndex, (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType)acType, rData, variability);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters_clearAutoConstant_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  index )
			{
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->clearAutoConstant(index);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters_setConstantFromTime_void_ev_size_t_Real(void *pObjectXXXX, _in ev_uint64  index, _in Real factor )
			{
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->setConstantFromTime(index, factor);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters_clearAutoConstants_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->clearAutoConstants();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CGpuProgramParameters_AutoConstantIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgramParameters::AutoConstantIterator* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters_AutoConstantIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantIterator* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CGpuProgramParameters_AutoConstantIterator_getCurrent_CAutoConstantEntry(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantIterator* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantIterator*) pObjectXXXX;
				EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry objXXXX = ptrNativeObject->getCurrent();
				EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry *pXXXX = new EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CGpuProgramParameters_AutoConstantIterator_next_CAutoConstantEntry(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantIterator* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantIterator*) pObjectXXXX;
				EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry objXXXX = ptrNativeObject->next();
				EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry *pXXXX = new EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CGpuProgramParameters_AutoConstantIterator_getBegin_CAutoConstantEntry(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantIterator* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantIterator*) pObjectXXXX;
				EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry objXXXX = ptrNativeObject->getBegin();
				EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry *pXXXX = new EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CGpuProgramParameters_AutoConstantIterator_getEnd_CAutoConstantEntry(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantIterator* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantIterator*) pObjectXXXX;
				EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry objXXXX = ptrNativeObject->getEnd();
				EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry *pXXXX = new EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CGpuProgramParameters_getAutoConstantIterator_AutoConstantIterator(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantIterator objXXXX = ptrNativeObject->getAutoConstantIterator();
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantIterator *pXXXX = new EarthView::World::Graphic::CGpuProgramParameters::AutoConstantIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CGpuProgramParameters_getAutoConstantCount_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getAutoConstantCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry*  _stdcall EarthView_World_Graphic_CGpuProgramParameters_getAutoConstantEntry_CAutoConstantEntry_ev_size_t(void *pObjectXXXX, _in const ev_uint64  index )
			{
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry* objXXXX = ptrNativeObject->getAutoConstantEntry(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CGpuProgramParameters_hasAutoConstants_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasAutoConstants();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry*  _stdcall EarthView_World_Graphic_CGpuProgramParameters_findFloatAutoConstantEntry_CAutoConstantEntry_ev_size_t(void *pObjectXXXX, _in ev_uint64  logicalIndex )
			{
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				const EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry* objXXXX = ptrNativeObject->findFloatAutoConstantEntry(logicalIndex);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry*  _stdcall EarthView_World_Graphic_CGpuProgramParameters_findIntAutoConstantEntry_CAutoConstantEntry_ev_size_t(void *pObjectXXXX, _in ev_uint64  logicalIndex )
			{
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				const EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry* objXXXX = ptrNativeObject->findIntAutoConstantEntry(logicalIndex);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry*  _stdcall EarthView_World_Graphic_CGpuProgramParameters_findAutoConstantEntry_CAutoConstantEntry_EVString(void *pObjectXXXX, _in const char* paramName )
			{
				EarthView::World::Core::ev_string paramName1 = paramName;
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				const EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry* objXXXX = ptrNativeObject->findAutoConstantEntry(paramName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry*  _stdcall EarthView_World_Graphic_CGpuProgramParameters__findRawAutoConstantEntryFloat_CAutoConstantEntry_ev_size_t(void *pObjectXXXX, _in ev_uint64  physicalIndex )
			{
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				const EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry* objXXXX = ptrNativeObject->_findRawAutoConstantEntryFloat(physicalIndex);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry*  _stdcall EarthView_World_Graphic_CGpuProgramParameters__findRawAutoConstantEntryInt_CAutoConstantEntry_ev_size_t(void *pObjectXXXX, _in ev_uint64  physicalIndex )
			{
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				const EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry* objXXXX = ptrNativeObject->_findRawAutoConstantEntryInt(physicalIndex);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters__updateAutoParams_void_CAutoParamDataSource_ev_uint16(void *pObjectXXXX, _in const EarthView::World::Graphic::CAutoParamDataSource* source, _in ev_uint16 variabilityMask )
			{
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->_updateAutoParams(source, variabilityMask);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters_setIgnoreMissingParams_void_ev_bool(void *pObjectXXXX, _in ev_bool state )
			{
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->setIgnoreMissingParams(state);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters_setNamedConstant_void_EVString_Real(void *pObjectXXXX, _in const char* name, _in Real val )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->setNamedConstant(name1, val);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters_setNamedConstant_void_EVString_ev_int32(void *pObjectXXXX, _in const char* name, _in ev_int32 val )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->setNamedConstant(name1, val);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters_setNamedConstant_void_EVString_CVector4(void *pObjectXXXX, _in const char* name, _in const void* vec )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->setNamedConstant(name1, *(EarthView::World::Spatial::Math::CVector4*)vec);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters_setNamedConstant_void_EVString_CVector3(void *pObjectXXXX, _in const char* name, _in const void* vec )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->setNamedConstant(name1, *(EarthView::World::Spatial::Math::CVector3*)vec);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters_setNamedConstant_void_EVString_CMatrix4(void *pObjectXXXX, _in const char* name, _in const void* m )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->setNamedConstant(name1, *(EarthView::World::Spatial::Math::CMatrix4*)m);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters_setNamedConstant_void_EVString_CMatrix4_ev_size_t(void *pObjectXXXX, _in const char* name, _in const EarthView::World::Spatial::Math::CMatrix4* m, _in ev_uint64  numEntries )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->setNamedConstant(name1, m, numEntries);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters_setNamedConstant_void_EVString_ev_real32_ev_size_t_ev_size_t(void *pObjectXXXX, _in const char* name, _in const ev_real32* val, _in ev_uint64  count, _in ev_uint64  multiple )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->setNamedConstant(name1, val, count, multiple);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters_setNamedConstant_void_EVString_ev_real32_ev_size_t(void *pObjectXXXX, _in const char* name, _in const ev_real32* val, _in ev_uint64  count )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->setNamedConstant(name1, val, count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters_setNamedConstant_void_EVString_ev_real64_ev_size_t_ev_size_t(void *pObjectXXXX, _in const char* name, _in const ev_real64* val, _in ev_uint64  count, _in ev_uint64  multiple )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->setNamedConstant(name1, val, count, multiple);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters_setNamedConstant_void_EVString_ev_real64_ev_size_t(void *pObjectXXXX, _in const char* name, _in const ev_real64* val, _in ev_uint64  count )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->setNamedConstant(name1, val, count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters_setNamedConstant_void_EVString_CColourValue(void *pObjectXXXX, _in const char* name, _in const void* colour )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->setNamedConstant(name1, *(EarthView::World::Graphic::CColourValue*)colour);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters_setNamedConstant_void_EVString_ev_int32_ev_size_t_ev_size_t(void *pObjectXXXX, _in const char* name, _in const ev_int32* val, _in ev_uint64  count, _in ev_uint64  multiple )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->setNamedConstant(name1, val, count, multiple);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters_setNamedConstant_void_EVString_ev_int32_ev_size_t(void *pObjectXXXX, _in const char* name, _in const ev_int32* val, _in ev_uint64  count )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->setNamedConstant(name1, val, count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters_setNamedAutoConstant_void_EVString_AutoConstantType_ev_size_t(void *pObjectXXXX, _in const char* name, _in int acType, _in ev_uint64  extraInfo )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->setNamedAutoConstant(name1, (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType)acType, extraInfo);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters_setNamedAutoConstant_void_EVString_AutoConstantType(void *pObjectXXXX, _in const char* name, _in int acType )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->setNamedAutoConstant(name1, (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType)acType);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters_setNamedAutoConstantReal_void_EVString_AutoConstantType_Real(void *pObjectXXXX, _in const char* name, _in int acType, _in Real rData )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->setNamedAutoConstantReal(name1, (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType)acType, rData);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters_setNamedAutoConstant_void_EVString_AutoConstantType_ev_uint16_ev_uint16(void *pObjectXXXX, _in const char* name, _in int acType, _in ev_uint16 extraInfo1, _in ev_uint16 extraInfo2 )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->setNamedAutoConstant(name1, (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType)acType, extraInfo1, extraInfo2);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters_setNamedConstantFromTime_void_EVString_Real(void *pObjectXXXX, _in const char* name, _in Real factor )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->setNamedConstantFromTime(name1, factor);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters_clearNamedAutoConstant_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->clearNamedAutoConstant(name1);
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::GpuConstantDefinition*  _stdcall EarthView_World_Graphic_CGpuProgramParameters__findNamedConstantDefinition_GpuConstantDefinition_EVString_ev_bool(void *pObjectXXXX, _in const char* name, _in ev_bool throwExceptionIfMissing )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				const EarthView::World::Graphic::GpuConstantDefinition* objXXXX = ptrNativeObject->_findNamedConstantDefinition(name1, throwExceptionIfMissing);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::GpuConstantDefinition*  _stdcall EarthView_World_Graphic_CGpuProgramParameters__findNamedConstantDefinition_GpuConstantDefinition_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				const EarthView::World::Graphic::GpuConstantDefinition* objXXXX = ptrNativeObject->_findNamedConstantDefinition(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CGpuProgramParameters__getFloatConstantPhysicalIndex_ev_size_t_ev_size_t_ev_size_t_ev_uint16(void *pObjectXXXX, _in ev_uint64  logicalIndex, _in ev_uint64  requestedSize, _in ev_uint16 variability )
			{
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->_getFloatConstantPhysicalIndex(logicalIndex, requestedSize, variability);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CGpuProgramParameters__getIntConstantPhysicalIndex_ev_size_t_ev_size_t_ev_size_t_ev_uint16(void *pObjectXXXX, _in ev_uint64  logicalIndex, _in ev_uint64  requestedSize, _in ev_uint16 variability )
			{
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->_getIntConstantPhysicalIndex(logicalIndex, requestedSize, variability);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters_setTransposeMatrices_void_ev_bool(void *pObjectXXXX, _in ev_bool val )
			{
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->setTransposeMatrices(val);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CGpuProgramParameters_getTransposeMatrices_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getTransposeMatrices();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters_copyConstantsFrom_void_CGpuProgramParameters(void *pObjectXXXX, _in const void* source )
			{
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->copyConstantsFrom(*(EarthView::World::Graphic::CGpuProgramParameters*)source);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters_copyMatchingNamedConstantsFrom_void_CGpuProgramParameters(void *pObjectXXXX, _in const void* source )
			{
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->copyMatchingNamedConstantsFrom(*(EarthView::World::Graphic::CGpuProgramParameters*)source);
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CGpuProgramParameters::AutoConstantDefinition*  _stdcall EarthView_World_Graphic_CGpuProgramParameters_getAutoConstantDefinition_AutoConstantDefinition_EVString(_in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::World::Graphic::CGpuProgramParameters::AutoConstantDefinition* objXXXX = EarthView::World::Graphic::CGpuProgramParameters::getAutoConstantDefinition(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CGpuProgramParameters::AutoConstantDefinition*  _stdcall EarthView_World_Graphic_CGpuProgramParameters_getAutoConstantDefinition_AutoConstantDefinition_ev_size_t(_in const ev_uint64  idx )
			{
				const EarthView::World::Graphic::CGpuProgramParameters::AutoConstantDefinition* objXXXX = EarthView::World::Graphic::CGpuProgramParameters::getAutoConstantDefinition(idx);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CGpuProgramParameters_getNumAutoConstantDefinitions_ev_size_t( )
			{
				ev_size_t objXXXX = EarthView::World::Graphic::CGpuProgramParameters::getNumAutoConstantDefinitions();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters_incPassIterationNumber_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->incPassIterationNumber();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CGpuProgramParameters_hasPassIterationNumber_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasPassIterationNumber();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CGpuProgramParameters_getPassIterationNumberIndex_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getPassIterationNumberIndex();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters_addSharedParameters_void_GpuSharedParametersPtr(void *pObjectXXXX, _in void* sharedParams )
			{
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->addSharedParameters(*(EarthView::World::Graphic::GpuSharedParametersPtr*)sharedParams);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters_addSharedParameters_void_EVString(void *pObjectXXXX, _in const char* sharedParamsName )
			{
				EarthView::World::Core::ev_string sharedParamsName1 = sharedParamsName;
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->addSharedParameters(sharedParamsName1);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CGpuProgramParameters_isUsingSharedParameters_ev_bool_EVString(void *pObjectXXXX, _in const char* sharedParamsName )
			{
				EarthView::World::Core::ev_string sharedParamsName1 = sharedParamsName;
				const EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isUsingSharedParameters(sharedParamsName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters_removeSharedParameters_void_EVString(void *pObjectXXXX, _in const char* sharedParamsName )
			{
				EarthView::World::Core::ev_string sharedParamsName1 = sharedParamsName;
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->removeSharedParameters(sharedParamsName1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters_removeAllSharedParameters_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->removeAllSharedParameters();
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CGpuProgramParameters_getSharedParameters_GpuSharedParamUsageList(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				const EarthView::World::Graphic::CGpuProgramParameters::GpuSharedParamUsageList& objXXXX = ptrNativeObject->getSharedParameters();
				const EarthView::World::Graphic::CGpuProgramParameters::GpuSharedParamUsageList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramParameters__copySharedParams_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CGpuProgramParameters* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramParameters*) pObjectXXXX;
				ptrNativeObject->_copySharedParams();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CGpuProgramParameters*  _stdcall EarthView_World_Graphic_GpuProgramParametersSharedPtr_get_CGpuProgramParameters(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::GpuProgramParametersSharedPtr* ptrNativeObject = (EarthView::World::Graphic::GpuProgramParametersSharedPtr*) pObjectXXXX;
				EarthView::World::Graphic::CGpuProgramParameters* objXXXX = ptrNativeObject->get();
				return objXXXX;
			}
		}
	}
}
