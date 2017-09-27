/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "industryengine/militaryengine/radarlibrary/paradarobject.h"
namespace EarthView
{
	namespace IndustryEngine
	{
		namespace MilitaryEngine
		{
			namespace RadarLibrary
			{
				typedef EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_clone_CRadarObject_EVString_Callback)(_in char*& name);
				typedef EarthView::World::Graphic::CSceneNode*  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_appendToNode_CSceneNode_Callback)();
				typedef void  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_appendToNodeWithNorthAngle_void_Real_Real_Real_CVector3_CDegree_Callback)(_in const Real& lat, _in const Real& lon, _in const Real& alt, _in const void* localScale, _in const void* northAngle);
				typedef EarthView::World::Graphic::CSceneNode*  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getParentNode_CSceneNode_Callback)();
				typedef void  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_detachFromParentNode_void_Callback)();
				typedef bool  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_isIntersected_bool_CRadarObject_Callback)(_in EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* another);
				typedef bool  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_isIntersected_bool_CCurve_Callback)(_in EarthView::World::Spatial::Geometry::CCurve* curve);
				typedef int  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_containsVertex_EVPointWithinType_CPoint_Callback)(_in const void* point);
				typedef void  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_build_void_Callback)();
				typedef void  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setVisible_void_ev_bool_Callback)(_in const ev_bool& value);
				typedef ev_bool  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getVisible_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setEnvelopSolidVisible_void_ev_bool_Callback)(_in const ev_bool& value);
				typedef ev_bool  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getEnvelopSolidVisible_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setEnvelopFrameVisible_void_ev_bool_Callback)(_in const ev_bool& value);
				typedef ev_bool  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getEnvelopFrameVisible_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setScannerSolidVisible_void_ev_bool_Callback)(_in const ev_bool& value);
				typedef ev_bool  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getScannerSolidVisible_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setScannerFrameVisible_void_ev_bool_Callback)(_in const ev_bool& value);
				typedef ev_bool  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getScannerFrameVisible_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_fromFile_void_EVString_Callback)(_in char*& fileName);
				typedef void  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_toFile_void_EVString_Callback)(_in char*& fileName);
				typedef ev_bool  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getRadarAlertResult_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setEnvelopSolidMaterial_void_EVString_EVString_Callback)(_in char*& materialName, _in char*& groupName);
				typedef void  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setEnvelopFrameMaterial_void_EVString_EVString_Callback)(_in char*& materialName, _in char*& groupName);
				typedef void  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setScannerSolidMaterial_void_EVString_EVString_Callback)(_in char*& materialName, _in char*& groupName);
				typedef void  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setScannerFrameMaterial_void_EVString_EVString_Callback)(_in char*& materialName, _in char*& groupName);
				typedef char*  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getRadarMaterialResourceGroup_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getEnvelopSolidMaterial_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getEnvelopFrameMaterial_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getScannerSolidMaterial_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getScannerFrameMaterial_EVString_Callback)();
				typedef EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_computeTerrainShade_CRadarObject_EVString_EVString_Callback)(_in char*& name, _in char*& nodeName);
				class CPARadarObjectProxy : public EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject
				{
				private:
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_clone_CRadarObject_EVString_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_clone_CRadarObject_EVString_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_appendToNode_CSceneNode_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_appendToNode_CSceneNode_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_appendToNodeWithNorthAngle_void_Real_Real_Real_CVector3_CDegree_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_appendToNodeWithNorthAngle_void_Real_Real_Real_CVector3_CDegree_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getParentNode_CSceneNode_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getParentNode_CSceneNode_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_detachFromParentNode_void_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_detachFromParentNode_void_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_isIntersected_bool_CRadarObject_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_isIntersected_bool_CRadarObject_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_isIntersected_bool_CCurve_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_isIntersected_bool_CCurve_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_containsVertex_EVPointWithinType_CPoint_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_containsVertex_EVPointWithinType_CPoint_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_build_void_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_build_void_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setVisible_void_ev_bool_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setVisible_void_ev_bool_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getVisible_ev_bool_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getVisible_ev_bool_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setEnvelopSolidVisible_void_ev_bool_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setEnvelopSolidVisible_void_ev_bool_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getEnvelopSolidVisible_ev_bool_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getEnvelopSolidVisible_ev_bool_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setEnvelopFrameVisible_void_ev_bool_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setEnvelopFrameVisible_void_ev_bool_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getEnvelopFrameVisible_ev_bool_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getEnvelopFrameVisible_ev_bool_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setScannerSolidVisible_void_ev_bool_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setScannerSolidVisible_void_ev_bool_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getScannerSolidVisible_ev_bool_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getScannerSolidVisible_ev_bool_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setScannerFrameVisible_void_ev_bool_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setScannerFrameVisible_void_ev_bool_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getScannerFrameVisible_ev_bool_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getScannerFrameVisible_ev_bool_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_fromFile_void_EVString_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_fromFile_void_EVString_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_toFile_void_EVString_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_toFile_void_EVString_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getRadarAlertResult_ev_bool_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getRadarAlertResult_ev_bool_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setEnvelopSolidMaterial_void_EVString_EVString_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setEnvelopSolidMaterial_void_EVString_EVString_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setEnvelopFrameMaterial_void_EVString_EVString_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setEnvelopFrameMaterial_void_EVString_EVString_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setScannerSolidMaterial_void_EVString_EVString_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setScannerSolidMaterial_void_EVString_EVString_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setScannerFrameMaterial_void_EVString_EVString_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setScannerFrameMaterial_void_EVString_EVString_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getRadarMaterialResourceGroup_EVString_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getRadarMaterialResourceGroup_EVString_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getEnvelopSolidMaterial_EVString_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getEnvelopSolidMaterial_EVString_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getEnvelopFrameMaterial_EVString_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getEnvelopFrameMaterial_EVString_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getScannerSolidMaterial_EVString_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getScannerSolidMaterial_EVString_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getScannerFrameMaterial_EVString_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getScannerFrameMaterial_EVString_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_computeTerrainShade_CRadarObject_EVString_EVString_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_computeTerrainShade_CRadarObject_EVString_EVString_Callback;
				public:
					CPARadarObjectProxy(EarthView::World::Core::CNameValuePairList *pList) : CPARadarObject(pList)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_clone_CRadarObject_EVString_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_appendToNode_CSceneNode_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_appendToNodeWithNorthAngle_void_Real_Real_Real_CVector3_CDegree_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getParentNode_CSceneNode_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_detachFromParentNode_void_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_isIntersected_bool_CRadarObject_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_isIntersected_bool_CCurve_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_containsVertex_EVPointWithinType_CPoint_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_build_void_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setVisible_void_ev_bool_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getVisible_ev_bool_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setEnvelopSolidVisible_void_ev_bool_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getEnvelopSolidVisible_ev_bool_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setEnvelopFrameVisible_void_ev_bool_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getEnvelopFrameVisible_ev_bool_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setScannerSolidVisible_void_ev_bool_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getScannerSolidVisible_ev_bool_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setScannerFrameVisible_void_ev_bool_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getScannerFrameVisible_ev_bool_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_fromFile_void_EVString_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_toFile_void_EVString_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getRadarAlertResult_ev_bool_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setEnvelopSolidMaterial_void_EVString_EVString_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setEnvelopFrameMaterial_void_EVString_EVString_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setScannerSolidMaterial_void_EVString_EVString_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setScannerFrameMaterial_void_EVString_EVString_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getRadarMaterialResourceGroup_EVString_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getEnvelopSolidMaterial_EVString_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getEnvelopFrameMaterial_EVString_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getScannerSolidMaterial_EVString_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getScannerFrameMaterial_EVString_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_computeTerrainShade_CRadarObject_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_clone_CRadarObject_EVString(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_clone_CRadarObject_EVString_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_clone_CRadarObject_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_appendToNode_CSceneNode(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_appendToNode_CSceneNode_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_appendToNode_CSceneNode_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_appendToNodeWithNorthAngle_void_Real_Real_Real_CVector3_CDegree(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_appendToNodeWithNorthAngle_void_Real_Real_Real_CVector3_CDegree_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_appendToNodeWithNorthAngle_void_Real_Real_Real_CVector3_CDegree_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getParentNode_CSceneNode(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getParentNode_CSceneNode_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getParentNode_CSceneNode_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_detachFromParentNode_void(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_detachFromParentNode_void_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_detachFromParentNode_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_isIntersected_bool_CRadarObject(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_isIntersected_bool_CRadarObject_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_isIntersected_bool_CRadarObject_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_isIntersected_bool_CCurve(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_isIntersected_bool_CCurve_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_isIntersected_bool_CCurve_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_containsVertex_EVPointWithinType_CPoint(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_containsVertex_EVPointWithinType_CPoint_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_containsVertex_EVPointWithinType_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_build_void(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_build_void_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_build_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setVisible_void_ev_bool(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setVisible_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setVisible_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getVisible_ev_bool(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getVisible_ev_bool_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getVisible_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setEnvelopSolidVisible_void_ev_bool(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setEnvelopSolidVisible_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setEnvelopSolidVisible_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getEnvelopSolidVisible_ev_bool(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getEnvelopSolidVisible_ev_bool_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getEnvelopSolidVisible_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setEnvelopFrameVisible_void_ev_bool(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setEnvelopFrameVisible_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setEnvelopFrameVisible_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getEnvelopFrameVisible_ev_bool(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getEnvelopFrameVisible_ev_bool_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getEnvelopFrameVisible_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setScannerSolidVisible_void_ev_bool(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setScannerSolidVisible_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setScannerSolidVisible_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getScannerSolidVisible_ev_bool(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getScannerSolidVisible_ev_bool_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getScannerSolidVisible_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setScannerFrameVisible_void_ev_bool(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setScannerFrameVisible_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setScannerFrameVisible_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getScannerFrameVisible_ev_bool(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getScannerFrameVisible_ev_bool_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getScannerFrameVisible_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_fromFile_void_EVString(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_fromFile_void_EVString_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_fromFile_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_toFile_void_EVString(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_toFile_void_EVString_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_toFile_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getRadarAlertResult_ev_bool(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getRadarAlertResult_ev_bool_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getRadarAlertResult_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setEnvelopSolidMaterial_void_EVString_EVString(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setEnvelopSolidMaterial_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setEnvelopSolidMaterial_void_EVString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setEnvelopFrameMaterial_void_EVString_EVString(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setEnvelopFrameMaterial_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setEnvelopFrameMaterial_void_EVString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setScannerSolidMaterial_void_EVString_EVString(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setScannerSolidMaterial_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setScannerSolidMaterial_void_EVString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setScannerFrameMaterial_void_EVString_EVString(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setScannerFrameMaterial_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setScannerFrameMaterial_void_EVString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getRadarMaterialResourceGroup_EVString(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getRadarMaterialResourceGroup_EVString_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getRadarMaterialResourceGroup_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getEnvelopSolidMaterial_EVString(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getEnvelopSolidMaterial_EVString_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getEnvelopSolidMaterial_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getEnvelopFrameMaterial_EVString(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getEnvelopFrameMaterial_EVString_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getEnvelopFrameMaterial_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getScannerSolidMaterial_EVString(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getScannerSolidMaterial_EVString_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getScannerSolidMaterial_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getScannerFrameMaterial_EVString(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getScannerFrameMaterial_EVString_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getScannerFrameMaterial_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_computeTerrainShade_CRadarObject_EVString_EVString(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_computeTerrainShade_CRadarObject_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_computeTerrainShade_CRadarObject_EVString_EVString_Callback = pCallback;
					}
					virtual EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* clone(_in const EVString& name)
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_clone_CRadarObject_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_clone_CRadarObject_EVString_Callback(name_Char);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CPARadarObject::clone(name);
					}
					virtual ev_bool getRadarAlertResult()
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getRadarAlertResult_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getRadarAlertResult_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CPARadarObject::getRadarAlertResult();
					}
					virtual EarthView::World::Graphic::CSceneNode* appendToNode()
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_appendToNode_CSceneNode_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CSceneNode* returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_appendToNode_CSceneNode_Callback();
							return returnValue;
						}
						else
							return this->CPARadarObject::appendToNode();
					}
					virtual void appendToNodeWithNorthAngle(_in const Real& lat, _in const Real& lon, _in const Real& alt, _in const EarthView::World::Spatial::Math::CVector3& localScale, _in const EarthView::World::Spatial::Math::CDegree& northAngle)
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_appendToNodeWithNorthAngle_void_Real_Real_Real_CVector3_CDegree_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_appendToNodeWithNorthAngle_void_Real_Real_Real_CVector3_CDegree_Callback(lat, lon, alt, &localScale, &northAngle);
						}
						else
							return this->CPARadarObject::appendToNodeWithNorthAngle(lat, lon, alt, localScale, northAngle);
					}
					virtual EarthView::World::Graphic::CSceneNode* getParentNode()
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getParentNode_CSceneNode_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CSceneNode* returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getParentNode_CSceneNode_Callback();
							return returnValue;
						}
						else
							return this->CPARadarObject::getParentNode();
					}
					virtual void detachFromParentNode()
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_detachFromParentNode_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_detachFromParentNode_void_Callback();
						}
						else
							return this->CPARadarObject::detachFromParentNode();
					}
					virtual bool isIntersected(_in EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* another)
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_isIntersected_bool_CRadarObject_Callback != NULL && this->isCustomExtend())
						{
							bool returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_isIntersected_bool_CRadarObject_Callback(another);
							return returnValue;
						}
						else
							return this->CPARadarObject::isIntersected(another);
					}
					virtual bool isIntersected(_in EarthView::World::Spatial::Geometry::CCurve* curve)
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_isIntersected_bool_CCurve_Callback != NULL && this->isCustomExtend())
						{
							bool returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_isIntersected_bool_CCurve_Callback(curve);
							return returnValue;
						}
						else
							return this->CPARadarObject::isIntersected(curve);
					}
					virtual EarthView::World::Geometry3D::EVPointWithinType containsVertex(_in const EarthView::World::Spatial::Geometry::CPoint& point)
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_containsVertex_EVPointWithinType_CPoint_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Geometry3D::EVPointWithinType returnValue = (EarthView::World::Geometry3D::EVPointWithinType)m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_containsVertex_EVPointWithinType_CPoint_Callback(&point);
							return returnValue;
						}
						else
							return this->CPARadarObject::containsVertex(point);
					}
					virtual void build()
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_build_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_build_void_Callback();
						}
						else
							return this->CPARadarObject::build();
					}
					virtual void setVisible(_in const ev_bool& value)
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setVisible_void_ev_bool_Callback(value);
						}
						else
							return this->CPARadarObject::setVisible(value);
					}
					virtual ev_bool getVisible() const
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getVisible_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getVisible_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CPARadarObject::getVisible();
					}
					virtual void setEnvelopSolidVisible(_in const ev_bool& value)
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setEnvelopSolidVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setEnvelopSolidVisible_void_ev_bool_Callback(value);
						}
						else
							return this->CPARadarObject::setEnvelopSolidVisible(value);
					}
					virtual ev_bool getEnvelopSolidVisible() const
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getEnvelopSolidVisible_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getEnvelopSolidVisible_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CPARadarObject::getEnvelopSolidVisible();
					}
					virtual void setEnvelopFrameVisible(_in const ev_bool& value)
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setEnvelopFrameVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setEnvelopFrameVisible_void_ev_bool_Callback(value);
						}
						else
							return this->CPARadarObject::setEnvelopFrameVisible(value);
					}
					virtual ev_bool getEnvelopFrameVisible() const
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getEnvelopFrameVisible_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getEnvelopFrameVisible_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CPARadarObject::getEnvelopFrameVisible();
					}
					virtual void setScannerSolidVisible(_in const ev_bool& value)
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setScannerSolidVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setScannerSolidVisible_void_ev_bool_Callback(value);
						}
						else
							return this->CPARadarObject::setScannerSolidVisible(value);
					}
					virtual ev_bool getScannerSolidVisible() const
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getScannerSolidVisible_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getScannerSolidVisible_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CPARadarObject::getScannerSolidVisible();
					}
					virtual void setScannerFrameVisible(_in const ev_bool& value)
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setScannerFrameVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setScannerFrameVisible_void_ev_bool_Callback(value);
						}
						else
							return this->CPARadarObject::setScannerFrameVisible(value);
					}
					virtual ev_bool getScannerFrameVisible() const
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getScannerFrameVisible_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getScannerFrameVisible_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CPARadarObject::getScannerFrameVisible();
					}
					virtual void fromFile(_in const EVString& fileName)
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_fromFile_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* fileName_Char = fileName.makeBuffer();
							m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_fromFile_void_EVString_Callback(fileName_Char);
						}
						else
							return this->CPARadarObject::fromFile(fileName);
					}
					virtual void toFile(_in const EVString& fileName)
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_toFile_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* fileName_Char = fileName.makeBuffer();
							m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_toFile_void_EVString_Callback(fileName_Char);
						}
						else
							return this->CPARadarObject::toFile(fileName);
					}
					virtual void setEnvelopSolidMaterial(_in const EVString& materialName, _in const EVString& groupName)
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setEnvelopSolidMaterial_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* materialName_Char = materialName.makeBuffer();
							char* groupName_Char = groupName.makeBuffer();
							m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setEnvelopSolidMaterial_void_EVString_EVString_Callback(materialName_Char, groupName_Char);
						}
						else
							return this->CPARadarObject::setEnvelopSolidMaterial(materialName, groupName);
					}
					virtual void setEnvelopFrameMaterial(_in const EVString& materialName, _in const EVString& groupName)
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setEnvelopFrameMaterial_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* materialName_Char = materialName.makeBuffer();
							char* groupName_Char = groupName.makeBuffer();
							m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setEnvelopFrameMaterial_void_EVString_EVString_Callback(materialName_Char, groupName_Char);
						}
						else
							return this->CPARadarObject::setEnvelopFrameMaterial(materialName, groupName);
					}
					virtual void setScannerSolidMaterial(_in const EVString& materialName, _in const EVString& groupName)
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setScannerSolidMaterial_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* materialName_Char = materialName.makeBuffer();
							char* groupName_Char = groupName.makeBuffer();
							m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setScannerSolidMaterial_void_EVString_EVString_Callback(materialName_Char, groupName_Char);
						}
						else
							return this->CPARadarObject::setScannerSolidMaterial(materialName, groupName);
					}
					virtual void setScannerFrameMaterial(_in const EVString& materialName, _in const EVString& groupName)
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setScannerFrameMaterial_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* materialName_Char = materialName.makeBuffer();
							char* groupName_Char = groupName.makeBuffer();
							m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setScannerFrameMaterial_void_EVString_EVString_Callback(materialName_Char, groupName_Char);
						}
						else
							return this->CPARadarObject::setScannerFrameMaterial(materialName, groupName);
					}
					virtual EVString getRadarMaterialResourceGroup() const
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getRadarMaterialResourceGroup_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getRadarMaterialResourceGroup_EVString_Callback();
							return returnValue;
						}
						else
							return this->CPARadarObject::getRadarMaterialResourceGroup();
					}
					virtual EVString getEnvelopSolidMaterial() const
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getEnvelopSolidMaterial_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getEnvelopSolidMaterial_EVString_Callback();
							return returnValue;
						}
						else
							return this->CPARadarObject::getEnvelopSolidMaterial();
					}
					virtual EVString getEnvelopFrameMaterial() const
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getEnvelopFrameMaterial_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getEnvelopFrameMaterial_EVString_Callback();
							return returnValue;
						}
						else
							return this->CPARadarObject::getEnvelopFrameMaterial();
					}
					virtual EVString getScannerSolidMaterial() const
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getScannerSolidMaterial_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getScannerSolidMaterial_EVString_Callback();
							return returnValue;
						}
						else
							return this->CPARadarObject::getScannerSolidMaterial();
					}
					virtual EVString getScannerFrameMaterial() const
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getScannerFrameMaterial_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getScannerFrameMaterial_EVString_Callback();
							return returnValue;
						}
						else
							return this->CPARadarObject::getScannerFrameMaterial();
					}
					virtual EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* computeTerrainShade(_in const EVString& name, _in const EVString& nodeName)
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_computeTerrainShade_CRadarObject_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							char* nodeName_Char = nodeName.makeBuffer();
							EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_computeTerrainShade_CRadarObject_EVString_EVString_Callback(name_Char, nodeName_Char);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CPARadarObject::computeTerrainShade(name, nodeName);
					}
				};
				REGISTER_FACTORY_CLASS(CPARadarObjectProxy);
				extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject::CCell*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_CCell_clone_CCell(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject::CCell* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject::CCell*) pObjectXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject::CCell* objXXXX = ptrNativeObject->clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_CCell_getLifeTime_ev_real64(void *pObjectXXXX )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject::CCell* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject::CCell*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getLifeTime();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_CCell_setLifeTime_void_ev_real64(void *pObjectXXXX, _in const ev_real64& time )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject::CCell* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject::CCell*) pObjectXXXX;
					ptrNativeObject->setLifeTime(time);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_CCell_getQuaternion_CQuaternion(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject::CCell* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject::CCell*) pObjectXXXX;
					EarthView::World::Spatial::Math::CQuaternion& objXXXX = ptrNativeObject->getQuaternion();
					EarthView::World::Spatial::Math::CQuaternion *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_CCell_getCenter_CVector3(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject::CCell* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject::CCell*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->getCenter();
					EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_CCell_getToNextCellAngle_CDegree(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject::CCell* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject::CCell*) pObjectXXXX;
					EarthView::World::Spatial::Math::CDegree& objXXXX = ptrNativeObject->getToNextCellAngle();
					EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_CCell_setToNextCellAngle_void_CDegree(void *pObjectXXXX, _in const void* angle )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject::CCell* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject::CCell*) pObjectXXXX;
					ptrNativeObject->setToNextCellAngle(*(EarthView::World::Spatial::Math::CDegree*)angle);
				}
				extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject::CCell*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_CCell_getNextCell_CCell(void *pObjectXXXX )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject::CCell* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject::CCell*) pObjectXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject::CCell* objXXXX = ptrNativeObject->getNextCell();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_CCell_setNextCell_void_CCell(void *pObjectXXXX, _in EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject::CCell* ref_cell )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject::CCell* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject::CCell*) pObjectXXXX;
					ptrNativeObject->setNextCell(ref_cell);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_CCell_initialize_void(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject::CCell* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject::CCell*) pObjectXXXX;
					ptrNativeObject->initialize();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_CCell_calculateSpanAngle_CDegree_CCell(void *pObjectXXXX, _in EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject::CCell* cell )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject::CCell* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject::CCell*) pObjectXXXX;
					EarthView::World::Spatial::Math::CDegree objXXXX = ptrNativeObject->calculateSpanAngle(cell);
					EarthView::World::Spatial::Math::CDegree *pXXXX = new EarthView::World::Spatial::Math::CDegree(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_CCell_calculateQuaternion_CQuaternion(void *pObjectXXXX )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject::CCell* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject::CCell*) pObjectXXXX;
					EarthView::World::Spatial::Math::CQuaternion objXXXX = ptrNativeObject->calculateQuaternion();
					EarthView::World::Spatial::Math::CQuaternion *pXXXX = new EarthView::World::Spatial::Math::CQuaternion(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_clone_CRadarObject_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject*) pObjectXXXX;
					if (dynamic_cast<CPARadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject*)ptrNativeObject) != NULL)
					{
						EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject::clone(name1);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* objXXXX = ptrNativeObject->clone(name1);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_clone_CRadarObject_EVString( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_clone_CRadarObject_EVString_Callback* pCallback )
				{
					CPARadarObjectProxy* ptr = dynamic_cast<CPARadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_clone_CRadarObject_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_clone_CRadarObject_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject*) pObjectXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject::clone(name1);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getRadarAlertResult_ev_bool(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject*) pObjectXXXX;
					if (dynamic_cast<CPARadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject::getRadarAlertResult();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getRadarAlertResult();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getRadarAlertResult_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getRadarAlertResult_ev_bool_Callback* pCallback )
				{
					CPARadarObjectProxy* ptr = dynamic_cast<CPARadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getRadarAlertResult_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getRadarAlertResult_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject::getRadarAlertResult();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject::CCell*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getRadarTrackCell_CCell(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject*) pObjectXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject::CCell* objXXXX = ptrNativeObject->getRadarTrackCell();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_appendToNode_CSceneNode( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_appendToNode_CSceneNode_Callback* pCallback )
				{
					CPARadarObjectProxy* ptr = dynamic_cast<CPARadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_appendToNode_CSceneNode(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_appendToNodeWithNorthAngle_void_Real_Real_Real_CVector3_CDegree( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_appendToNodeWithNorthAngle_void_Real_Real_Real_CVector3_CDegree_Callback* pCallback )
				{
					CPARadarObjectProxy* ptr = dynamic_cast<CPARadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_appendToNodeWithNorthAngle_void_Real_Real_Real_CVector3_CDegree(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getParentNode_CSceneNode( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getParentNode_CSceneNode_Callback* pCallback )
				{
					CPARadarObjectProxy* ptr = dynamic_cast<CPARadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getParentNode_CSceneNode(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_detachFromParentNode_void( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_detachFromParentNode_void_Callback* pCallback )
				{
					CPARadarObjectProxy* ptr = dynamic_cast<CPARadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_detachFromParentNode_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_isIntersected_bool_CRadarObject( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_isIntersected_bool_CRadarObject_Callback* pCallback )
				{
					CPARadarObjectProxy* ptr = dynamic_cast<CPARadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_isIntersected_bool_CRadarObject(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_isIntersected_bool_CCurve( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_isIntersected_bool_CCurve_Callback* pCallback )
				{
					CPARadarObjectProxy* ptr = dynamic_cast<CPARadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_isIntersected_bool_CCurve(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_containsVertex_EVPointWithinType_CPoint( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_containsVertex_EVPointWithinType_CPoint_Callback* pCallback )
				{
					CPARadarObjectProxy* ptr = dynamic_cast<CPARadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_containsVertex_EVPointWithinType_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_build_void( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_build_void_Callback* pCallback )
				{
					CPARadarObjectProxy* ptr = dynamic_cast<CPARadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_build_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setVisible_void_ev_bool_Callback* pCallback )
				{
					CPARadarObjectProxy* ptr = dynamic_cast<CPARadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setVisible_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getVisible_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getVisible_ev_bool_Callback* pCallback )
				{
					CPARadarObjectProxy* ptr = dynamic_cast<CPARadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getVisible_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setEnvelopSolidVisible_void_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setEnvelopSolidVisible_void_ev_bool_Callback* pCallback )
				{
					CPARadarObjectProxy* ptr = dynamic_cast<CPARadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setEnvelopSolidVisible_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getEnvelopSolidVisible_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getEnvelopSolidVisible_ev_bool_Callback* pCallback )
				{
					CPARadarObjectProxy* ptr = dynamic_cast<CPARadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getEnvelopSolidVisible_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setEnvelopFrameVisible_void_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setEnvelopFrameVisible_void_ev_bool_Callback* pCallback )
				{
					CPARadarObjectProxy* ptr = dynamic_cast<CPARadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setEnvelopFrameVisible_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getEnvelopFrameVisible_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getEnvelopFrameVisible_ev_bool_Callback* pCallback )
				{
					CPARadarObjectProxy* ptr = dynamic_cast<CPARadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getEnvelopFrameVisible_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setScannerSolidVisible_void_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setScannerSolidVisible_void_ev_bool_Callback* pCallback )
				{
					CPARadarObjectProxy* ptr = dynamic_cast<CPARadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setScannerSolidVisible_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getScannerSolidVisible_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getScannerSolidVisible_ev_bool_Callback* pCallback )
				{
					CPARadarObjectProxy* ptr = dynamic_cast<CPARadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getScannerSolidVisible_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setScannerFrameVisible_void_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setScannerFrameVisible_void_ev_bool_Callback* pCallback )
				{
					CPARadarObjectProxy* ptr = dynamic_cast<CPARadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setScannerFrameVisible_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getScannerFrameVisible_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getScannerFrameVisible_ev_bool_Callback* pCallback )
				{
					CPARadarObjectProxy* ptr = dynamic_cast<CPARadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getScannerFrameVisible_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_fromFile_void_EVString( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_fromFile_void_EVString_Callback* pCallback )
				{
					CPARadarObjectProxy* ptr = dynamic_cast<CPARadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_fromFile_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_toFile_void_EVString( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_toFile_void_EVString_Callback* pCallback )
				{
					CPARadarObjectProxy* ptr = dynamic_cast<CPARadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_toFile_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setEnvelopSolidMaterial_void_EVString_EVString( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setEnvelopSolidMaterial_void_EVString_EVString_Callback* pCallback )
				{
					CPARadarObjectProxy* ptr = dynamic_cast<CPARadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setEnvelopSolidMaterial_void_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setEnvelopFrameMaterial_void_EVString_EVString( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setEnvelopFrameMaterial_void_EVString_EVString_Callback* pCallback )
				{
					CPARadarObjectProxy* ptr = dynamic_cast<CPARadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setEnvelopFrameMaterial_void_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setScannerSolidMaterial_void_EVString_EVString( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setScannerSolidMaterial_void_EVString_EVString_Callback* pCallback )
				{
					CPARadarObjectProxy* ptr = dynamic_cast<CPARadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setScannerSolidMaterial_void_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setScannerFrameMaterial_void_EVString_EVString( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setScannerFrameMaterial_void_EVString_EVString_Callback* pCallback )
				{
					CPARadarObjectProxy* ptr = dynamic_cast<CPARadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_setScannerFrameMaterial_void_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getRadarMaterialResourceGroup_EVString( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getRadarMaterialResourceGroup_EVString_Callback* pCallback )
				{
					CPARadarObjectProxy* ptr = dynamic_cast<CPARadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getRadarMaterialResourceGroup_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getEnvelopSolidMaterial_EVString( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getEnvelopSolidMaterial_EVString_Callback* pCallback )
				{
					CPARadarObjectProxy* ptr = dynamic_cast<CPARadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getEnvelopSolidMaterial_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getEnvelopFrameMaterial_EVString( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getEnvelopFrameMaterial_EVString_Callback* pCallback )
				{
					CPARadarObjectProxy* ptr = dynamic_cast<CPARadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getEnvelopFrameMaterial_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getScannerSolidMaterial_EVString( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getScannerSolidMaterial_EVString_Callback* pCallback )
				{
					CPARadarObjectProxy* ptr = dynamic_cast<CPARadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getScannerSolidMaterial_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getScannerFrameMaterial_EVString( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getScannerFrameMaterial_EVString_Callback* pCallback )
				{
					CPARadarObjectProxy* ptr = dynamic_cast<CPARadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_getScannerFrameMaterial_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_computeTerrainShade_CRadarObject_EVString_EVString( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_computeTerrainShade_CRadarObject_EVString_EVString_Callback* pCallback )
				{
					CPARadarObjectProxy* ptr = dynamic_cast<CPARadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarObject_computeTerrainShade_CRadarObject_EVString_EVString(pCallback);
					}
				}
			}
		}
	}
}
