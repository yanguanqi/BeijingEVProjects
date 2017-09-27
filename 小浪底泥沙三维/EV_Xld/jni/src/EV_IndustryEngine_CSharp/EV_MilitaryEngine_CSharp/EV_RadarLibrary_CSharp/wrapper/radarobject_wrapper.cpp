/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "industryengine/militaryengine/radarlibrary/radarobject.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
		}
		namespace Geometry3D
		{
		}
	}
}
namespace EarthView
{
	namespace IndustryEngine
	{
		namespace MilitaryEngine
		{
			namespace RadarLibrary
			{
				typedef EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_clone_CRadarObject_EVString_Callback)(_in char*& name);
				typedef EarthView::World::Graphic::CSceneNode*  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_appendToNode_CSceneNode_Callback)();
				typedef void  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_appendToNodeWithNorthAngle_void_Real_Real_Real_CVector3_CDegree_Callback)(_in const Real& lat, _in const Real& lon, _in const Real& alt, _in const void* localScale, _in const void* northAngle);
				typedef EarthView::World::Graphic::CSceneNode*  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getParentNode_CSceneNode_Callback)();
				typedef void  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_detachFromParentNode_void_Callback)();
				typedef bool  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_isIntersected_bool_CRadarObject_Callback)(_in EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* another);
				typedef bool  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_isIntersected_bool_CCurve_Callback)(_in EarthView::World::Spatial::Geometry::CCurve* curve);
				typedef int  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_containsVertex_EVPointWithinType_CPoint_Callback)(_in const void* point);
				typedef void  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_build_void_Callback)();
				typedef void  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setVisible_void_ev_bool_Callback)(_in const ev_bool& value);
				typedef ev_bool  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getVisible_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopSolidVisible_void_ev_bool_Callback)(_in const ev_bool& value);
				typedef ev_bool  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopSolidVisible_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopFrameVisible_void_ev_bool_Callback)(_in const ev_bool& value);
				typedef ev_bool  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopFrameVisible_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerSolidVisible_void_ev_bool_Callback)(_in const ev_bool& value);
				typedef ev_bool  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerSolidVisible_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerFrameVisible_void_ev_bool_Callback)(_in const ev_bool& value);
				typedef ev_bool  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerFrameVisible_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_fromFile_void_EVString_Callback)(_in char*& fileName);
				typedef void  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_toFile_void_EVString_Callback)(_in char*& fileName);
				typedef ev_bool  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getRadarAlertResult_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopSolidMaterial_void_EVString_EVString_Callback)(_in char*& materialName, _in char*& groupName);
				typedef void  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopFrameMaterial_void_EVString_EVString_Callback)(_in char*& materialName, _in char*& groupName);
				typedef void  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerSolidMaterial_void_EVString_EVString_Callback)(_in char*& materialName, _in char*& groupName);
				typedef void  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerFrameMaterial_void_EVString_EVString_Callback)(_in char*& materialName, _in char*& groupName);
				typedef char*  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getRadarMaterialResourceGroup_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopSolidMaterial_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopFrameMaterial_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerSolidMaterial_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerFrameMaterial_EVString_Callback)();
				typedef EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_computeTerrainShade_CRadarObject_EVString_EVString_Callback)(_in char*& name, _in char*& nodeName);
				class CRadarObjectProxy : public EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject
				{
				private:
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_clone_CRadarObject_EVString_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_clone_CRadarObject_EVString_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_appendToNode_CSceneNode_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_appendToNode_CSceneNode_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_appendToNodeWithNorthAngle_void_Real_Real_Real_CVector3_CDegree_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_appendToNodeWithNorthAngle_void_Real_Real_Real_CVector3_CDegree_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getParentNode_CSceneNode_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getParentNode_CSceneNode_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_detachFromParentNode_void_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_detachFromParentNode_void_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_isIntersected_bool_CRadarObject_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_isIntersected_bool_CRadarObject_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_isIntersected_bool_CCurve_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_isIntersected_bool_CCurve_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_containsVertex_EVPointWithinType_CPoint_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_containsVertex_EVPointWithinType_CPoint_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_build_void_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_build_void_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setVisible_void_ev_bool_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setVisible_void_ev_bool_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getVisible_ev_bool_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getVisible_ev_bool_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopSolidVisible_void_ev_bool_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopSolidVisible_void_ev_bool_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopSolidVisible_ev_bool_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopSolidVisible_ev_bool_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopFrameVisible_void_ev_bool_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopFrameVisible_void_ev_bool_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopFrameVisible_ev_bool_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopFrameVisible_ev_bool_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerSolidVisible_void_ev_bool_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerSolidVisible_void_ev_bool_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerSolidVisible_ev_bool_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerSolidVisible_ev_bool_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerFrameVisible_void_ev_bool_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerFrameVisible_void_ev_bool_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerFrameVisible_ev_bool_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerFrameVisible_ev_bool_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_fromFile_void_EVString_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_fromFile_void_EVString_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_toFile_void_EVString_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_toFile_void_EVString_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getRadarAlertResult_ev_bool_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getRadarAlertResult_ev_bool_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopSolidMaterial_void_EVString_EVString_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopSolidMaterial_void_EVString_EVString_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopFrameMaterial_void_EVString_EVString_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopFrameMaterial_void_EVString_EVString_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerSolidMaterial_void_EVString_EVString_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerSolidMaterial_void_EVString_EVString_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerFrameMaterial_void_EVString_EVString_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerFrameMaterial_void_EVString_EVString_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getRadarMaterialResourceGroup_EVString_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getRadarMaterialResourceGroup_EVString_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopSolidMaterial_EVString_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopSolidMaterial_EVString_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopFrameMaterial_EVString_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopFrameMaterial_EVString_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerSolidMaterial_EVString_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerSolidMaterial_EVString_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerFrameMaterial_EVString_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerFrameMaterial_EVString_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_computeTerrainShade_CRadarObject_EVString_EVString_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_computeTerrainShade_CRadarObject_EVString_EVString_Callback;
				public:
					CRadarObjectProxy(EarthView::World::Core::CNameValuePairList *pList) : CRadarObject(pList)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_clone_CRadarObject_EVString_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_appendToNode_CSceneNode_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_appendToNodeWithNorthAngle_void_Real_Real_Real_CVector3_CDegree_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getParentNode_CSceneNode_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_detachFromParentNode_void_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_isIntersected_bool_CRadarObject_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_isIntersected_bool_CCurve_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_containsVertex_EVPointWithinType_CPoint_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_build_void_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setVisible_void_ev_bool_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getVisible_ev_bool_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopSolidVisible_void_ev_bool_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopSolidVisible_ev_bool_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopFrameVisible_void_ev_bool_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopFrameVisible_ev_bool_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerSolidVisible_void_ev_bool_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerSolidVisible_ev_bool_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerFrameVisible_void_ev_bool_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerFrameVisible_ev_bool_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_fromFile_void_EVString_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_toFile_void_EVString_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getRadarAlertResult_ev_bool_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopSolidMaterial_void_EVString_EVString_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopFrameMaterial_void_EVString_EVString_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerSolidMaterial_void_EVString_EVString_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerFrameMaterial_void_EVString_EVString_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getRadarMaterialResourceGroup_EVString_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopSolidMaterial_EVString_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopFrameMaterial_EVString_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerSolidMaterial_EVString_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerFrameMaterial_EVString_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_computeTerrainShade_CRadarObject_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_clone_CRadarObject_EVString(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_clone_CRadarObject_EVString_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_clone_CRadarObject_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_appendToNode_CSceneNode(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_appendToNode_CSceneNode_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_appendToNode_CSceneNode_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_appendToNodeWithNorthAngle_void_Real_Real_Real_CVector3_CDegree(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_appendToNodeWithNorthAngle_void_Real_Real_Real_CVector3_CDegree_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_appendToNodeWithNorthAngle_void_Real_Real_Real_CVector3_CDegree_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getParentNode_CSceneNode(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getParentNode_CSceneNode_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getParentNode_CSceneNode_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_detachFromParentNode_void(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_detachFromParentNode_void_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_detachFromParentNode_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_isIntersected_bool_CRadarObject(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_isIntersected_bool_CRadarObject_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_isIntersected_bool_CRadarObject_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_isIntersected_bool_CCurve(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_isIntersected_bool_CCurve_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_isIntersected_bool_CCurve_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_containsVertex_EVPointWithinType_CPoint(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_containsVertex_EVPointWithinType_CPoint_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_containsVertex_EVPointWithinType_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_build_void(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_build_void_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_build_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setVisible_void_ev_bool(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setVisible_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setVisible_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getVisible_ev_bool(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getVisible_ev_bool_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getVisible_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopSolidVisible_void_ev_bool(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopSolidVisible_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopSolidVisible_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopSolidVisible_ev_bool(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopSolidVisible_ev_bool_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopSolidVisible_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopFrameVisible_void_ev_bool(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopFrameVisible_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopFrameVisible_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopFrameVisible_ev_bool(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopFrameVisible_ev_bool_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopFrameVisible_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerSolidVisible_void_ev_bool(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerSolidVisible_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerSolidVisible_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerSolidVisible_ev_bool(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerSolidVisible_ev_bool_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerSolidVisible_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerFrameVisible_void_ev_bool(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerFrameVisible_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerFrameVisible_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerFrameVisible_ev_bool(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerFrameVisible_ev_bool_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerFrameVisible_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_fromFile_void_EVString(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_fromFile_void_EVString_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_fromFile_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_toFile_void_EVString(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_toFile_void_EVString_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_toFile_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getRadarAlertResult_ev_bool(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getRadarAlertResult_ev_bool_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getRadarAlertResult_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopSolidMaterial_void_EVString_EVString(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopSolidMaterial_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopSolidMaterial_void_EVString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopFrameMaterial_void_EVString_EVString(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopFrameMaterial_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopFrameMaterial_void_EVString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerSolidMaterial_void_EVString_EVString(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerSolidMaterial_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerSolidMaterial_void_EVString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerFrameMaterial_void_EVString_EVString(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerFrameMaterial_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerFrameMaterial_void_EVString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getRadarMaterialResourceGroup_EVString(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getRadarMaterialResourceGroup_EVString_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getRadarMaterialResourceGroup_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopSolidMaterial_EVString(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopSolidMaterial_EVString_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopSolidMaterial_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopFrameMaterial_EVString(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopFrameMaterial_EVString_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopFrameMaterial_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerSolidMaterial_EVString(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerSolidMaterial_EVString_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerSolidMaterial_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerFrameMaterial_EVString(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerFrameMaterial_EVString_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerFrameMaterial_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_computeTerrainShade_CRadarObject_EVString_EVString(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_computeTerrainShade_CRadarObject_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_computeTerrainShade_CRadarObject_EVString_EVString_Callback = pCallback;
					}
					virtual EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* clone(_in const EVString& name)
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_clone_CRadarObject_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_clone_CRadarObject_EVString_Callback(name_Char);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CRadarObject::clone(name);
					}
					virtual EarthView::World::Graphic::CSceneNode* appendToNode()
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_appendToNode_CSceneNode_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CSceneNode* returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_appendToNode_CSceneNode_Callback();
							return returnValue;
						}
						else
							return this->CRadarObject::appendToNode();
					}
					virtual void appendToNodeWithNorthAngle(_in const Real& lat, _in const Real& lon, _in const Real& alt, _in const EarthView::World::Spatial::Math::CVector3& localScale, _in const EarthView::World::Spatial::Math::CDegree& northAngle)
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_appendToNodeWithNorthAngle_void_Real_Real_Real_CVector3_CDegree_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_appendToNodeWithNorthAngle_void_Real_Real_Real_CVector3_CDegree_Callback(lat, lon, alt, &localScale, &northAngle);
						}
						else
							return this->CRadarObject::appendToNodeWithNorthAngle(lat, lon, alt, localScale, northAngle);
					}
					virtual EarthView::World::Graphic::CSceneNode* getParentNode()
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getParentNode_CSceneNode_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CSceneNode* returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getParentNode_CSceneNode_Callback();
							return returnValue;
						}
						else
							return this->CRadarObject::getParentNode();
					}
					virtual void detachFromParentNode()
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_detachFromParentNode_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_detachFromParentNode_void_Callback();
						}
						else
							return this->CRadarObject::detachFromParentNode();
					}
					virtual bool isIntersected(_in EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* another)
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_isIntersected_bool_CRadarObject_Callback != NULL && this->isCustomExtend())
						{
							bool returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_isIntersected_bool_CRadarObject_Callback(another);
							return returnValue;
						}
						else
							return this->CRadarObject::isIntersected(another);
					}
					virtual bool isIntersected(_in EarthView::World::Spatial::Geometry::CCurve* curve)
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_isIntersected_bool_CCurve_Callback != NULL && this->isCustomExtend())
						{
							bool returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_isIntersected_bool_CCurve_Callback(curve);
							return returnValue;
						}
						else
							return this->CRadarObject::isIntersected(curve);
					}
					virtual EarthView::World::Geometry3D::EVPointWithinType containsVertex(_in const EarthView::World::Spatial::Geometry::CPoint& point)
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_containsVertex_EVPointWithinType_CPoint_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Geometry3D::EVPointWithinType returnValue = (EarthView::World::Geometry3D::EVPointWithinType)m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_containsVertex_EVPointWithinType_CPoint_Callback(&point);
							return returnValue;
						}
						else
							return this->CRadarObject::containsVertex(point);
					}
					virtual void build()
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_build_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_build_void_Callback();
						}
						else
							return this->CRadarObject::build();
					}
					virtual void setVisible(_in const ev_bool& value)
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setVisible_void_ev_bool_Callback(value);
						}
						else
							return this->CRadarObject::setVisible(value);
					}
					virtual ev_bool getVisible() const
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getVisible_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getVisible_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CRadarObject::getVisible();
					}
					virtual void setEnvelopSolidVisible(_in const ev_bool& value)
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopSolidVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopSolidVisible_void_ev_bool_Callback(value);
						}
						else
							return this->CRadarObject::setEnvelopSolidVisible(value);
					}
					virtual ev_bool getEnvelopSolidVisible() const
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopSolidVisible_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopSolidVisible_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CRadarObject::getEnvelopSolidVisible();
					}
					virtual void setEnvelopFrameVisible(_in const ev_bool& value)
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopFrameVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopFrameVisible_void_ev_bool_Callback(value);
						}
						else
							return this->CRadarObject::setEnvelopFrameVisible(value);
					}
					virtual ev_bool getEnvelopFrameVisible() const
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopFrameVisible_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopFrameVisible_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CRadarObject::getEnvelopFrameVisible();
					}
					virtual void setScannerSolidVisible(_in const ev_bool& value)
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerSolidVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerSolidVisible_void_ev_bool_Callback(value);
						}
						else
							return this->CRadarObject::setScannerSolidVisible(value);
					}
					virtual ev_bool getScannerSolidVisible() const
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerSolidVisible_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerSolidVisible_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CRadarObject::getScannerSolidVisible();
					}
					virtual void setScannerFrameVisible(_in const ev_bool& value)
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerFrameVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerFrameVisible_void_ev_bool_Callback(value);
						}
						else
							return this->CRadarObject::setScannerFrameVisible(value);
					}
					virtual ev_bool getScannerFrameVisible() const
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerFrameVisible_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerFrameVisible_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CRadarObject::getScannerFrameVisible();
					}
					virtual void fromFile(_in const EVString& fileName)
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_fromFile_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* fileName_Char = fileName.makeBuffer();
							m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_fromFile_void_EVString_Callback(fileName_Char);
						}
						else
							return this->CRadarObject::fromFile(fileName);
					}
					virtual void toFile(_in const EVString& fileName)
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_toFile_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* fileName_Char = fileName.makeBuffer();
							m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_toFile_void_EVString_Callback(fileName_Char);
						}
						else
							return this->CRadarObject::toFile(fileName);
					}
					virtual ev_bool getRadarAlertResult()
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getRadarAlertResult_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getRadarAlertResult_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CRadarObject::getRadarAlertResult();
					}
					virtual void setEnvelopSolidMaterial(_in const EVString& materialName, _in const EVString& groupName)
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopSolidMaterial_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* materialName_Char = materialName.makeBuffer();
							char* groupName_Char = groupName.makeBuffer();
							m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopSolidMaterial_void_EVString_EVString_Callback(materialName_Char, groupName_Char);
						}
						else
							return this->CRadarObject::setEnvelopSolidMaterial(materialName, groupName);
					}
					virtual void setEnvelopFrameMaterial(_in const EVString& materialName, _in const EVString& groupName)
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopFrameMaterial_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* materialName_Char = materialName.makeBuffer();
							char* groupName_Char = groupName.makeBuffer();
							m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopFrameMaterial_void_EVString_EVString_Callback(materialName_Char, groupName_Char);
						}
						else
							return this->CRadarObject::setEnvelopFrameMaterial(materialName, groupName);
					}
					virtual void setScannerSolidMaterial(_in const EVString& materialName, _in const EVString& groupName)
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerSolidMaterial_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* materialName_Char = materialName.makeBuffer();
							char* groupName_Char = groupName.makeBuffer();
							m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerSolidMaterial_void_EVString_EVString_Callback(materialName_Char, groupName_Char);
						}
						else
							return this->CRadarObject::setScannerSolidMaterial(materialName, groupName);
					}
					virtual void setScannerFrameMaterial(_in const EVString& materialName, _in const EVString& groupName)
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerFrameMaterial_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* materialName_Char = materialName.makeBuffer();
							char* groupName_Char = groupName.makeBuffer();
							m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerFrameMaterial_void_EVString_EVString_Callback(materialName_Char, groupName_Char);
						}
						else
							return this->CRadarObject::setScannerFrameMaterial(materialName, groupName);
					}
					virtual EVString getRadarMaterialResourceGroup() const
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getRadarMaterialResourceGroup_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getRadarMaterialResourceGroup_EVString_Callback();
							return returnValue;
						}
						else
							return this->CRadarObject::getRadarMaterialResourceGroup();
					}
					virtual EVString getEnvelopSolidMaterial() const
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopSolidMaterial_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopSolidMaterial_EVString_Callback();
							return returnValue;
						}
						else
							return this->CRadarObject::getEnvelopSolidMaterial();
					}
					virtual EVString getEnvelopFrameMaterial() const
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopFrameMaterial_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopFrameMaterial_EVString_Callback();
							return returnValue;
						}
						else
							return this->CRadarObject::getEnvelopFrameMaterial();
					}
					virtual EVString getScannerSolidMaterial() const
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerSolidMaterial_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerSolidMaterial_EVString_Callback();
							return returnValue;
						}
						else
							return this->CRadarObject::getScannerSolidMaterial();
					}
					virtual EVString getScannerFrameMaterial() const
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerFrameMaterial_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerFrameMaterial_EVString_Callback();
							return returnValue;
						}
						else
							return this->CRadarObject::getScannerFrameMaterial();
					}
					virtual EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* computeTerrainShade(_in const EVString& name, _in const EVString& nodeName)
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_computeTerrainShade_CRadarObject_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							char* nodeName_Char = nodeName.makeBuffer();
							EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_computeTerrainShade_CRadarObject_EVString_EVString_Callback(name_Char, nodeName_Char);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CRadarObject::computeTerrainShade(name, nodeName);
					}
				};
				REGISTER_FACTORY_CLASS(CRadarObjectProxy);
				typedef void  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_CRadarAlertListener_actionPerFrame_void_CRadarObject_bool_bool_Callback)(_in EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* pRadar, _in const bool& isInRadar, _in const bool& isIntersected);
				class CRadarAlertListenerProxy : public EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::CRadarAlertListener
				{
				private:
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_CRadarAlertListener_actionPerFrame_void_CRadarObject_bool_bool_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_CRadarAlertListener_actionPerFrame_void_CRadarObject_bool_bool_Callback;
				public:
					CRadarAlertListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CRadarAlertListener(pList)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_CRadarAlertListener_actionPerFrame_void_CRadarObject_bool_bool_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_CRadarAlertListener_actionPerFrame_void_CRadarObject_bool_bool(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_CRadarAlertListener_actionPerFrame_void_CRadarObject_bool_bool_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_CRadarAlertListener_actionPerFrame_void_CRadarObject_bool_bool_Callback = pCallback;
					}
					virtual void actionPerFrame(_in EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* pRadar, _in const bool& isInRadar, _in const bool& isIntersected)
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_CRadarAlertListener_actionPerFrame_void_CRadarObject_bool_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_CRadarAlertListener_actionPerFrame_void_CRadarObject_bool_bool_Callback(pRadar, isInRadar, isIntersected);
						}
						else
							return this->CRadarAlertListener::actionPerFrame(pRadar, isInRadar, isIntersected);
					}
				};
				REGISTER_FACTORY_CLASS(CRadarAlertListenerProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_CRadarAlertListener_actionPerFrame_void_CRadarObject_bool_bool(void *pObjectXXXX, _in EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* pRadar, _in const bool& isInRadar, _in const bool& isIntersected )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::CRadarAlertListener* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::CRadarAlertListener*) pObjectXXXX;
					if (dynamic_cast<CRadarAlertListenerProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::CRadarAlertListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::CRadarAlertListener::actionPerFrame(pRadar, isInRadar, isIntersected);
					else
						ptrNativeObject->actionPerFrame(pRadar, isInRadar, isIntersected);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_CRadarAlertListener_actionPerFrame_void_CRadarObject_bool_bool( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_CRadarAlertListener_actionPerFrame_void_CRadarObject_bool_bool_Callback* pCallback )
				{
					CRadarAlertListenerProxy* ptr = dynamic_cast<CRadarAlertListenerProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::CRadarAlertListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_CRadarAlertListener_actionPerFrame_void_CRadarObject_bool_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_CRadarAlertListener_actionPerFrame_void_CRadarObject_bool_bool_NoVirtual(void *pObjectXXXX, _in EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* pRadar, _in const bool& isInRadar, _in const bool& isIntersected )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::CRadarAlertListener* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::CRadarAlertListener*) pObjectXXXX;
					ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::CRadarAlertListener::actionPerFrame(pRadar, isInRadar, isIntersected);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerName_EVString(void *pObjectXXXX )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getScannerName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_clone_CRadarObject_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					if (dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*)ptrNativeObject) != NULL)
					{
						EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::clone(name1);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_clone_CRadarObject_EVString( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_clone_CRadarObject_EVString_Callback* pCallback )
				{
					CRadarObjectProxy* ptr = dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_clone_CRadarObject_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_clone_CRadarObject_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::clone(name1);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneNode*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_appendToNode_CSceneNode(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					if (dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Graphic::CSceneNode* objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::appendToNode();
						return objXXXX;
					}
					else
					{
						EarthView::World::Graphic::CSceneNode* objXXXX = ptrNativeObject->appendToNode();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_appendToNode_CSceneNode( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_appendToNode_CSceneNode_Callback* pCallback )
				{
					CRadarObjectProxy* ptr = dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_appendToNode_CSceneNode(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneNode*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_appendToNode_CSceneNode_NoVirtual(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					EarthView::World::Graphic::CSceneNode* objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::appendToNode();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_appendToNodeWithNorthAngle_void_Real_Real_Real_CVector3_CDegree(void *pObjectXXXX, _in const Real& lat, _in const Real& lon, _in const Real& alt, _in const void* localScale, _in const void* northAngle )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					if (dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::appendToNodeWithNorthAngle(lat, lon, alt, *(EarthView::World::Spatial::Math::CVector3*)localScale, *(EarthView::World::Spatial::Math::CDegree*)northAngle);
					else
						ptrNativeObject->appendToNodeWithNorthAngle(lat, lon, alt, *(EarthView::World::Spatial::Math::CVector3*)localScale, *(EarthView::World::Spatial::Math::CDegree*)northAngle);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_appendToNodeWithNorthAngle_void_Real_Real_Real_CVector3_CDegree( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_appendToNodeWithNorthAngle_void_Real_Real_Real_CVector3_CDegree_Callback* pCallback )
				{
					CRadarObjectProxy* ptr = dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_appendToNodeWithNorthAngle_void_Real_Real_Real_CVector3_CDegree(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_appendToNodeWithNorthAngle_void_Real_Real_Real_CVector3_CDegree_NoVirtual(void *pObjectXXXX, _in const Real& lat, _in const Real& lon, _in const Real& alt, _in const void* localScale, _in const void* northAngle )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::appendToNodeWithNorthAngle(lat, lon, alt, *(EarthView::World::Spatial::Math::CVector3*)localScale, *(EarthView::World::Spatial::Math::CDegree*)northAngle);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneNode*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getParentNode_CSceneNode(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					if (dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Graphic::CSceneNode* objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::getParentNode();
						return objXXXX;
					}
					else
					{
						EarthView::World::Graphic::CSceneNode* objXXXX = ptrNativeObject->getParentNode();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getParentNode_CSceneNode( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getParentNode_CSceneNode_Callback* pCallback )
				{
					CRadarObjectProxy* ptr = dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getParentNode_CSceneNode(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneNode*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getParentNode_CSceneNode_NoVirtual(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					EarthView::World::Graphic::CSceneNode* objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::getParentNode();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_detachFromParentNode_void(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					if (dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::detachFromParentNode();
					else
						ptrNativeObject->detachFromParentNode();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_detachFromParentNode_void( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_detachFromParentNode_void_Callback* pCallback )
				{
					CRadarObjectProxy* ptr = dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_detachFromParentNode_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_detachFromParentNode_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::detachFromParentNode();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_isAppended_ev_bool(void *pObjectXXXX )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isAppended();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getType_CRadarType(void *pObjectXXXX )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarType objXXXX = ptrNativeObject->getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Geometry3D::CSimpleRenderableEx*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopSolid_CSimpleRenderableEx(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					EarthView::World::Geometry3D::CSimpleRenderableEx* objXXXX = ptrNativeObject->getEnvelopSolid();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Geometry3D::CSimpleRenderableEx*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopFrame_CSimpleRenderableEx(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					EarthView::World::Geometry3D::CSimpleRenderableEx* objXXXX = ptrNativeObject->getEnvelopFrame();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Geometry3D::CSimpleRenderableEx*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerSolid_CSimpleRenderableEx(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					EarthView::World::Geometry3D::CSimpleRenderableEx* objXXXX = ptrNativeObject->getScannerSolid();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Geometry3D::CSimpleRenderableEx*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerFrame_CSimpleRenderableEx(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					EarthView::World::Geometry3D::CSimpleRenderableEx* objXXXX = ptrNativeObject->getScannerFrame();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_envelopSolidUnions_CRadarObject_EVString_CRadarObject_CVector3(void *pObjectXXXX, _in const char* name, _in EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* another, _out void* translate )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* objXXXX = ptrNativeObject->envelopSolidUnions(name1, another, *(EarthView::World::Spatial::Math::CVector3*)translate);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_envelopSolidIntersect_CRadarObject_EVString_CRadarObject_CVector3(void *pObjectXXXX, _in const char* name, _in EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* another, _out void* translate )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* objXXXX = ptrNativeObject->envelopSolidIntersect(name1, another, *(EarthView::World::Spatial::Math::CVector3*)translate);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_envelopSolidMinus_CRadarObject_EVString_CRadarObject_CVector3(void *pObjectXXXX, _in const char* name, _in EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* another, _out void* translate )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* objXXXX = ptrNativeObject->envelopSolidMinus(name1, another, *(EarthView::World::Spatial::Math::CVector3*)translate);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_envelopSolidDifference_CRadarObject_EVString_CRadarObject_CVector3(void *pObjectXXXX, _in const char* name, _in EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* another, _out void* translate )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* objXXXX = ptrNativeObject->envelopSolidDifference(name1, another, *(EarthView::World::Spatial::Math::CVector3*)translate);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_envelopSolidSliceAndClassify_void_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CCoordinateSequence_CVector3(void *pObjectXXXX, _in EarthView::World::Geometry3D::CSimpleRenderableEx* another, _out void* result, _out void* sharedEdges, _out void* translate )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					ptrNativeObject->envelopSolidSliceAndClassify(another, *(EarthView::World::Geometry3D::CFaceWithSimpleRenderableExSet*)result, *(EarthView::World::Spatial::Geometry::CCoordinateSequence*)sharedEdges, *(EarthView::World::Spatial::Math::CVector3*)translate);
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_isIntersected_bool_CRadarObject(void *pObjectXXXX, _in EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* another )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					if (dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*)ptrNativeObject) != NULL)
					{
						bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::isIntersected(another);
						return objXXXX;
					}
					else
					{
						bool objXXXX = ptrNativeObject->isIntersected(another);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_isIntersected_bool_CRadarObject( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_isIntersected_bool_CRadarObject_Callback* pCallback )
				{
					CRadarObjectProxy* ptr = dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_isIntersected_bool_CRadarObject(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_isIntersected_bool_CRadarObject_NoVirtual(void *pObjectXXXX, _in EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* another )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::isIntersected(another);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_isIntersected_bool_CCurve(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::CCurve* curve )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					if (dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*)ptrNativeObject) != NULL)
					{
						bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::isIntersected(curve);
						return objXXXX;
					}
					else
					{
						bool objXXXX = ptrNativeObject->isIntersected(curve);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_isIntersected_bool_CCurve( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_isIntersected_bool_CCurve_Callback* pCallback )
				{
					CRadarObjectProxy* ptr = dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_isIntersected_bool_CCurve(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_isIntersected_bool_CCurve_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::CCurve* curve )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::isIntersected(curve);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_containsVertex_EVPointWithinType_CPoint(void *pObjectXXXX, _in const void* point )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					if (dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Geometry3D::EVPointWithinType objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::containsVertex(*(EarthView::World::Spatial::Geometry::CPoint*)point);
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Geometry3D::EVPointWithinType objXXXX = ptrNativeObject->containsVertex(*(EarthView::World::Spatial::Geometry::CPoint*)point);
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_containsVertex_EVPointWithinType_CPoint( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_containsVertex_EVPointWithinType_CPoint_Callback* pCallback )
				{
					CRadarObjectProxy* ptr = dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_containsVertex_EVPointWithinType_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_containsVertex_EVPointWithinType_CPoint_NoVirtual(void *pObjectXXXX, _in const void* point )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					EarthView::World::Geometry3D::EVPointWithinType objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::containsVertex(*(EarthView::World::Spatial::Geometry::CPoint*)point);
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_build_void(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					if (dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::build();
					else
						ptrNativeObject->build();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_build_void( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_build_void_Callback* pCallback )
				{
					CRadarObjectProxy* ptr = dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_build_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_build_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::build();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setVisible_void_ev_bool(void *pObjectXXXX, _in const ev_bool& value )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					if (dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::setVisible(value);
					else
						ptrNativeObject->setVisible(value);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setVisible_void_ev_bool_Callback* pCallback )
				{
					CRadarObjectProxy* ptr = dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setVisible_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setVisible_void_ev_bool_NoVirtual(void *pObjectXXXX, _in const ev_bool& value )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::setVisible(value);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getVisible_ev_bool(void *pObjectXXXX )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					if (dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::getVisible();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getVisible();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getVisible_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getVisible_ev_bool_Callback* pCallback )
				{
					CRadarObjectProxy* ptr = dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getVisible_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getVisible_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::getVisible();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopSolidVisible_void_ev_bool(void *pObjectXXXX, _in const ev_bool& value )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					if (dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::setEnvelopSolidVisible(value);
					else
						ptrNativeObject->setEnvelopSolidVisible(value);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopSolidVisible_void_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopSolidVisible_void_ev_bool_Callback* pCallback )
				{
					CRadarObjectProxy* ptr = dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopSolidVisible_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopSolidVisible_void_ev_bool_NoVirtual(void *pObjectXXXX, _in const ev_bool& value )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::setEnvelopSolidVisible(value);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopSolidVisible_ev_bool(void *pObjectXXXX )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					if (dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::getEnvelopSolidVisible();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getEnvelopSolidVisible();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopSolidVisible_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopSolidVisible_ev_bool_Callback* pCallback )
				{
					CRadarObjectProxy* ptr = dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopSolidVisible_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopSolidVisible_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::getEnvelopSolidVisible();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopFrameVisible_void_ev_bool(void *pObjectXXXX, _in const ev_bool& value )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					if (dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::setEnvelopFrameVisible(value);
					else
						ptrNativeObject->setEnvelopFrameVisible(value);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopFrameVisible_void_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopFrameVisible_void_ev_bool_Callback* pCallback )
				{
					CRadarObjectProxy* ptr = dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopFrameVisible_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopFrameVisible_void_ev_bool_NoVirtual(void *pObjectXXXX, _in const ev_bool& value )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::setEnvelopFrameVisible(value);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopFrameVisible_ev_bool(void *pObjectXXXX )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					if (dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::getEnvelopFrameVisible();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getEnvelopFrameVisible();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopFrameVisible_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopFrameVisible_ev_bool_Callback* pCallback )
				{
					CRadarObjectProxy* ptr = dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopFrameVisible_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopFrameVisible_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::getEnvelopFrameVisible();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerSolidVisible_void_ev_bool(void *pObjectXXXX, _in const ev_bool& value )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					if (dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::setScannerSolidVisible(value);
					else
						ptrNativeObject->setScannerSolidVisible(value);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerSolidVisible_void_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerSolidVisible_void_ev_bool_Callback* pCallback )
				{
					CRadarObjectProxy* ptr = dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerSolidVisible_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerSolidVisible_void_ev_bool_NoVirtual(void *pObjectXXXX, _in const ev_bool& value )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::setScannerSolidVisible(value);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerSolidVisible_ev_bool(void *pObjectXXXX )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					if (dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::getScannerSolidVisible();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getScannerSolidVisible();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerSolidVisible_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerSolidVisible_ev_bool_Callback* pCallback )
				{
					CRadarObjectProxy* ptr = dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerSolidVisible_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerSolidVisible_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::getScannerSolidVisible();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerFrameVisible_void_ev_bool(void *pObjectXXXX, _in const ev_bool& value )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					if (dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::setScannerFrameVisible(value);
					else
						ptrNativeObject->setScannerFrameVisible(value);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerFrameVisible_void_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerFrameVisible_void_ev_bool_Callback* pCallback )
				{
					CRadarObjectProxy* ptr = dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerFrameVisible_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerFrameVisible_void_ev_bool_NoVirtual(void *pObjectXXXX, _in const ev_bool& value )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::setScannerFrameVisible(value);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerFrameVisible_ev_bool(void *pObjectXXXX )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					if (dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::getScannerFrameVisible();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getScannerFrameVisible();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerFrameVisible_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerFrameVisible_ev_bool_Callback* pCallback )
				{
					CRadarObjectProxy* ptr = dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerFrameVisible_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerFrameVisible_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::getScannerFrameVisible();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_fromFile_void_EVString(void *pObjectXXXX, _in const char* fileName )
				{
					EarthView::World::Core::ev_string fileName1 = fileName;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					if (dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::fromFile(fileName1);
					else
						ptrNativeObject->fromFile(fileName1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_fromFile_void_EVString( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_fromFile_void_EVString_Callback* pCallback )
				{
					CRadarObjectProxy* ptr = dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_fromFile_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_fromFile_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* fileName )
				{
					EarthView::World::Core::ev_string fileName1 = fileName;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::fromFile(fileName1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_toFile_void_EVString(void *pObjectXXXX, _in const char* fileName )
				{
					EarthView::World::Core::ev_string fileName1 = fileName;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					if (dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::toFile(fileName1);
					else
						ptrNativeObject->toFile(fileName1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_toFile_void_EVString( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_toFile_void_EVString_Callback* pCallback )
				{
					CRadarObjectProxy* ptr = dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_toFile_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_toFile_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* fileName )
				{
					EarthView::World::Core::ev_string fileName1 = fileName;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::toFile(fileName1);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getRadarAlertResult_ev_bool(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					if (dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::getRadarAlertResult();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getRadarAlertResult();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getRadarAlertResult_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getRadarAlertResult_ev_bool_Callback* pCallback )
				{
					CRadarObjectProxy* ptr = dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getRadarAlertResult_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getRadarAlertResult_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::getRadarAlertResult();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopSolidMaterial_void_EVString_EVString(void *pObjectXXXX, _in const char* materialName, _in const char* groupName )
				{
					EarthView::World::Core::ev_string materialName1 = materialName;
					EarthView::World::Core::ev_string groupName1 = groupName;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					if (dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::setEnvelopSolidMaterial(materialName1, groupName1);
					else
						ptrNativeObject->setEnvelopSolidMaterial(materialName1, groupName1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopSolidMaterial_void_EVString_EVString( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopSolidMaterial_void_EVString_EVString_Callback* pCallback )
				{
					CRadarObjectProxy* ptr = dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopSolidMaterial_void_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopSolidMaterial_void_EVString_EVString_NoVirtual(void *pObjectXXXX, _in const char* materialName, _in const char* groupName )
				{
					EarthView::World::Core::ev_string materialName1 = materialName;
					EarthView::World::Core::ev_string groupName1 = groupName;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::setEnvelopSolidMaterial(materialName1, groupName1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopFrameMaterial_void_EVString_EVString(void *pObjectXXXX, _in const char* materialName, _in const char* groupName )
				{
					EarthView::World::Core::ev_string materialName1 = materialName;
					EarthView::World::Core::ev_string groupName1 = groupName;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					if (dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::setEnvelopFrameMaterial(materialName1, groupName1);
					else
						ptrNativeObject->setEnvelopFrameMaterial(materialName1, groupName1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopFrameMaterial_void_EVString_EVString( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopFrameMaterial_void_EVString_EVString_Callback* pCallback )
				{
					CRadarObjectProxy* ptr = dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopFrameMaterial_void_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopFrameMaterial_void_EVString_EVString_NoVirtual(void *pObjectXXXX, _in const char* materialName, _in const char* groupName )
				{
					EarthView::World::Core::ev_string materialName1 = materialName;
					EarthView::World::Core::ev_string groupName1 = groupName;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::setEnvelopFrameMaterial(materialName1, groupName1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerSolidMaterial_void_EVString_EVString(void *pObjectXXXX, _in const char* materialName, _in const char* groupName )
				{
					EarthView::World::Core::ev_string materialName1 = materialName;
					EarthView::World::Core::ev_string groupName1 = groupName;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					if (dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::setScannerSolidMaterial(materialName1, groupName1);
					else
						ptrNativeObject->setScannerSolidMaterial(materialName1, groupName1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerSolidMaterial_void_EVString_EVString( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerSolidMaterial_void_EVString_EVString_Callback* pCallback )
				{
					CRadarObjectProxy* ptr = dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerSolidMaterial_void_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerSolidMaterial_void_EVString_EVString_NoVirtual(void *pObjectXXXX, _in const char* materialName, _in const char* groupName )
				{
					EarthView::World::Core::ev_string materialName1 = materialName;
					EarthView::World::Core::ev_string groupName1 = groupName;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::setScannerSolidMaterial(materialName1, groupName1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerFrameMaterial_void_EVString_EVString(void *pObjectXXXX, _in const char* materialName, _in const char* groupName )
				{
					EarthView::World::Core::ev_string materialName1 = materialName;
					EarthView::World::Core::ev_string groupName1 = groupName;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					if (dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::setScannerFrameMaterial(materialName1, groupName1);
					else
						ptrNativeObject->setScannerFrameMaterial(materialName1, groupName1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerFrameMaterial_void_EVString_EVString( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerFrameMaterial_void_EVString_EVString_Callback* pCallback )
				{
					CRadarObjectProxy* ptr = dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerFrameMaterial_void_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerFrameMaterial_void_EVString_EVString_NoVirtual(void *pObjectXXXX, _in const char* materialName, _in const char* groupName )
				{
					EarthView::World::Core::ev_string materialName1 = materialName;
					EarthView::World::Core::ev_string groupName1 = groupName;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::setScannerFrameMaterial(materialName1, groupName1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getRadarMaterialResourceGroup_EVString(void *pObjectXXXX )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					if (dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::getRadarMaterialResourceGroup();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getRadarMaterialResourceGroup();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getRadarMaterialResourceGroup_EVString( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getRadarMaterialResourceGroup_EVString_Callback* pCallback )
				{
					CRadarObjectProxy* ptr = dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getRadarMaterialResourceGroup_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getRadarMaterialResourceGroup_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::getRadarMaterialResourceGroup();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopSolidMaterial_EVString(void *pObjectXXXX )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					if (dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::getEnvelopSolidMaterial();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getEnvelopSolidMaterial();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopSolidMaterial_EVString( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopSolidMaterial_EVString_Callback* pCallback )
				{
					CRadarObjectProxy* ptr = dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopSolidMaterial_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopSolidMaterial_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::getEnvelopSolidMaterial();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopFrameMaterial_EVString(void *pObjectXXXX )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					if (dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::getEnvelopFrameMaterial();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getEnvelopFrameMaterial();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopFrameMaterial_EVString( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopFrameMaterial_EVString_Callback* pCallback )
				{
					CRadarObjectProxy* ptr = dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopFrameMaterial_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopFrameMaterial_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::getEnvelopFrameMaterial();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerSolidMaterial_EVString(void *pObjectXXXX )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					if (dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::getScannerSolidMaterial();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getScannerSolidMaterial();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerSolidMaterial_EVString( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerSolidMaterial_EVString_Callback* pCallback )
				{
					CRadarObjectProxy* ptr = dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerSolidMaterial_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerSolidMaterial_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::getScannerSolidMaterial();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerFrameMaterial_EVString(void *pObjectXXXX )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					if (dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::getScannerFrameMaterial();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getScannerFrameMaterial();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerFrameMaterial_EVString( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerFrameMaterial_EVString_Callback* pCallback )
				{
					CRadarObjectProxy* ptr = dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerFrameMaterial_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerFrameMaterial_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::getScannerFrameMaterial();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setRadarAlertListener_void_CRadarAlertListener(void *pObjectXXXX, _in EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::CRadarAlertListener* ref_pListener )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					ptrNativeObject->setRadarAlertListener(ref_pListener);
				}
				extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::CRadarAlertListener*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getRadarAlertListener_CRadarAlertListener(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::CRadarAlertListener* objXXXX = ptrNativeObject->getRadarAlertListener();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setNeedAlert_void_bool(void *pObjectXXXX, _in const bool& value )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					ptrNativeObject->setNeedAlert(value);
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getNeedAlert_bool(void *pObjectXXXX )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->getNeedAlert();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getLockScannerToTarget_bool(void *pObjectXXXX )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->getLockScannerToTarget();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setLockScannerToTarget_void_bool(void *pObjectXXXX, _in const bool& value )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					ptrNativeObject->setLockScannerToTarget(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setModelObjectPosition_void_CVector3(void *pObjectXXXX, _in const void* pos )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					ptrNativeObject->setModelObjectPosition(*(EarthView::World::Spatial::Math::CVector3*)pos);
				}
				extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getRadarCharacter_CRadarCharacter(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* objXXXX = ptrNativeObject->getRadarCharacter();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_computeTerrainShade_CRadarObject_EVString_EVString(void *pObjectXXXX, _in const char* name, _in const char* nodeName )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Core::ev_string nodeName1 = nodeName;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					if (dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*)ptrNativeObject) != NULL)
					{
						EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::computeTerrainShade(name1, nodeName1);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_computeTerrainShade_CRadarObject_EVString_EVString( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_computeTerrainShade_CRadarObject_EVString_EVString_Callback* pCallback )
				{
					CRadarObjectProxy* ptr = dynamic_cast<CRadarObjectProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_computeTerrainShade_CRadarObject_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_computeTerrainShade_CRadarObject_EVString_EVString_NoVirtual(void *pObjectXXXX, _in const char* name, _in const char* nodeName )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Core::ev_string nodeName1 = nodeName;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::computeTerrainShade(name1, nodeName1);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_refresh_void(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					ptrNativeObject->refresh();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_convertToMesh_CMeshPtr_EVString_EVString(void *pObjectXXXX, _in const char* meshName, _in const char* groupName )
				{
					EarthView::World::Core::ev_string meshName1 = meshName;
					EarthView::World::Core::ev_string groupName1 = groupName;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject*) pObjectXXXX;
					EarthView::World::Graphic::CMeshPtr objXXXX = ptrNativeObject->convertToMesh(meshName1, groupName1);
					EarthView::World::Graphic::CMeshPtr *pXXXX = new EarthView::World::Graphic::CMeshPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
		}
	}
}
