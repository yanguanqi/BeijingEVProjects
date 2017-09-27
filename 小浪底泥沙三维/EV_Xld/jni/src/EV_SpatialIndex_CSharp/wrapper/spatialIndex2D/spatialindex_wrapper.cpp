/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialindex/spatialIndex2D/spatialindex.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace SpatialIndex
			{
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_SpatialIndex_Data_getMBR_void_ev_real32_ev_real32_ev_real32_ev_real32(void *pObjectXXXX, _out ev_real32& dfUpleftX, _out ev_real32& dfUpleftY, _out ev_real32& dfDownrightX, _out ev_real32& dfDownRightY )
				{
					const EarthView::World::Spatial2D::SpatialIndex::Data* ptrNativeObject = (EarthView::World::Spatial2D::SpatialIndex::Data*) pObjectXXXX;
					ptrNativeObject->getMBR(dfUpleftX, dfUpleftY, dfDownrightX, dfDownRightY);
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_SpatialIndex_Data_getFeatureIndex_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::SpatialIndex::Data* ptrNativeObject = (EarthView::World::Spatial2D::SpatialIndex::Data*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getFeatureIndex();
					return objXXXX;
				}
				typedef ev_int32  ( _stdcall EarthView_World_Spatial2D_SpatialIndex_INode_getNodeID_ev_int32_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial2D_SpatialIndex_INode_getChildrenCount_ev_int32_Callback)();
				typedef const EarthView::World::Spatial2D::SpatialIndex::INode*  ( _stdcall EarthView_World_Spatial2D_SpatialIndex_INode_getChildNode_INode_ev_int32_Callback)(_in ev_int32 index);
				typedef const EarthView::World::Spatial2D::SpatialIndex::INode*  ( _stdcall EarthView_World_Spatial2D_SpatialIndex_INode_getParent_INode_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial2D_SpatialIndex_INode_getFeatureCount_ev_int32_Callback)();
				typedef void*  ( _stdcall EarthView_World_Spatial2D_SpatialIndex_INode_getFeatrueData_Data_ev_int32_Callback)(_in ev_int32 index);
				typedef void  ( _stdcall EarthView_World_Spatial2D_SpatialIndex_INode_getNodeMBR_void_ev_real32_ev_real32_ev_real32_ev_real32_Callback)(_out ev_real32& dfUpleftX, _out ev_real32& dfUpleftY, _out ev_real32& dfDownrightX, _out ev_real32& dfDownRightY);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_SpatialIndex_INode_isLeaf_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_SpatialIndex_INode_isRoot_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_SpatialIndex_INode_toStream_void_ev_uchar_ev_uint32_Callback)(_out ev_uchar*& pBuffer, _out ev_uint32& lenth);
				class INodeProxy : public EarthView::World::Spatial2D::SpatialIndex::INode
				{
				private:
					EarthView_World_Spatial2D_SpatialIndex_INode_getNodeID_ev_int32_Callback* m_EarthView_World_Spatial2D_SpatialIndex_INode_getNodeID_ev_int32_Callback;
					EarthView_World_Spatial2D_SpatialIndex_INode_getChildrenCount_ev_int32_Callback* m_EarthView_World_Spatial2D_SpatialIndex_INode_getChildrenCount_ev_int32_Callback;
					EarthView_World_Spatial2D_SpatialIndex_INode_getChildNode_INode_ev_int32_Callback* m_EarthView_World_Spatial2D_SpatialIndex_INode_getChildNode_INode_ev_int32_Callback;
					EarthView_World_Spatial2D_SpatialIndex_INode_getParent_INode_Callback* m_EarthView_World_Spatial2D_SpatialIndex_INode_getParent_INode_Callback;
					EarthView_World_Spatial2D_SpatialIndex_INode_getFeatureCount_ev_int32_Callback* m_EarthView_World_Spatial2D_SpatialIndex_INode_getFeatureCount_ev_int32_Callback;
					EarthView_World_Spatial2D_SpatialIndex_INode_getFeatrueData_Data_ev_int32_Callback* m_EarthView_World_Spatial2D_SpatialIndex_INode_getFeatrueData_Data_ev_int32_Callback;
					EarthView_World_Spatial2D_SpatialIndex_INode_getNodeMBR_void_ev_real32_ev_real32_ev_real32_ev_real32_Callback* m_EarthView_World_Spatial2D_SpatialIndex_INode_getNodeMBR_void_ev_real32_ev_real32_ev_real32_ev_real32_Callback;
					EarthView_World_Spatial2D_SpatialIndex_INode_isLeaf_ev_bool_Callback* m_EarthView_World_Spatial2D_SpatialIndex_INode_isLeaf_ev_bool_Callback;
					EarthView_World_Spatial2D_SpatialIndex_INode_isRoot_ev_bool_Callback* m_EarthView_World_Spatial2D_SpatialIndex_INode_isRoot_ev_bool_Callback;
					EarthView_World_Spatial2D_SpatialIndex_INode_toStream_void_ev_uchar_ev_uint32_Callback* m_EarthView_World_Spatial2D_SpatialIndex_INode_toStream_void_ev_uchar_ev_uint32_Callback;
				public:
					INodeProxy(EarthView::World::Core::CNameValuePairList *pList) : INode(pList)
					{
						m_EarthView_World_Spatial2D_SpatialIndex_INode_getNodeID_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_SpatialIndex_INode_getChildrenCount_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_SpatialIndex_INode_getChildNode_INode_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_SpatialIndex_INode_getParent_INode_Callback = NULL;
						m_EarthView_World_Spatial2D_SpatialIndex_INode_getFeatureCount_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_SpatialIndex_INode_getFeatrueData_Data_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_SpatialIndex_INode_getNodeMBR_void_ev_real32_ev_real32_ev_real32_ev_real32_Callback = NULL;
						m_EarthView_World_Spatial2D_SpatialIndex_INode_isLeaf_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_SpatialIndex_INode_isRoot_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_SpatialIndex_INode_toStream_void_ev_uchar_ev_uint32_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_SpatialIndex_INode_getNodeID_ev_int32(EarthView_World_Spatial2D_SpatialIndex_INode_getNodeID_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_SpatialIndex_INode_getNodeID_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_SpatialIndex_INode_getChildrenCount_ev_int32(EarthView_World_Spatial2D_SpatialIndex_INode_getChildrenCount_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_SpatialIndex_INode_getChildrenCount_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_SpatialIndex_INode_getChildNode_INode_ev_int32(EarthView_World_Spatial2D_SpatialIndex_INode_getChildNode_INode_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_SpatialIndex_INode_getChildNode_INode_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_SpatialIndex_INode_getParent_INode(EarthView_World_Spatial2D_SpatialIndex_INode_getParent_INode_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_SpatialIndex_INode_getParent_INode_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_SpatialIndex_INode_getFeatureCount_ev_int32(EarthView_World_Spatial2D_SpatialIndex_INode_getFeatureCount_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_SpatialIndex_INode_getFeatureCount_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_SpatialIndex_INode_getFeatrueData_Data_ev_int32(EarthView_World_Spatial2D_SpatialIndex_INode_getFeatrueData_Data_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_SpatialIndex_INode_getFeatrueData_Data_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_SpatialIndex_INode_getNodeMBR_void_ev_real32_ev_real32_ev_real32_ev_real32(EarthView_World_Spatial2D_SpatialIndex_INode_getNodeMBR_void_ev_real32_ev_real32_ev_real32_ev_real32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_SpatialIndex_INode_getNodeMBR_void_ev_real32_ev_real32_ev_real32_ev_real32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_SpatialIndex_INode_isLeaf_ev_bool(EarthView_World_Spatial2D_SpatialIndex_INode_isLeaf_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_SpatialIndex_INode_isLeaf_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_SpatialIndex_INode_isRoot_ev_bool(EarthView_World_Spatial2D_SpatialIndex_INode_isRoot_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_SpatialIndex_INode_isRoot_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_SpatialIndex_INode_toStream_void_ev_uchar_ev_uint32(EarthView_World_Spatial2D_SpatialIndex_INode_toStream_void_ev_uchar_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_SpatialIndex_INode_toStream_void_ev_uchar_ev_uint32_Callback = pCallback;
					}
					virtual ev_int32 getNodeID() const
					{
						if(m_EarthView_World_Spatial2D_SpatialIndex_INode_getNodeID_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial2D_SpatialIndex_INode_getNodeID_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->INode::getNodeID();
					}
					virtual ev_int32 getChildrenCount() const
					{
						if(m_EarthView_World_Spatial2D_SpatialIndex_INode_getChildrenCount_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial2D_SpatialIndex_INode_getChildrenCount_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->INode::getChildrenCount();
					}
					virtual const EarthView::World::Spatial2D::SpatialIndex::INode* getChildNode(_in ev_int32 index) const
					{
						if(m_EarthView_World_Spatial2D_SpatialIndex_INode_getChildNode_INode_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial2D::SpatialIndex::INode* returnValue = m_EarthView_World_Spatial2D_SpatialIndex_INode_getChildNode_INode_ev_int32_Callback(index);
							return returnValue;
						}
						else
							return this->INode::getChildNode(index);
					}
					virtual const EarthView::World::Spatial2D::SpatialIndex::INode* getParent() const
					{
						if(m_EarthView_World_Spatial2D_SpatialIndex_INode_getParent_INode_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial2D::SpatialIndex::INode* returnValue = m_EarthView_World_Spatial2D_SpatialIndex_INode_getParent_INode_Callback();
							return returnValue;
						}
						else
							return this->INode::getParent();
					}
					virtual ev_int32 getFeatureCount() const
					{
						if(m_EarthView_World_Spatial2D_SpatialIndex_INode_getFeatureCount_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial2D_SpatialIndex_INode_getFeatureCount_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->INode::getFeatureCount();
					}
					virtual EarthView::World::Spatial2D::SpatialIndex::Data getFeatrueData(_in ev_int32 index) const
					{
						if(m_EarthView_World_Spatial2D_SpatialIndex_INode_getFeatrueData_Data_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial2D::SpatialIndex::Data returnValue = *(EarthView::World::Spatial2D::SpatialIndex::Data*)m_EarthView_World_Spatial2D_SpatialIndex_INode_getFeatrueData_Data_ev_int32_Callback(index);
							return returnValue;
						}
						else
							return this->INode::getFeatrueData(index);
					}
					virtual void getNodeMBR(_out ev_real32& dfUpleftX, _out ev_real32& dfUpleftY, _out ev_real32& dfDownrightX, _out ev_real32& dfDownRightY) const
					{
						if(m_EarthView_World_Spatial2D_SpatialIndex_INode_getNodeMBR_void_ev_real32_ev_real32_ev_real32_ev_real32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_SpatialIndex_INode_getNodeMBR_void_ev_real32_ev_real32_ev_real32_ev_real32_Callback(dfUpleftX, dfUpleftY, dfDownrightX, dfDownRightY);
						}
						else
							return this->INode::getNodeMBR(dfUpleftX, dfUpleftY, dfDownrightX, dfDownRightY);
					}
					virtual ev_bool isLeaf() const
					{
						if(m_EarthView_World_Spatial2D_SpatialIndex_INode_isLeaf_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_SpatialIndex_INode_isLeaf_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->INode::isLeaf();
					}
					virtual ev_bool isRoot() const
					{
						if(m_EarthView_World_Spatial2D_SpatialIndex_INode_isRoot_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_SpatialIndex_INode_isRoot_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->INode::isRoot();
					}
					virtual void toStream(_out ev_uchar*& pBuffer, _out ev_uint32& lenth) const
					{
						if(m_EarthView_World_Spatial2D_SpatialIndex_INode_toStream_void_ev_uchar_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_SpatialIndex_INode_toStream_void_ev_uchar_ev_uint32_Callback(pBuffer, lenth);
						}
						else
							return this->INode::toStream(pBuffer, lenth);
					}
				};
				REGISTER_FACTORY_CLASS(INodeProxy);
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_SpatialIndex_INode_getNodeID_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::SpatialIndex::INode* ptrNativeObject = (EarthView::World::Spatial2D::SpatialIndex::INode*) pObjectXXXX;
					if (dynamic_cast<INodeProxy*>((EarthView::World::Spatial2D::SpatialIndex::INode*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::SpatialIndex::INode::getNodeID();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getNodeID();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_INode_getNodeID_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_SpatialIndex_INode_getNodeID_ev_int32_Callback* pCallback )
				{
					INodeProxy* ptr = dynamic_cast<INodeProxy*>((EarthView::World::Spatial2D::SpatialIndex::INode*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_SpatialIndex_INode_getNodeID_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_SpatialIndex_INode_getNodeID_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::SpatialIndex::INode* ptrNativeObject = (EarthView::World::Spatial2D::SpatialIndex::INode*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::SpatialIndex::INode::getNodeID();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_SpatialIndex_INode_getChildrenCount_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::SpatialIndex::INode* ptrNativeObject = (EarthView::World::Spatial2D::SpatialIndex::INode*) pObjectXXXX;
					if (dynamic_cast<INodeProxy*>((EarthView::World::Spatial2D::SpatialIndex::INode*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::SpatialIndex::INode::getChildrenCount();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getChildrenCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_INode_getChildrenCount_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_SpatialIndex_INode_getChildrenCount_ev_int32_Callback* pCallback )
				{
					INodeProxy* ptr = dynamic_cast<INodeProxy*>((EarthView::World::Spatial2D::SpatialIndex::INode*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_SpatialIndex_INode_getChildrenCount_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_SpatialIndex_INode_getChildrenCount_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::SpatialIndex::INode* ptrNativeObject = (EarthView::World::Spatial2D::SpatialIndex::INode*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::SpatialIndex::INode::getChildrenCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial2D::SpatialIndex::INode*  _stdcall EarthView_World_Spatial2D_SpatialIndex_INode_getChildNode_INode_ev_int32(void *pObjectXXXX, _in ev_int32 index )
				{
					const EarthView::World::Spatial2D::SpatialIndex::INode* ptrNativeObject = (EarthView::World::Spatial2D::SpatialIndex::INode*) pObjectXXXX;
					if (dynamic_cast<INodeProxy*>((EarthView::World::Spatial2D::SpatialIndex::INode*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial2D::SpatialIndex::INode* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::SpatialIndex::INode::getChildNode(index);
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial2D::SpatialIndex::INode* objXXXX = ptrNativeObject->getChildNode(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_INode_getChildNode_INode_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_SpatialIndex_INode_getChildNode_INode_ev_int32_Callback* pCallback )
				{
					INodeProxy* ptr = dynamic_cast<INodeProxy*>((EarthView::World::Spatial2D::SpatialIndex::INode*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_SpatialIndex_INode_getChildNode_INode_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial2D::SpatialIndex::INode*  _stdcall EarthView_World_Spatial2D_SpatialIndex_INode_getChildNode_INode_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 index )
				{
					const EarthView::World::Spatial2D::SpatialIndex::INode* ptrNativeObject = (EarthView::World::Spatial2D::SpatialIndex::INode*) pObjectXXXX;
					const EarthView::World::Spatial2D::SpatialIndex::INode* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::SpatialIndex::INode::getChildNode(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial2D::SpatialIndex::INode*  _stdcall EarthView_World_Spatial2D_SpatialIndex_INode_getParent_INode(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::SpatialIndex::INode* ptrNativeObject = (EarthView::World::Spatial2D::SpatialIndex::INode*) pObjectXXXX;
					if (dynamic_cast<INodeProxy*>((EarthView::World::Spatial2D::SpatialIndex::INode*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial2D::SpatialIndex::INode* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::SpatialIndex::INode::getParent();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial2D::SpatialIndex::INode* objXXXX = ptrNativeObject->getParent();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_INode_getParent_INode( void *pObjectXXXX, EarthView_World_Spatial2D_SpatialIndex_INode_getParent_INode_Callback* pCallback )
				{
					INodeProxy* ptr = dynamic_cast<INodeProxy*>((EarthView::World::Spatial2D::SpatialIndex::INode*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_SpatialIndex_INode_getParent_INode(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial2D::SpatialIndex::INode*  _stdcall EarthView_World_Spatial2D_SpatialIndex_INode_getParent_INode_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::SpatialIndex::INode* ptrNativeObject = (EarthView::World::Spatial2D::SpatialIndex::INode*) pObjectXXXX;
					const EarthView::World::Spatial2D::SpatialIndex::INode* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::SpatialIndex::INode::getParent();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_SpatialIndex_INode_getFeatureCount_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::SpatialIndex::INode* ptrNativeObject = (EarthView::World::Spatial2D::SpatialIndex::INode*) pObjectXXXX;
					if (dynamic_cast<INodeProxy*>((EarthView::World::Spatial2D::SpatialIndex::INode*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::SpatialIndex::INode::getFeatureCount();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getFeatureCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_INode_getFeatureCount_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_SpatialIndex_INode_getFeatureCount_ev_int32_Callback* pCallback )
				{
					INodeProxy* ptr = dynamic_cast<INodeProxy*>((EarthView::World::Spatial2D::SpatialIndex::INode*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_SpatialIndex_INode_getFeatureCount_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_SpatialIndex_INode_getFeatureCount_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::SpatialIndex::INode* ptrNativeObject = (EarthView::World::Spatial2D::SpatialIndex::INode*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::SpatialIndex::INode::getFeatureCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_SpatialIndex_INode_getFeatrueData_Data_ev_int32(void *pObjectXXXX, _in ev_int32 index )
				{
					const EarthView::World::Spatial2D::SpatialIndex::INode* ptrNativeObject = (EarthView::World::Spatial2D::SpatialIndex::INode*) pObjectXXXX;
					if (dynamic_cast<INodeProxy*>((EarthView::World::Spatial2D::SpatialIndex::INode*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial2D::SpatialIndex::Data objXXXX = ptrNativeObject->EarthView::World::Spatial2D::SpatialIndex::INode::getFeatrueData(index);
						EarthView::World::Spatial2D::SpatialIndex::Data *pXXXX = new EarthView::World::Spatial2D::SpatialIndex::Data(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Spatial2D::SpatialIndex::Data objXXXX = ptrNativeObject->getFeatrueData(index);
						EarthView::World::Spatial2D::SpatialIndex::Data *pXXXX = new EarthView::World::Spatial2D::SpatialIndex::Data(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_INode_getFeatrueData_Data_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_SpatialIndex_INode_getFeatrueData_Data_ev_int32_Callback* pCallback )
				{
					INodeProxy* ptr = dynamic_cast<INodeProxy*>((EarthView::World::Spatial2D::SpatialIndex::INode*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_SpatialIndex_INode_getFeatrueData_Data_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_SpatialIndex_INode_getFeatrueData_Data_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 index )
				{
					const EarthView::World::Spatial2D::SpatialIndex::INode* ptrNativeObject = (EarthView::World::Spatial2D::SpatialIndex::INode*) pObjectXXXX;
					EarthView::World::Spatial2D::SpatialIndex::Data objXXXX = ptrNativeObject->EarthView::World::Spatial2D::SpatialIndex::INode::getFeatrueData(index);
					EarthView::World::Spatial2D::SpatialIndex::Data *pXXXX = new EarthView::World::Spatial2D::SpatialIndex::Data(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_SpatialIndex_INode_getNodeMBR_void_ev_real32_ev_real32_ev_real32_ev_real32(void *pObjectXXXX, _out ev_real32& dfUpleftX, _out ev_real32& dfUpleftY, _out ev_real32& dfDownrightX, _out ev_real32& dfDownRightY )
				{
					const EarthView::World::Spatial2D::SpatialIndex::INode* ptrNativeObject = (EarthView::World::Spatial2D::SpatialIndex::INode*) pObjectXXXX;
					if (dynamic_cast<INodeProxy*>((EarthView::World::Spatial2D::SpatialIndex::INode*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::SpatialIndex::INode::getNodeMBR(dfUpleftX, dfUpleftY, dfDownrightX, dfDownRightY);
					else
						ptrNativeObject->getNodeMBR(dfUpleftX, dfUpleftY, dfDownrightX, dfDownRightY);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_INode_getNodeMBR_void_ev_real32_ev_real32_ev_real32_ev_real32( void *pObjectXXXX, EarthView_World_Spatial2D_SpatialIndex_INode_getNodeMBR_void_ev_real32_ev_real32_ev_real32_ev_real32_Callback* pCallback )
				{
					INodeProxy* ptr = dynamic_cast<INodeProxy*>((EarthView::World::Spatial2D::SpatialIndex::INode*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_SpatialIndex_INode_getNodeMBR_void_ev_real32_ev_real32_ev_real32_ev_real32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_SpatialIndex_INode_getNodeMBR_void_ev_real32_ev_real32_ev_real32_ev_real32_NoVirtual(void *pObjectXXXX, _out ev_real32& dfUpleftX, _out ev_real32& dfUpleftY, _out ev_real32& dfDownrightX, _out ev_real32& dfDownRightY )
				{
					const EarthView::World::Spatial2D::SpatialIndex::INode* ptrNativeObject = (EarthView::World::Spatial2D::SpatialIndex::INode*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::SpatialIndex::INode::getNodeMBR(dfUpleftX, dfUpleftY, dfDownrightX, dfDownRightY);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_SpatialIndex_INode_isLeaf_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::SpatialIndex::INode* ptrNativeObject = (EarthView::World::Spatial2D::SpatialIndex::INode*) pObjectXXXX;
					if (dynamic_cast<INodeProxy*>((EarthView::World::Spatial2D::SpatialIndex::INode*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::SpatialIndex::INode::isLeaf();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isLeaf();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_INode_isLeaf_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_SpatialIndex_INode_isLeaf_ev_bool_Callback* pCallback )
				{
					INodeProxy* ptr = dynamic_cast<INodeProxy*>((EarthView::World::Spatial2D::SpatialIndex::INode*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_SpatialIndex_INode_isLeaf_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_SpatialIndex_INode_isLeaf_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::SpatialIndex::INode* ptrNativeObject = (EarthView::World::Spatial2D::SpatialIndex::INode*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::SpatialIndex::INode::isLeaf();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_SpatialIndex_INode_isRoot_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::SpatialIndex::INode* ptrNativeObject = (EarthView::World::Spatial2D::SpatialIndex::INode*) pObjectXXXX;
					if (dynamic_cast<INodeProxy*>((EarthView::World::Spatial2D::SpatialIndex::INode*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::SpatialIndex::INode::isRoot();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isRoot();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_INode_isRoot_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_SpatialIndex_INode_isRoot_ev_bool_Callback* pCallback )
				{
					INodeProxy* ptr = dynamic_cast<INodeProxy*>((EarthView::World::Spatial2D::SpatialIndex::INode*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_SpatialIndex_INode_isRoot_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_SpatialIndex_INode_isRoot_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::SpatialIndex::INode* ptrNativeObject = (EarthView::World::Spatial2D::SpatialIndex::INode*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::SpatialIndex::INode::isRoot();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_SpatialIndex_INode_toStream_void_ev_uchar_ev_uint32(void *pObjectXXXX, _out ev_uchar*& pBuffer, _out ev_uint32& lenth )
				{
					const EarthView::World::Spatial2D::SpatialIndex::INode* ptrNativeObject = (EarthView::World::Spatial2D::SpatialIndex::INode*) pObjectXXXX;
					if (dynamic_cast<INodeProxy*>((EarthView::World::Spatial2D::SpatialIndex::INode*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::SpatialIndex::INode::toStream(pBuffer, lenth);
					else
						ptrNativeObject->toStream(pBuffer, lenth);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_INode_toStream_void_ev_uchar_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_SpatialIndex_INode_toStream_void_ev_uchar_ev_uint32_Callback* pCallback )
				{
					INodeProxy* ptr = dynamic_cast<INodeProxy*>((EarthView::World::Spatial2D::SpatialIndex::INode*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_SpatialIndex_INode_toStream_void_ev_uchar_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_SpatialIndex_INode_toStream_void_ev_uchar_ev_uint32_NoVirtual(void *pObjectXXXX, _out ev_uchar*& pBuffer, _out ev_uint32& lenth )
				{
					const EarthView::World::Spatial2D::SpatialIndex::INode* ptrNativeObject = (EarthView::World::Spatial2D::SpatialIndex::INode*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::SpatialIndex::INode::toStream(pBuffer, lenth);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_SpatialIndex_IDVistor_OperatorAssign_IDVistor_IDVistor(void *pObjXXXX, _in const void* other )
				{
					EarthView::World::Spatial2D::SpatialIndex::IDVistor& objXXXX = *((EarthView::World::Spatial2D::SpatialIndex::IDVistor*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial2D::SpatialIndex::IDVistor*)other;
					EarthView::World::Spatial2D::SpatialIndex::IDVistor *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial2D_SpatialIndex_IDVistor_getSize_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::SpatialIndex::IDVistor* ptrNativeObject = (EarthView::World::Spatial2D::SpatialIndex::IDVistor*) pObjectXXXX;
					size_t objXXXX = ptrNativeObject->getSize();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32&  _stdcall EarthView_World_Spatial2D_SpatialIndex_IDVistor_OperatorIndex_ev_uint32_size_t(void *pObjXXXX, _in ev_uint64  index )
				{
					EarthView::World::Spatial2D::SpatialIndex::IDVistor& objYYYY = *(EarthView::World::Spatial2D::SpatialIndex::IDVistor*) pObjXXXX;
					ev_uint32& objXXXX = objYYYY[index];
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_SpatialIndex_Point2DF_OperatorEquals_ev_bool_Point2DF(void *pObjXXXX, _in const void* other )
				{
					EarthView::World::Spatial2D::SpatialIndex::Point2DF& objXXXX = *(EarthView::World::Spatial2D::SpatialIndex::Point2DF*) pObjXXXX;
					const EarthView::World::Spatial2D::SpatialIndex::Point2DF& objXXXX1 = *(EarthView::World::Spatial2D::SpatialIndex::Point2DF*)other;
					return objXXXX == objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_SpatialIndex_Point2DF_OperatorNotEquals_ev_bool_Point2DF(void *pObjXXXX, _in const void* other )
				{
					EarthView::World::Spatial2D::SpatialIndex::Point2DF& objXXXX = *(EarthView::World::Spatial2D::SpatialIndex::Point2DF*) pObjXXXX;
					const EarthView::World::Spatial2D::SpatialIndex::Point2DF& objXXXX1 = *(EarthView::World::Spatial2D::SpatialIndex::Point2DF*)other;
					return objXXXX != objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Spatial2D_SpatialIndex_Point2DF_X( void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::SpatialIndex::Point2DF* ptrNativeObject = (EarthView::World::Spatial2D::SpatialIndex::Point2DF*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->X;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial2D_SpatialIndex_Point2DF_X( void *pObjectXXXX, ev_real32  value )
				{
					((EarthView::World::Spatial2D::SpatialIndex::Point2DF*)pObjectXXXX)->X = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Spatial2D_SpatialIndex_Point2DF_Y( void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::SpatialIndex::Point2DF* ptrNativeObject = (EarthView::World::Spatial2D::SpatialIndex::Point2DF*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->Y;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial2D_SpatialIndex_Point2DF_Y( void *pObjectXXXX, ev_real32  value )
				{
					((EarthView::World::Spatial2D::SpatialIndex::Point2DF*)pObjectXXXX)->Y = value;
				}
				typedef void  ( _stdcall EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_insertData_void_Data_Callback)(_in const void* data);
				typedef void  ( _stdcall EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_deleteData_void_Data_Callback)(_in const void* data);
				typedef void  ( _stdcall EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_containsWhatQuery_void_Data_IDVistor_Callback)(_in const void* query, _out void* presultIDList);
				typedef void  ( _stdcall EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_intersectsWithQuery_void_Data_IDVistor_Callback)(_in const void* query, _out void* presultIDList);
				typedef void  ( _stdcall EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_pointLocationQuery_void_Point2DF_IDVistor_Callback)(_in const void* query, _out void* presultIDList);
				typedef void  ( _stdcall EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_nearestNeighborQuery_void_ev_real32_Data_IDVistor_Callback)(_in ev_real32 dfthreshold, _in const void* query, _out void* presultIDList);
				typedef int  ( _stdcall EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_getIndexType_SINDEXTYPE_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_getStatistics_void_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_out ev_int32& pnFeatureCount, _out ev_int32& pnNodeCount, _out ev_int32& pnMaxDepth, _out ev_int32& pnMaxBucketCapacity);
				class ISpatialIndexProxy : public EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex
				{
				private:
					EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_insertData_void_Data_Callback* m_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_insertData_void_Data_Callback;
					EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_deleteData_void_Data_Callback* m_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_deleteData_void_Data_Callback;
					EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_containsWhatQuery_void_Data_IDVistor_Callback* m_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_containsWhatQuery_void_Data_IDVistor_Callback;
					EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_intersectsWithQuery_void_Data_IDVistor_Callback* m_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_intersectsWithQuery_void_Data_IDVistor_Callback;
					EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_pointLocationQuery_void_Point2DF_IDVistor_Callback* m_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_pointLocationQuery_void_Point2DF_IDVistor_Callback;
					EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_nearestNeighborQuery_void_ev_real32_Data_IDVistor_Callback* m_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_nearestNeighborQuery_void_ev_real32_Data_IDVistor_Callback;
					EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_getIndexType_SINDEXTYPE_Callback* m_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_getIndexType_SINDEXTYPE_Callback;
					EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_getStatistics_void_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_getStatistics_void_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
				public:
					ISpatialIndexProxy(EarthView::World::Core::CNameValuePairList *pList) : ISpatialIndex(pList)
					{
						m_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_insertData_void_Data_Callback = NULL;
						m_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_deleteData_void_Data_Callback = NULL;
						m_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_containsWhatQuery_void_Data_IDVistor_Callback = NULL;
						m_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_intersectsWithQuery_void_Data_IDVistor_Callback = NULL;
						m_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_pointLocationQuery_void_Point2DF_IDVistor_Callback = NULL;
						m_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_nearestNeighborQuery_void_ev_real32_Data_IDVistor_Callback = NULL;
						m_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_getIndexType_SINDEXTYPE_Callback = NULL;
						m_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_getStatistics_void_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_insertData_void_Data(EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_insertData_void_Data_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_insertData_void_Data_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_deleteData_void_Data(EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_deleteData_void_Data_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_deleteData_void_Data_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_containsWhatQuery_void_Data_IDVistor(EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_containsWhatQuery_void_Data_IDVistor_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_containsWhatQuery_void_Data_IDVistor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_intersectsWithQuery_void_Data_IDVistor(EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_intersectsWithQuery_void_Data_IDVistor_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_intersectsWithQuery_void_Data_IDVistor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_pointLocationQuery_void_Point2DF_IDVistor(EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_pointLocationQuery_void_Point2DF_IDVistor_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_pointLocationQuery_void_Point2DF_IDVistor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_nearestNeighborQuery_void_ev_real32_Data_IDVistor(EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_nearestNeighborQuery_void_ev_real32_Data_IDVistor_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_nearestNeighborQuery_void_ev_real32_Data_IDVistor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_getIndexType_SINDEXTYPE(EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_getIndexType_SINDEXTYPE_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_getIndexType_SINDEXTYPE_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_getStatistics_void_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_getStatistics_void_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_getStatistics_void_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					virtual void insertData(_in const EarthView::World::Spatial2D::SpatialIndex::Data& data)
					{
						if(m_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_insertData_void_Data_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_insertData_void_Data_Callback(&data);
						}
						else
							return this->ISpatialIndex::insertData(data);
					}
					virtual void deleteData(_in const EarthView::World::Spatial2D::SpatialIndex::Data& data)
					{
						if(m_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_deleteData_void_Data_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_deleteData_void_Data_Callback(&data);
						}
						else
							return this->ISpatialIndex::deleteData(data);
					}
					virtual void containsWhatQuery(_in const EarthView::World::Spatial2D::SpatialIndex::Data& query, _out EarthView::World::Spatial2D::SpatialIndex::IDVistor& presultIDList) const
					{
						if(m_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_containsWhatQuery_void_Data_IDVistor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_containsWhatQuery_void_Data_IDVistor_Callback(&query, &presultIDList);
						}
						else
							return this->ISpatialIndex::containsWhatQuery(query, presultIDList);
					}
					virtual void intersectsWithQuery(_in const EarthView::World::Spatial2D::SpatialIndex::Data& query, _out EarthView::World::Spatial2D::SpatialIndex::IDVistor& presultIDList) const
					{
						if(m_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_intersectsWithQuery_void_Data_IDVistor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_intersectsWithQuery_void_Data_IDVistor_Callback(&query, &presultIDList);
						}
						else
							return this->ISpatialIndex::intersectsWithQuery(query, presultIDList);
					}
					virtual void pointLocationQuery(_in const EarthView::World::Spatial2D::SpatialIndex::Point2DF& query, _out EarthView::World::Spatial2D::SpatialIndex::IDVistor& presultIDList) const
					{
						if(m_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_pointLocationQuery_void_Point2DF_IDVistor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_pointLocationQuery_void_Point2DF_IDVistor_Callback(&query, &presultIDList);
						}
						else
							return this->ISpatialIndex::pointLocationQuery(query, presultIDList);
					}
					virtual void nearestNeighborQuery(_in ev_real32 dfthreshold, _in const EarthView::World::Spatial2D::SpatialIndex::Data& query, _out EarthView::World::Spatial2D::SpatialIndex::IDVistor& presultIDList) const
					{
						if(m_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_nearestNeighborQuery_void_ev_real32_Data_IDVistor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_nearestNeighborQuery_void_ev_real32_Data_IDVistor_Callback(dfthreshold, &query, &presultIDList);
						}
						else
							return this->ISpatialIndex::nearestNeighborQuery(dfthreshold, query, presultIDList);
					}
					virtual EarthView::World::Spatial2D::SpatialIndex::SINDEXTYPE getIndexType() const
					{
						if(m_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_getIndexType_SINDEXTYPE_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial2D::SpatialIndex::SINDEXTYPE returnValue = (EarthView::World::Spatial2D::SpatialIndex::SINDEXTYPE)m_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_getIndexType_SINDEXTYPE_Callback();
							return returnValue;
						}
						else
							return this->ISpatialIndex::getIndexType();
					}
					virtual void getStatistics(_out ev_int32& pnFeatureCount, _out ev_int32& pnNodeCount, _out ev_int32& pnMaxDepth, _out ev_int32& pnMaxBucketCapacity)
					{
						if(m_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_getStatistics_void_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_getStatistics_void_ev_int32_ev_int32_ev_int32_ev_int32_Callback(pnFeatureCount, pnNodeCount, pnMaxDepth, pnMaxBucketCapacity);
						}
						else
							return this->ISpatialIndex::getStatistics(pnFeatureCount, pnNodeCount, pnMaxDepth, pnMaxBucketCapacity);
					}
				};
				REGISTER_FACTORY_CLASS(ISpatialIndexProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_insertData_void_Data(void *pObjectXXXX, _in const void* data )
				{
					EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex* ptrNativeObject = (EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*) pObjectXXXX;
					if (dynamic_cast<ISpatialIndexProxy*>((EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex::insertData(*(EarthView::World::Spatial2D::SpatialIndex::Data*)data);
					else
						ptrNativeObject->insertData(*(EarthView::World::Spatial2D::SpatialIndex::Data*)data);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_insertData_void_Data( void *pObjectXXXX, EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_insertData_void_Data_Callback* pCallback )
				{
					ISpatialIndexProxy* ptr = dynamic_cast<ISpatialIndexProxy*>((EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_insertData_void_Data(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_insertData_void_Data_NoVirtual(void *pObjectXXXX, _in const void* data )
				{
					EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex* ptrNativeObject = (EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex::insertData(*(EarthView::World::Spatial2D::SpatialIndex::Data*)data);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_deleteData_void_Data(void *pObjectXXXX, _in const void* data )
				{
					EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex* ptrNativeObject = (EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*) pObjectXXXX;
					if (dynamic_cast<ISpatialIndexProxy*>((EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex::deleteData(*(EarthView::World::Spatial2D::SpatialIndex::Data*)data);
					else
						ptrNativeObject->deleteData(*(EarthView::World::Spatial2D::SpatialIndex::Data*)data);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_deleteData_void_Data( void *pObjectXXXX, EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_deleteData_void_Data_Callback* pCallback )
				{
					ISpatialIndexProxy* ptr = dynamic_cast<ISpatialIndexProxy*>((EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_deleteData_void_Data(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_deleteData_void_Data_NoVirtual(void *pObjectXXXX, _in const void* data )
				{
					EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex* ptrNativeObject = (EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex::deleteData(*(EarthView::World::Spatial2D::SpatialIndex::Data*)data);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_containsWhatQuery_void_Data_IDVistor(void *pObjectXXXX, _in const void* query, _out void* presultIDList )
				{
					const EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex* ptrNativeObject = (EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*) pObjectXXXX;
					if (dynamic_cast<ISpatialIndexProxy*>((EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex::containsWhatQuery(*(EarthView::World::Spatial2D::SpatialIndex::Data*)query, *(EarthView::World::Spatial2D::SpatialIndex::IDVistor*)presultIDList);
					else
						ptrNativeObject->containsWhatQuery(*(EarthView::World::Spatial2D::SpatialIndex::Data*)query, *(EarthView::World::Spatial2D::SpatialIndex::IDVistor*)presultIDList);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_containsWhatQuery_void_Data_IDVistor( void *pObjectXXXX, EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_containsWhatQuery_void_Data_IDVistor_Callback* pCallback )
				{
					ISpatialIndexProxy* ptr = dynamic_cast<ISpatialIndexProxy*>((EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_containsWhatQuery_void_Data_IDVistor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_containsWhatQuery_void_Data_IDVistor_NoVirtual(void *pObjectXXXX, _in const void* query, _out void* presultIDList )
				{
					const EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex* ptrNativeObject = (EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex::containsWhatQuery(*(EarthView::World::Spatial2D::SpatialIndex::Data*)query, *(EarthView::World::Spatial2D::SpatialIndex::IDVistor*)presultIDList);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_intersectsWithQuery_void_Data_IDVistor(void *pObjectXXXX, _in const void* query, _out void* presultIDList )
				{
					const EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex* ptrNativeObject = (EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*) pObjectXXXX;
					if (dynamic_cast<ISpatialIndexProxy*>((EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex::intersectsWithQuery(*(EarthView::World::Spatial2D::SpatialIndex::Data*)query, *(EarthView::World::Spatial2D::SpatialIndex::IDVistor*)presultIDList);
					else
						ptrNativeObject->intersectsWithQuery(*(EarthView::World::Spatial2D::SpatialIndex::Data*)query, *(EarthView::World::Spatial2D::SpatialIndex::IDVistor*)presultIDList);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_intersectsWithQuery_void_Data_IDVistor( void *pObjectXXXX, EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_intersectsWithQuery_void_Data_IDVistor_Callback* pCallback )
				{
					ISpatialIndexProxy* ptr = dynamic_cast<ISpatialIndexProxy*>((EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_intersectsWithQuery_void_Data_IDVistor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_intersectsWithQuery_void_Data_IDVistor_NoVirtual(void *pObjectXXXX, _in const void* query, _out void* presultIDList )
				{
					const EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex* ptrNativeObject = (EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex::intersectsWithQuery(*(EarthView::World::Spatial2D::SpatialIndex::Data*)query, *(EarthView::World::Spatial2D::SpatialIndex::IDVistor*)presultIDList);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_pointLocationQuery_void_Point2DF_IDVistor(void *pObjectXXXX, _in const void* query, _out void* presultIDList )
				{
					const EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex* ptrNativeObject = (EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*) pObjectXXXX;
					if (dynamic_cast<ISpatialIndexProxy*>((EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex::pointLocationQuery(*(EarthView::World::Spatial2D::SpatialIndex::Point2DF*)query, *(EarthView::World::Spatial2D::SpatialIndex::IDVistor*)presultIDList);
					else
						ptrNativeObject->pointLocationQuery(*(EarthView::World::Spatial2D::SpatialIndex::Point2DF*)query, *(EarthView::World::Spatial2D::SpatialIndex::IDVistor*)presultIDList);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_pointLocationQuery_void_Point2DF_IDVistor( void *pObjectXXXX, EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_pointLocationQuery_void_Point2DF_IDVistor_Callback* pCallback )
				{
					ISpatialIndexProxy* ptr = dynamic_cast<ISpatialIndexProxy*>((EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_pointLocationQuery_void_Point2DF_IDVistor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_pointLocationQuery_void_Point2DF_IDVistor_NoVirtual(void *pObjectXXXX, _in const void* query, _out void* presultIDList )
				{
					const EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex* ptrNativeObject = (EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex::pointLocationQuery(*(EarthView::World::Spatial2D::SpatialIndex::Point2DF*)query, *(EarthView::World::Spatial2D::SpatialIndex::IDVistor*)presultIDList);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_nearestNeighborQuery_void_ev_real32_Data_IDVistor(void *pObjectXXXX, _in ev_real32 dfthreshold, _in const void* query, _out void* presultIDList )
				{
					const EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex* ptrNativeObject = (EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*) pObjectXXXX;
					if (dynamic_cast<ISpatialIndexProxy*>((EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex::nearestNeighborQuery(dfthreshold, *(EarthView::World::Spatial2D::SpatialIndex::Data*)query, *(EarthView::World::Spatial2D::SpatialIndex::IDVistor*)presultIDList);
					else
						ptrNativeObject->nearestNeighborQuery(dfthreshold, *(EarthView::World::Spatial2D::SpatialIndex::Data*)query, *(EarthView::World::Spatial2D::SpatialIndex::IDVistor*)presultIDList);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_nearestNeighborQuery_void_ev_real32_Data_IDVistor( void *pObjectXXXX, EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_nearestNeighborQuery_void_ev_real32_Data_IDVistor_Callback* pCallback )
				{
					ISpatialIndexProxy* ptr = dynamic_cast<ISpatialIndexProxy*>((EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_nearestNeighborQuery_void_ev_real32_Data_IDVistor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_nearestNeighborQuery_void_ev_real32_Data_IDVistor_NoVirtual(void *pObjectXXXX, _in ev_real32 dfthreshold, _in const void* query, _out void* presultIDList )
				{
					const EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex* ptrNativeObject = (EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex::nearestNeighborQuery(dfthreshold, *(EarthView::World::Spatial2D::SpatialIndex::Data*)query, *(EarthView::World::Spatial2D::SpatialIndex::IDVistor*)presultIDList);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_getIndexType_SINDEXTYPE(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex* ptrNativeObject = (EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*) pObjectXXXX;
					if (dynamic_cast<ISpatialIndexProxy*>((EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial2D::SpatialIndex::SINDEXTYPE objXXXX = ptrNativeObject->EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex::getIndexType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial2D::SpatialIndex::SINDEXTYPE objXXXX = ptrNativeObject->getIndexType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_getIndexType_SINDEXTYPE( void *pObjectXXXX, EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_getIndexType_SINDEXTYPE_Callback* pCallback )
				{
					ISpatialIndexProxy* ptr = dynamic_cast<ISpatialIndexProxy*>((EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_getIndexType_SINDEXTYPE(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_getIndexType_SINDEXTYPE_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex* ptrNativeObject = (EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*) pObjectXXXX;
					EarthView::World::Spatial2D::SpatialIndex::SINDEXTYPE objXXXX = ptrNativeObject->EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex::getIndexType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_getStatistics_void_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _out ev_int32& pnFeatureCount, _out ev_int32& pnNodeCount, _out ev_int32& pnMaxDepth, _out ev_int32& pnMaxBucketCapacity )
				{
					EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex* ptrNativeObject = (EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*) pObjectXXXX;
					if (dynamic_cast<ISpatialIndexProxy*>((EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex::getStatistics(pnFeatureCount, pnNodeCount, pnMaxDepth, pnMaxBucketCapacity);
					else
						ptrNativeObject->getStatistics(pnFeatureCount, pnNodeCount, pnMaxDepth, pnMaxBucketCapacity);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_getStatistics_void_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_getStatistics_void_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					ISpatialIndexProxy* ptr = dynamic_cast<ISpatialIndexProxy*>((EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_getStatistics_void_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_getStatistics_void_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _out ev_int32& pnFeatureCount, _out ev_int32& pnNodeCount, _out ev_int32& pnMaxDepth, _out ev_int32& pnMaxBucketCapacity )
				{
					EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex* ptrNativeObject = (EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex::getStatistics(pnFeatureCount, pnNodeCount, pnMaxDepth, pnMaxBucketCapacity);
				}
				typedef EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*  ( _stdcall EarthView_World_Spatial2D_SpatialIndex_IStorageManager_load_ISpatialIndex_ev_char_Callback)(_in const ev_char* pFullpath);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_SpatialIndex_IStorageManager_save_ev_bool_ISpatialIndex_ev_char_Callback)(_in const EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex* hSpatialIndex, _in const ev_char* pFilepath);
				typedef EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*  ( _stdcall EarthView_World_Spatial2D_SpatialIndex_IStorageManager_load_ISpatialIndex_CDataStream_Callback)(_in void* stream);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_SpatialIndex_IStorageManager_save_ev_bool_ISpatialIndex_CDataStream_Callback)(_in const EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex* hSpatialIndex, _inout void* stream);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_SpatialIndex_IStorageManager_saveAllNodes_ev_bool_ISpatialIndex_CDataStream_Callback)(_in const EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex* hSpatialIndex, _inout void* stream);
				typedef int  ( _stdcall EarthView_World_Spatial2D_SpatialIndex_IStorageManager_getDriverType_DRIVERTYPE_Callback)();
				class IStorageManagerProxy : public EarthView::World::Spatial2D::SpatialIndex::IStorageManager
				{
				private:
					EarthView_World_Spatial2D_SpatialIndex_IStorageManager_load_ISpatialIndex_ev_char_Callback* m_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_load_ISpatialIndex_ev_char_Callback;
					EarthView_World_Spatial2D_SpatialIndex_IStorageManager_save_ev_bool_ISpatialIndex_ev_char_Callback* m_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_save_ev_bool_ISpatialIndex_ev_char_Callback;
					EarthView_World_Spatial2D_SpatialIndex_IStorageManager_load_ISpatialIndex_CDataStream_Callback* m_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_load_ISpatialIndex_CDataStream_Callback;
					EarthView_World_Spatial2D_SpatialIndex_IStorageManager_save_ev_bool_ISpatialIndex_CDataStream_Callback* m_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_save_ev_bool_ISpatialIndex_CDataStream_Callback;
					EarthView_World_Spatial2D_SpatialIndex_IStorageManager_saveAllNodes_ev_bool_ISpatialIndex_CDataStream_Callback* m_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_saveAllNodes_ev_bool_ISpatialIndex_CDataStream_Callback;
					EarthView_World_Spatial2D_SpatialIndex_IStorageManager_getDriverType_DRIVERTYPE_Callback* m_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_getDriverType_DRIVERTYPE_Callback;
				public:
					IStorageManagerProxy(EarthView::World::Core::CNameValuePairList *pList) : IStorageManager(pList)
					{
						m_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_load_ISpatialIndex_ev_char_Callback = NULL;
						m_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_save_ev_bool_ISpatialIndex_ev_char_Callback = NULL;
						m_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_load_ISpatialIndex_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_save_ev_bool_ISpatialIndex_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_saveAllNodes_ev_bool_ISpatialIndex_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_getDriverType_DRIVERTYPE_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_load_ISpatialIndex_ev_char(EarthView_World_Spatial2D_SpatialIndex_IStorageManager_load_ISpatialIndex_ev_char_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_load_ISpatialIndex_ev_char_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_save_ev_bool_ISpatialIndex_ev_char(EarthView_World_Spatial2D_SpatialIndex_IStorageManager_save_ev_bool_ISpatialIndex_ev_char_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_save_ev_bool_ISpatialIndex_ev_char_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_load_ISpatialIndex_CDataStream(EarthView_World_Spatial2D_SpatialIndex_IStorageManager_load_ISpatialIndex_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_load_ISpatialIndex_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_save_ev_bool_ISpatialIndex_CDataStream(EarthView_World_Spatial2D_SpatialIndex_IStorageManager_save_ev_bool_ISpatialIndex_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_save_ev_bool_ISpatialIndex_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_saveAllNodes_ev_bool_ISpatialIndex_CDataStream(EarthView_World_Spatial2D_SpatialIndex_IStorageManager_saveAllNodes_ev_bool_ISpatialIndex_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_saveAllNodes_ev_bool_ISpatialIndex_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_getDriverType_DRIVERTYPE(EarthView_World_Spatial2D_SpatialIndex_IStorageManager_getDriverType_DRIVERTYPE_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_getDriverType_DRIVERTYPE_Callback = pCallback;
					}
					virtual EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex* load(_in const ev_char* pFullpath) const
					{
						if(m_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_load_ISpatialIndex_ev_char_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex* returnValue = m_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_load_ISpatialIndex_ev_char_Callback(pFullpath);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->IStorageManager::load(pFullpath);
					}
					virtual ev_bool save(_in const EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex* hSpatialIndex, _in const ev_char* pFilepath) const
					{
						if(m_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_save_ev_bool_ISpatialIndex_ev_char_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_save_ev_bool_ISpatialIndex_ev_char_Callback(hSpatialIndex, pFilepath);
							return returnValue;
						}
						else
							return this->IStorageManager::save(hSpatialIndex, pFilepath);
					}
					virtual EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex* load(_in EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_load_ISpatialIndex_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex* returnValue = m_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_load_ISpatialIndex_CDataStream_Callback(&stream);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->IStorageManager::load(stream);
					}
					virtual ev_bool save(_in const EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex* hSpatialIndex, _inout EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_save_ev_bool_ISpatialIndex_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_save_ev_bool_ISpatialIndex_CDataStream_Callback(hSpatialIndex, &stream);
							return returnValue;
						}
						else
							return this->IStorageManager::save(hSpatialIndex, stream);
					}
					virtual ev_bool saveAllNodes(_in const EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex* hSpatialIndex, _inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_saveAllNodes_ev_bool_ISpatialIndex_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_saveAllNodes_ev_bool_ISpatialIndex_CDataStream_Callback(hSpatialIndex, &stream);
							return returnValue;
						}
						else
							return this->IStorageManager::saveAllNodes(hSpatialIndex, stream);
					}
					virtual EarthView::World::Spatial2D::SpatialIndex::DRIVERTYPE getDriverType() const
					{
						if(m_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_getDriverType_DRIVERTYPE_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial2D::SpatialIndex::DRIVERTYPE returnValue = (EarthView::World::Spatial2D::SpatialIndex::DRIVERTYPE)m_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_getDriverType_DRIVERTYPE_Callback();
							return returnValue;
						}
						else
							return this->IStorageManager::getDriverType();
					}
				};
				REGISTER_FACTORY_CLASS(IStorageManagerProxy);
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*  _stdcall EarthView_World_Spatial2D_SpatialIndex_IStorageManager_load_ISpatialIndex_ev_char(void *pObjectXXXX, _in const ev_char* pFullpath )
				{
					const EarthView::World::Spatial2D::SpatialIndex::IStorageManager* ptrNativeObject = (EarthView::World::Spatial2D::SpatialIndex::IStorageManager*) pObjectXXXX;
					if (dynamic_cast<IStorageManagerProxy*>((EarthView::World::Spatial2D::SpatialIndex::IStorageManager*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::SpatialIndex::IStorageManager::load(pFullpath);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex* objXXXX = ptrNativeObject->load(pFullpath);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_load_ISpatialIndex_ev_char( void *pObjectXXXX, EarthView_World_Spatial2D_SpatialIndex_IStorageManager_load_ISpatialIndex_ev_char_Callback* pCallback )
				{
					IStorageManagerProxy* ptr = dynamic_cast<IStorageManagerProxy*>((EarthView::World::Spatial2D::SpatialIndex::IStorageManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_load_ISpatialIndex_ev_char(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*  _stdcall EarthView_World_Spatial2D_SpatialIndex_IStorageManager_load_ISpatialIndex_ev_char_NoVirtual(void *pObjectXXXX, _in const ev_char* pFullpath )
				{
					const EarthView::World::Spatial2D::SpatialIndex::IStorageManager* ptrNativeObject = (EarthView::World::Spatial2D::SpatialIndex::IStorageManager*) pObjectXXXX;
					EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::SpatialIndex::IStorageManager::load(pFullpath);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_SpatialIndex_IStorageManager_save_ev_bool_ISpatialIndex_ev_char(void *pObjectXXXX, _in const EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex* hSpatialIndex, _in const ev_char* pFilepath )
				{
					const EarthView::World::Spatial2D::SpatialIndex::IStorageManager* ptrNativeObject = (EarthView::World::Spatial2D::SpatialIndex::IStorageManager*) pObjectXXXX;
					if (dynamic_cast<IStorageManagerProxy*>((EarthView::World::Spatial2D::SpatialIndex::IStorageManager*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::SpatialIndex::IStorageManager::save(hSpatialIndex, pFilepath);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->save(hSpatialIndex, pFilepath);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_save_ev_bool_ISpatialIndex_ev_char( void *pObjectXXXX, EarthView_World_Spatial2D_SpatialIndex_IStorageManager_save_ev_bool_ISpatialIndex_ev_char_Callback* pCallback )
				{
					IStorageManagerProxy* ptr = dynamic_cast<IStorageManagerProxy*>((EarthView::World::Spatial2D::SpatialIndex::IStorageManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_save_ev_bool_ISpatialIndex_ev_char(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_SpatialIndex_IStorageManager_save_ev_bool_ISpatialIndex_ev_char_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex* hSpatialIndex, _in const ev_char* pFilepath )
				{
					const EarthView::World::Spatial2D::SpatialIndex::IStorageManager* ptrNativeObject = (EarthView::World::Spatial2D::SpatialIndex::IStorageManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::SpatialIndex::IStorageManager::save(hSpatialIndex, pFilepath);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*  _stdcall EarthView_World_Spatial2D_SpatialIndex_IStorageManager_load_ISpatialIndex_CDataStream(void *pObjectXXXX, _in void* stream )
				{
					const EarthView::World::Spatial2D::SpatialIndex::IStorageManager* ptrNativeObject = (EarthView::World::Spatial2D::SpatialIndex::IStorageManager*) pObjectXXXX;
					if (dynamic_cast<IStorageManagerProxy*>((EarthView::World::Spatial2D::SpatialIndex::IStorageManager*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::SpatialIndex::IStorageManager::load(*(EarthView::World::Core::CDataStream*)stream);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex* objXXXX = ptrNativeObject->load(*(EarthView::World::Core::CDataStream*)stream);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_load_ISpatialIndex_CDataStream( void *pObjectXXXX, EarthView_World_Spatial2D_SpatialIndex_IStorageManager_load_ISpatialIndex_CDataStream_Callback* pCallback )
				{
					IStorageManagerProxy* ptr = dynamic_cast<IStorageManagerProxy*>((EarthView::World::Spatial2D::SpatialIndex::IStorageManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_load_ISpatialIndex_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*  _stdcall EarthView_World_Spatial2D_SpatialIndex_IStorageManager_load_ISpatialIndex_CDataStream_NoVirtual(void *pObjectXXXX, _in void* stream )
				{
					const EarthView::World::Spatial2D::SpatialIndex::IStorageManager* ptrNativeObject = (EarthView::World::Spatial2D::SpatialIndex::IStorageManager*) pObjectXXXX;
					EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::SpatialIndex::IStorageManager::load(*(EarthView::World::Core::CDataStream*)stream);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_SpatialIndex_IStorageManager_save_ev_bool_ISpatialIndex_CDataStream(void *pObjectXXXX, _in const EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex* hSpatialIndex, _inout void* stream )
				{
					const EarthView::World::Spatial2D::SpatialIndex::IStorageManager* ptrNativeObject = (EarthView::World::Spatial2D::SpatialIndex::IStorageManager*) pObjectXXXX;
					if (dynamic_cast<IStorageManagerProxy*>((EarthView::World::Spatial2D::SpatialIndex::IStorageManager*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::SpatialIndex::IStorageManager::save(hSpatialIndex, *(EarthView::World::Core::CDataStream*)stream);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->save(hSpatialIndex, *(EarthView::World::Core::CDataStream*)stream);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_save_ev_bool_ISpatialIndex_CDataStream( void *pObjectXXXX, EarthView_World_Spatial2D_SpatialIndex_IStorageManager_save_ev_bool_ISpatialIndex_CDataStream_Callback* pCallback )
				{
					IStorageManagerProxy* ptr = dynamic_cast<IStorageManagerProxy*>((EarthView::World::Spatial2D::SpatialIndex::IStorageManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_save_ev_bool_ISpatialIndex_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_SpatialIndex_IStorageManager_save_ev_bool_ISpatialIndex_CDataStream_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex* hSpatialIndex, _inout void* stream )
				{
					const EarthView::World::Spatial2D::SpatialIndex::IStorageManager* ptrNativeObject = (EarthView::World::Spatial2D::SpatialIndex::IStorageManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::SpatialIndex::IStorageManager::save(hSpatialIndex, *(EarthView::World::Core::CDataStream*)stream);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_SpatialIndex_IStorageManager_saveAllNodes_ev_bool_ISpatialIndex_CDataStream(void *pObjectXXXX, _in const EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex* hSpatialIndex, _inout void* stream )
				{
					EarthView::World::Spatial2D::SpatialIndex::IStorageManager* ptrNativeObject = (EarthView::World::Spatial2D::SpatialIndex::IStorageManager*) pObjectXXXX;
					if (dynamic_cast<IStorageManagerProxy*>((EarthView::World::Spatial2D::SpatialIndex::IStorageManager*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::SpatialIndex::IStorageManager::saveAllNodes(hSpatialIndex, *(EarthView::World::Core::CDataStream*)stream);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->saveAllNodes(hSpatialIndex, *(EarthView::World::Core::CDataStream*)stream);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_saveAllNodes_ev_bool_ISpatialIndex_CDataStream( void *pObjectXXXX, EarthView_World_Spatial2D_SpatialIndex_IStorageManager_saveAllNodes_ev_bool_ISpatialIndex_CDataStream_Callback* pCallback )
				{
					IStorageManagerProxy* ptr = dynamic_cast<IStorageManagerProxy*>((EarthView::World::Spatial2D::SpatialIndex::IStorageManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_saveAllNodes_ev_bool_ISpatialIndex_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_SpatialIndex_IStorageManager_saveAllNodes_ev_bool_ISpatialIndex_CDataStream_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex* hSpatialIndex, _inout void* stream )
				{
					EarthView::World::Spatial2D::SpatialIndex::IStorageManager* ptrNativeObject = (EarthView::World::Spatial2D::SpatialIndex::IStorageManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::SpatialIndex::IStorageManager::saveAllNodes(hSpatialIndex, *(EarthView::World::Core::CDataStream*)stream);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_SpatialIndex_IStorageManager_getDriverType_DRIVERTYPE(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::SpatialIndex::IStorageManager* ptrNativeObject = (EarthView::World::Spatial2D::SpatialIndex::IStorageManager*) pObjectXXXX;
					if (dynamic_cast<IStorageManagerProxy*>((EarthView::World::Spatial2D::SpatialIndex::IStorageManager*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial2D::SpatialIndex::DRIVERTYPE objXXXX = ptrNativeObject->EarthView::World::Spatial2D::SpatialIndex::IStorageManager::getDriverType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial2D::SpatialIndex::DRIVERTYPE objXXXX = ptrNativeObject->getDriverType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_getDriverType_DRIVERTYPE( void *pObjectXXXX, EarthView_World_Spatial2D_SpatialIndex_IStorageManager_getDriverType_DRIVERTYPE_Callback* pCallback )
				{
					IStorageManagerProxy* ptr = dynamic_cast<IStorageManagerProxy*>((EarthView::World::Spatial2D::SpatialIndex::IStorageManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_getDriverType_DRIVERTYPE(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_SpatialIndex_IStorageManager_getDriverType_DRIVERTYPE_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::SpatialIndex::IStorageManager* ptrNativeObject = (EarthView::World::Spatial2D::SpatialIndex::IStorageManager*) pObjectXXXX;
					EarthView::World::Spatial2D::SpatialIndex::DRIVERTYPE objXXXX = ptrNativeObject->EarthView::World::Spatial2D::SpatialIndex::IStorageManager::getDriverType();
					return (int)objXXXX;
				}
			}
		}
	}
}
