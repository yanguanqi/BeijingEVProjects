/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "industryengine/militaryengine/radarlibrary/msradarobject.h"
namespace EarthView
{
	namespace IndustryEngine
	{
		namespace MilitaryEngine
		{
			namespace RadarLibrary
			{
				typedef EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_clone_CRadarObject_EVString_Callback)(_in char*& name);
				typedef EarthView::World::Graphic::CSceneNode*  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_appendToNode_CSceneNode_Callback)();
				typedef void  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_appendToNodeWithNorthAngle_void_Real_Real_Real_CVector3_CDegree_Callback)(_in const Real& lat, _in const Real& lon, _in const Real& alt, _in const void* localScale, _in const void* northAngle);
				typedef EarthView::World::Graphic::CSceneNode*  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getParentNode_CSceneNode_Callback)();
				typedef void  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_detachFromParentNode_void_Callback)();
				typedef bool  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_isIntersected_bool_CRadarObject_Callback)(_in EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* another);
				typedef bool  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_isIntersected_bool_CCurve_Callback)(_in EarthView::World::Spatial::Geometry::CCurve* curve);
				typedef int  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_containsVertex_EVPointWithinType_CPoint_Callback)(_in const void* point);
				typedef void  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_build_void_Callback)();
				typedef void  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setVisible_void_ev_bool_Callback)(_in const ev_bool& value);
				typedef ev_bool  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getVisible_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setEnvelopSolidVisible_void_ev_bool_Callback)(_in const ev_bool& value);
				typedef ev_bool  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getEnvelopSolidVisible_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setEnvelopFrameVisible_void_ev_bool_Callback)(_in const ev_bool& value);
				typedef ev_bool  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getEnvelopFrameVisible_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setScannerSolidVisible_void_ev_bool_Callback)(_in const ev_bool& value);
				typedef ev_bool  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getScannerSolidVisible_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setScannerFrameVisible_void_ev_bool_Callback)(_in const ev_bool& value);
				typedef ev_bool  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getScannerFrameVisible_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_fromFile_void_EVString_Callback)(_in char*& fileName);
				typedef void  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_toFile_void_EVString_Callback)(_in char*& fileName);
				typedef ev_bool  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getRadarAlertResult_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setEnvelopSolidMaterial_void_EVString_EVString_Callback)(_in char*& materialName, _in char*& groupName);
				typedef void  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setEnvelopFrameMaterial_void_EVString_EVString_Callback)(_in char*& materialName, _in char*& groupName);
				typedef void  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setScannerSolidMaterial_void_EVString_EVString_Callback)(_in char*& materialName, _in char*& groupName);
				typedef void  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setScannerFrameMaterial_void_EVString_EVString_Callback)(_in char*& materialName, _in char*& groupName);
				typedef char*  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getRadarMaterialResourceGroup_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getEnvelopSolidMaterial_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getEnvelopFrameMaterial_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getScannerSolidMaterial_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getScannerFrameMaterial_EVString_Callback)();
				typedef EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_computeTerrainShade_CRadarObject_EVString_EVString_Callback)(_in char*& name, _in char*& nodeName);
				class CMSRadarObjectProxy : public EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject
				{
				private:
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_clone_CRadarObject_EVString_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_clone_CRadarObject_EVString_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_appendToNode_CSceneNode_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_appendToNode_CSceneNode_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_appendToNodeWithNorthAngle_void_Real_Real_Real_CVector3_CDegree_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_appendToNodeWithNorthAngle_void_Real_Real_Real_CVector3_CDegree_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getParentNode_CSceneNode_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getParentNode_CSceneNode_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_detachFromParentNode_void_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_detachFromParentNode_void_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_isIntersected_bool_CRadarObject_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_isIntersected_bool_CRadarObject_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_isIntersected_bool_CCurve_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_isIntersected_bool_CCurve_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_containsVertex_EVPointWithinType_CPoint_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_containsVertex_EVPointWithinType_CPoint_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_build_void_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_build_void_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setVisible_void_ev_bool_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setVisible_void_ev_bool_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getVisible_ev_bool_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getVisible_ev_bool_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setEnvelopSolidVisible_void_ev_bool_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setEnvelopSolidVisible_void_ev_bool_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getEnvelopSolidVisible_ev_bool_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getEnvelopSolidVisible_ev_bool_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setEnvelopFrameVisible_void_ev_bool_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setEnvelopFrameVisible_void_ev_bool_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getEnvelopFrameVisible_ev_bool_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getEnvelopFrameVisible_ev_bool_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setScannerSolidVisible_void_ev_bool_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setScannerSolidVisible_void_ev_bool_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getScannerSolidVisible_ev_bool_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getScannerSolidVisible_ev_bool_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setScannerFrameVisible_void_ev_bool_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setScannerFrameVisible_void_ev_bool_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getScannerFrameVisible_ev_bool_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getScannerFrameVisible_ev_bool_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_fromFile_void_EVString_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_fromFile_void_EVString_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_toFile_void_EVString_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_toFile_void_EVString_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getRadarAlertResult_ev_bool_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getRadarAlertResult_ev_bool_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setEnvelopSolidMaterial_void_EVString_EVString_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setEnvelopSolidMaterial_void_EVString_EVString_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setEnvelopFrameMaterial_void_EVString_EVString_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setEnvelopFrameMaterial_void_EVString_EVString_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setScannerSolidMaterial_void_EVString_EVString_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setScannerSolidMaterial_void_EVString_EVString_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setScannerFrameMaterial_void_EVString_EVString_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setScannerFrameMaterial_void_EVString_EVString_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getRadarMaterialResourceGroup_EVString_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getRadarMaterialResourceGroup_EVString_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getEnvelopSolidMaterial_EVString_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getEnvelopSolidMaterial_EVString_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getEnvelopFrameMaterial_EVString_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getEnvelopFrameMaterial_EVString_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getScannerSolidMaterial_EVString_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getScannerSolidMaterial_EVString_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getScannerFrameMaterial_EVString_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getScannerFrameMaterial_EVString_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_computeTerrainShade_CRadarObject_EVString_EVString_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_computeTerrainShade_CRadarObject_EVString_EVString_Callback;
				public:
					CMSRadarObjectProxy(EarthView::World::Core::CNameValuePairList *pList) : CMSRadarObject(pList)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_clone_CRadarObject_EVString_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_appendToNode_CSceneNode_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_appendToNodeWithNorthAngle_void_Real_Real_Real_CVector3_CDegree_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getParentNode_CSceneNode_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_detachFromParentNode_void_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_isIntersected_bool_CRadarObject_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_isIntersected_bool_CCurve_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_containsVertex_EVPointWithinType_CPoint_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_build_void_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setVisible_void_ev_bool_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getVisible_ev_bool_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setEnvelopSolidVisible_void_ev_bool_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getEnvelopSolidVisible_ev_bool_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setEnvelopFrameVisible_void_ev_bool_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getEnvelopFrameVisible_ev_bool_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setScannerSolidVisible_void_ev_bool_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getScannerSolidVisible_ev_bool_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setScannerFrameVisible_void_ev_bool_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getScannerFrameVisible_ev_bool_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_fromFile_void_EVString_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_toFile_void_EVString_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getRadarAlertResult_ev_bool_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setEnvelopSolidMaterial_void_EVString_EVString_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setEnvelopFrameMaterial_void_EVString_EVString_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setScannerSolidMaterial_void_EVString_EVString_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setScannerFrameMaterial_void_EVString_EVString_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getRadarMaterialResourceGroup_EVString_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getEnvelopSolidMaterial_EVString_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getEnvelopFrameMaterial_EVString_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getScannerSolidMaterial_EVString_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getScannerFrameMaterial_EVString_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_computeTerrainShade_CRadarObject_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_clone_CRadarObject_EVString(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_clone_CRadarObject_EVString_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_clone_CRadarObject_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_appendToNode_CSceneNode(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_appendToNode_CSceneNode_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_appendToNode_CSceneNode_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_appendToNodeWithNorthAngle_void_Real_Real_Real_CVector3_CDegree(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_appendToNodeWithNorthAngle_void_Real_Real_Real_CVector3_CDegree_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_appendToNodeWithNorthAngle_void_Real_Real_Real_CVector3_CDegree_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getParentNode_CSceneNode(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getParentNode_CSceneNode_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getParentNode_CSceneNode_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_detachFromParentNode_void(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_detachFromParentNode_void_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_detachFromParentNode_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_isIntersected_bool_CRadarObject(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_isIntersected_bool_CRadarObject_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_isIntersected_bool_CRadarObject_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_isIntersected_bool_CCurve(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_isIntersected_bool_CCurve_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_isIntersected_bool_CCurve_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_containsVertex_EVPointWithinType_CPoint(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_containsVertex_EVPointWithinType_CPoint_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_containsVertex_EVPointWithinType_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_build_void(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_build_void_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_build_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setVisible_void_ev_bool(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setVisible_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setVisible_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getVisible_ev_bool(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getVisible_ev_bool_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getVisible_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setEnvelopSolidVisible_void_ev_bool(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setEnvelopSolidVisible_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setEnvelopSolidVisible_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getEnvelopSolidVisible_ev_bool(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getEnvelopSolidVisible_ev_bool_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getEnvelopSolidVisible_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setEnvelopFrameVisible_void_ev_bool(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setEnvelopFrameVisible_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setEnvelopFrameVisible_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getEnvelopFrameVisible_ev_bool(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getEnvelopFrameVisible_ev_bool_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getEnvelopFrameVisible_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setScannerSolidVisible_void_ev_bool(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setScannerSolidVisible_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setScannerSolidVisible_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getScannerSolidVisible_ev_bool(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getScannerSolidVisible_ev_bool_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getScannerSolidVisible_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setScannerFrameVisible_void_ev_bool(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setScannerFrameVisible_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setScannerFrameVisible_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getScannerFrameVisible_ev_bool(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getScannerFrameVisible_ev_bool_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getScannerFrameVisible_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_fromFile_void_EVString(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_fromFile_void_EVString_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_fromFile_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_toFile_void_EVString(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_toFile_void_EVString_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_toFile_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getRadarAlertResult_ev_bool(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getRadarAlertResult_ev_bool_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getRadarAlertResult_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setEnvelopSolidMaterial_void_EVString_EVString(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setEnvelopSolidMaterial_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setEnvelopSolidMaterial_void_EVString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setEnvelopFrameMaterial_void_EVString_EVString(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setEnvelopFrameMaterial_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setEnvelopFrameMaterial_void_EVString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setScannerSolidMaterial_void_EVString_EVString(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setScannerSolidMaterial_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setScannerSolidMaterial_void_EVString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setScannerFrameMaterial_void_EVString_EVString(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setScannerFrameMaterial_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setScannerFrameMaterial_void_EVString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getRadarMaterialResourceGroup_EVString(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getRadarMaterialResourceGroup_EVString_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getRadarMaterialResourceGroup_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getEnvelopSolidMaterial_EVString(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getEnvelopSolidMaterial_EVString_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getEnvelopSolidMaterial_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getEnvelopFrameMaterial_EVString(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getEnvelopFrameMaterial_EVString_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getEnvelopFrameMaterial_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getScannerSolidMaterial_EVString(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getScannerSolidMaterial_EVString_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getScannerSolidMaterial_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getScannerFrameMaterial_EVString(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getScannerFrameMaterial_EVString_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getScannerFrameMaterial_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_computeTerrainShade_CRadarObject_EVString_EVString(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_computeTerrainShade_CRadarObject_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_computeTerrainShade_CRadarObject_EVString_EVString_Callback = pCallback;
					}
					virtual EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* clone(_in const EVString& name)
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_clone_CRadarObject_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_clone_CRadarObject_EVString_Callback(name_Char);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CMSRadarObject::clone(name);
					}
					virtual ev_bool getRadarAlertResult()
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getRadarAlertResult_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getRadarAlertResult_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CMSRadarObject::getRadarAlertResult();
					}
					virtual EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* computeTerrainShade(_in const EVString& name, _in const EVString& nodeName)
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_computeTerrainShade_CRadarObject_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							char* nodeName_Char = nodeName.makeBuffer();
							EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_computeTerrainShade_CRadarObject_EVString_EVString_Callback(name_Char, nodeName_Char);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CMSRadarObject::computeTerrainShade(name, nodeName);
					}
					virtual EarthView::World::Graphic::CSceneNode* appendToNode()
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_appendToNode_CSceneNode_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CSceneNode* returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_appendToNode_CSceneNode_Callback();
							return returnValue;
						}
						else
							return this->CMSRadarObject::appendToNode();
					}
					virtual void appendToNodeWithNorthAngle(_in const Real& lat, _in const Real& lon, _in const Real& alt, _in const EarthView::World::Spatial::Math::CVector3& localScale, _in const EarthView::World::Spatial::Math::CDegree& northAngle)
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_appendToNodeWithNorthAngle_void_Real_Real_Real_CVector3_CDegree_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_appendToNodeWithNorthAngle_void_Real_Real_Real_CVector3_CDegree_Callback(lat, lon, alt, &localScale, &northAngle);
						}
						else
							return this->CMSRadarObject::appendToNodeWithNorthAngle(lat, lon, alt, localScale, northAngle);
					}
					virtual EarthView::World::Graphic::CSceneNode* getParentNode()
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getParentNode_CSceneNode_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CSceneNode* returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getParentNode_CSceneNode_Callback();
							return returnValue;
						}
						else
							return this->CMSRadarObject::getParentNode();
					}
					virtual void detachFromParentNode()
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_detachFromParentNode_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_detachFromParentNode_void_Callback();
						}
						else
							return this->CMSRadarObject::detachFromParentNode();
					}
					virtual bool isIntersected(_in EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* another)
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_isIntersected_bool_CRadarObject_Callback != NULL && this->isCustomExtend())
						{
							bool returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_isIntersected_bool_CRadarObject_Callback(another);
							return returnValue;
						}
						else
							return this->CMSRadarObject::isIntersected(another);
					}
					virtual bool isIntersected(_in EarthView::World::Spatial::Geometry::CCurve* curve)
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_isIntersected_bool_CCurve_Callback != NULL && this->isCustomExtend())
						{
							bool returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_isIntersected_bool_CCurve_Callback(curve);
							return returnValue;
						}
						else
							return this->CMSRadarObject::isIntersected(curve);
					}
					virtual EarthView::World::Geometry3D::EVPointWithinType containsVertex(_in const EarthView::World::Spatial::Geometry::CPoint& point)
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_containsVertex_EVPointWithinType_CPoint_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Geometry3D::EVPointWithinType returnValue = (EarthView::World::Geometry3D::EVPointWithinType)m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_containsVertex_EVPointWithinType_CPoint_Callback(&point);
							return returnValue;
						}
						else
							return this->CMSRadarObject::containsVertex(point);
					}
					virtual void build()
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_build_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_build_void_Callback();
						}
						else
							return this->CMSRadarObject::build();
					}
					virtual void setVisible(_in const ev_bool& value)
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setVisible_void_ev_bool_Callback(value);
						}
						else
							return this->CMSRadarObject::setVisible(value);
					}
					virtual ev_bool getVisible() const
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getVisible_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getVisible_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CMSRadarObject::getVisible();
					}
					virtual void setEnvelopSolidVisible(_in const ev_bool& value)
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setEnvelopSolidVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setEnvelopSolidVisible_void_ev_bool_Callback(value);
						}
						else
							return this->CMSRadarObject::setEnvelopSolidVisible(value);
					}
					virtual ev_bool getEnvelopSolidVisible() const
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getEnvelopSolidVisible_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getEnvelopSolidVisible_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CMSRadarObject::getEnvelopSolidVisible();
					}
					virtual void setEnvelopFrameVisible(_in const ev_bool& value)
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setEnvelopFrameVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setEnvelopFrameVisible_void_ev_bool_Callback(value);
						}
						else
							return this->CMSRadarObject::setEnvelopFrameVisible(value);
					}
					virtual ev_bool getEnvelopFrameVisible() const
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getEnvelopFrameVisible_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getEnvelopFrameVisible_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CMSRadarObject::getEnvelopFrameVisible();
					}
					virtual void setScannerSolidVisible(_in const ev_bool& value)
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setScannerSolidVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setScannerSolidVisible_void_ev_bool_Callback(value);
						}
						else
							return this->CMSRadarObject::setScannerSolidVisible(value);
					}
					virtual ev_bool getScannerSolidVisible() const
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getScannerSolidVisible_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getScannerSolidVisible_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CMSRadarObject::getScannerSolidVisible();
					}
					virtual void setScannerFrameVisible(_in const ev_bool& value)
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setScannerFrameVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setScannerFrameVisible_void_ev_bool_Callback(value);
						}
						else
							return this->CMSRadarObject::setScannerFrameVisible(value);
					}
					virtual ev_bool getScannerFrameVisible() const
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getScannerFrameVisible_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getScannerFrameVisible_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CMSRadarObject::getScannerFrameVisible();
					}
					virtual void fromFile(_in const EVString& fileName)
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_fromFile_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* fileName_Char = fileName.makeBuffer();
							m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_fromFile_void_EVString_Callback(fileName_Char);
						}
						else
							return this->CMSRadarObject::fromFile(fileName);
					}
					virtual void toFile(_in const EVString& fileName)
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_toFile_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* fileName_Char = fileName.makeBuffer();
							m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_toFile_void_EVString_Callback(fileName_Char);
						}
						else
							return this->CMSRadarObject::toFile(fileName);
					}
					virtual void setEnvelopSolidMaterial(_in const EVString& materialName, _in const EVString& groupName)
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setEnvelopSolidMaterial_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* materialName_Char = materialName.makeBuffer();
							char* groupName_Char = groupName.makeBuffer();
							m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setEnvelopSolidMaterial_void_EVString_EVString_Callback(materialName_Char, groupName_Char);
						}
						else
							return this->CMSRadarObject::setEnvelopSolidMaterial(materialName, groupName);
					}
					virtual void setEnvelopFrameMaterial(_in const EVString& materialName, _in const EVString& groupName)
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setEnvelopFrameMaterial_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* materialName_Char = materialName.makeBuffer();
							char* groupName_Char = groupName.makeBuffer();
							m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setEnvelopFrameMaterial_void_EVString_EVString_Callback(materialName_Char, groupName_Char);
						}
						else
							return this->CMSRadarObject::setEnvelopFrameMaterial(materialName, groupName);
					}
					virtual void setScannerSolidMaterial(_in const EVString& materialName, _in const EVString& groupName)
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setScannerSolidMaterial_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* materialName_Char = materialName.makeBuffer();
							char* groupName_Char = groupName.makeBuffer();
							m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setScannerSolidMaterial_void_EVString_EVString_Callback(materialName_Char, groupName_Char);
						}
						else
							return this->CMSRadarObject::setScannerSolidMaterial(materialName, groupName);
					}
					virtual void setScannerFrameMaterial(_in const EVString& materialName, _in const EVString& groupName)
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setScannerFrameMaterial_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* materialName_Char = materialName.makeBuffer();
							char* groupName_Char = groupName.makeBuffer();
							m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setScannerFrameMaterial_void_EVString_EVString_Callback(materialName_Char, groupName_Char);
						}
						else
							return this->CMSRadarObject::setScannerFrameMaterial(materialName, groupName);
					}
					virtual EVString getRadarMaterialResourceGroup() const
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getRadarMaterialResourceGroup_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getRadarMaterialResourceGroup_EVString_Callback();
							return returnValue;
						}
						else
							return this->CMSRadarObject::getRadarMaterialResourceGroup();
					}
					virtual EVString getEnvelopSolidMaterial() const
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getEnvelopSolidMaterial_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getEnvelopSolidMaterial_EVString_Callback();
							return returnValue;
						}
						else
							return this->CMSRadarObject::getEnvelopSolidMaterial();
					}
					virtual EVString getEnvelopFrameMaterial() const
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getEnvelopFrameMaterial_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getEnvelopFrameMaterial_EVString_Callback();
							return returnValue;
						}
						else
							return this->CMSRadarObject::getEnvelopFrameMaterial();
					}
					virtual EVString getScannerSolidMaterial() const
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getScannerSolidMaterial_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getScannerSolidMaterial_EVString_Callback();
							return returnValue;
						}
						else
							return this->CMSRadarObject::getScannerSolidMaterial();
					}
					virtual EVString getScannerFrameMaterial() const
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getScannerFrameMaterial_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getScannerFrameMaterial_EVString_Callback();
							return returnValue;
						}
						else
							return this->CMSRadarObject::getScannerFrameMaterial();
					}
				};
				REGISTER_FACTORY_CLASS(CMSRadarObjectProxy);
				extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_clone_CRadarObject_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject*) pObjectXXXX;
					if (dynamic_cast<CMSRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject*)ptrNativeObject) != NULL)
					{
						EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject::clone(name1);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_clone_CRadarObject_EVString( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_clone_CRadarObject_EVString_Callback* pCallback )
				{
					CMSRadarObjectProxy* ptr = dynamic_cast<CMSRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_clone_CRadarObject_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_clone_CRadarObject_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject*) pObjectXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject::clone(name1);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getRadarAlertResult_ev_bool(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject*) pObjectXXXX;
					if (dynamic_cast<CMSRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject::getRadarAlertResult();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getRadarAlertResult();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getRadarAlertResult_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getRadarAlertResult_ev_bool_Callback* pCallback )
				{
					CMSRadarObjectProxy* ptr = dynamic_cast<CMSRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getRadarAlertResult_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getRadarAlertResult_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject::getRadarAlertResult();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_computeTerrainShade_CRadarObject_EVString_EVString(void *pObjectXXXX, _in const char* name, _in const char* nodeName )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Core::ev_string nodeName1 = nodeName;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject*) pObjectXXXX;
					if (dynamic_cast<CMSRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject*)ptrNativeObject) != NULL)
					{
						EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject::computeTerrainShade(name1, nodeName1);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* objXXXX = ptrNativeObject->computeTerrainShade(name1, nodeName1);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_computeTerrainShade_CRadarObject_EVString_EVString( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_computeTerrainShade_CRadarObject_EVString_EVString_Callback* pCallback )
				{
					CMSRadarObjectProxy* ptr = dynamic_cast<CMSRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_computeTerrainShade_CRadarObject_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_computeTerrainShade_CRadarObject_EVString_EVString_NoVirtual(void *pObjectXXXX, _in const char* name, _in const char* nodeName )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Core::ev_string nodeName1 = nodeName;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject*) pObjectXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject::computeTerrainShade(name1, nodeName1);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_appendToNode_CSceneNode( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_appendToNode_CSceneNode_Callback* pCallback )
				{
					CMSRadarObjectProxy* ptr = dynamic_cast<CMSRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_appendToNode_CSceneNode(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_appendToNodeWithNorthAngle_void_Real_Real_Real_CVector3_CDegree( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_appendToNodeWithNorthAngle_void_Real_Real_Real_CVector3_CDegree_Callback* pCallback )
				{
					CMSRadarObjectProxy* ptr = dynamic_cast<CMSRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_appendToNodeWithNorthAngle_void_Real_Real_Real_CVector3_CDegree(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getParentNode_CSceneNode( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getParentNode_CSceneNode_Callback* pCallback )
				{
					CMSRadarObjectProxy* ptr = dynamic_cast<CMSRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getParentNode_CSceneNode(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_detachFromParentNode_void( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_detachFromParentNode_void_Callback* pCallback )
				{
					CMSRadarObjectProxy* ptr = dynamic_cast<CMSRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_detachFromParentNode_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_isIntersected_bool_CRadarObject( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_isIntersected_bool_CRadarObject_Callback* pCallback )
				{
					CMSRadarObjectProxy* ptr = dynamic_cast<CMSRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_isIntersected_bool_CRadarObject(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_isIntersected_bool_CCurve( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_isIntersected_bool_CCurve_Callback* pCallback )
				{
					CMSRadarObjectProxy* ptr = dynamic_cast<CMSRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_isIntersected_bool_CCurve(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_containsVertex_EVPointWithinType_CPoint( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_containsVertex_EVPointWithinType_CPoint_Callback* pCallback )
				{
					CMSRadarObjectProxy* ptr = dynamic_cast<CMSRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_containsVertex_EVPointWithinType_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_build_void( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_build_void_Callback* pCallback )
				{
					CMSRadarObjectProxy* ptr = dynamic_cast<CMSRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_build_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setVisible_void_ev_bool_Callback* pCallback )
				{
					CMSRadarObjectProxy* ptr = dynamic_cast<CMSRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setVisible_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getVisible_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getVisible_ev_bool_Callback* pCallback )
				{
					CMSRadarObjectProxy* ptr = dynamic_cast<CMSRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getVisible_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setEnvelopSolidVisible_void_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setEnvelopSolidVisible_void_ev_bool_Callback* pCallback )
				{
					CMSRadarObjectProxy* ptr = dynamic_cast<CMSRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setEnvelopSolidVisible_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getEnvelopSolidVisible_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getEnvelopSolidVisible_ev_bool_Callback* pCallback )
				{
					CMSRadarObjectProxy* ptr = dynamic_cast<CMSRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getEnvelopSolidVisible_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setEnvelopFrameVisible_void_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setEnvelopFrameVisible_void_ev_bool_Callback* pCallback )
				{
					CMSRadarObjectProxy* ptr = dynamic_cast<CMSRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setEnvelopFrameVisible_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getEnvelopFrameVisible_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getEnvelopFrameVisible_ev_bool_Callback* pCallback )
				{
					CMSRadarObjectProxy* ptr = dynamic_cast<CMSRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getEnvelopFrameVisible_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setScannerSolidVisible_void_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setScannerSolidVisible_void_ev_bool_Callback* pCallback )
				{
					CMSRadarObjectProxy* ptr = dynamic_cast<CMSRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setScannerSolidVisible_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getScannerSolidVisible_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getScannerSolidVisible_ev_bool_Callback* pCallback )
				{
					CMSRadarObjectProxy* ptr = dynamic_cast<CMSRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getScannerSolidVisible_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setScannerFrameVisible_void_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setScannerFrameVisible_void_ev_bool_Callback* pCallback )
				{
					CMSRadarObjectProxy* ptr = dynamic_cast<CMSRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setScannerFrameVisible_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getScannerFrameVisible_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getScannerFrameVisible_ev_bool_Callback* pCallback )
				{
					CMSRadarObjectProxy* ptr = dynamic_cast<CMSRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getScannerFrameVisible_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_fromFile_void_EVString( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_fromFile_void_EVString_Callback* pCallback )
				{
					CMSRadarObjectProxy* ptr = dynamic_cast<CMSRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_fromFile_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_toFile_void_EVString( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_toFile_void_EVString_Callback* pCallback )
				{
					CMSRadarObjectProxy* ptr = dynamic_cast<CMSRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_toFile_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setEnvelopSolidMaterial_void_EVString_EVString( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setEnvelopSolidMaterial_void_EVString_EVString_Callback* pCallback )
				{
					CMSRadarObjectProxy* ptr = dynamic_cast<CMSRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setEnvelopSolidMaterial_void_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setEnvelopFrameMaterial_void_EVString_EVString( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setEnvelopFrameMaterial_void_EVString_EVString_Callback* pCallback )
				{
					CMSRadarObjectProxy* ptr = dynamic_cast<CMSRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setEnvelopFrameMaterial_void_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setScannerSolidMaterial_void_EVString_EVString( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setScannerSolidMaterial_void_EVString_EVString_Callback* pCallback )
				{
					CMSRadarObjectProxy* ptr = dynamic_cast<CMSRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setScannerSolidMaterial_void_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setScannerFrameMaterial_void_EVString_EVString( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setScannerFrameMaterial_void_EVString_EVString_Callback* pCallback )
				{
					CMSRadarObjectProxy* ptr = dynamic_cast<CMSRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setScannerFrameMaterial_void_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getRadarMaterialResourceGroup_EVString( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getRadarMaterialResourceGroup_EVString_Callback* pCallback )
				{
					CMSRadarObjectProxy* ptr = dynamic_cast<CMSRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getRadarMaterialResourceGroup_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getEnvelopSolidMaterial_EVString( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getEnvelopSolidMaterial_EVString_Callback* pCallback )
				{
					CMSRadarObjectProxy* ptr = dynamic_cast<CMSRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getEnvelopSolidMaterial_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getEnvelopFrameMaterial_EVString( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getEnvelopFrameMaterial_EVString_Callback* pCallback )
				{
					CMSRadarObjectProxy* ptr = dynamic_cast<CMSRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getEnvelopFrameMaterial_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getScannerSolidMaterial_EVString( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getScannerSolidMaterial_EVString_Callback* pCallback )
				{
					CMSRadarObjectProxy* ptr = dynamic_cast<CMSRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getScannerSolidMaterial_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getScannerFrameMaterial_EVString( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getScannerFrameMaterial_EVString_Callback* pCallback )
				{
					CMSRadarObjectProxy* ptr = dynamic_cast<CMSRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getScannerFrameMaterial_EVString(pCallback);
					}
				}
			}
		}
	}
}
