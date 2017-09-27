/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3danalysisobject/math3dsection.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Analysis
			{
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mGeoPoints( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CSectionLineInfo* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CSectionLineInfo*) pObjectXXXX;
					EarthView::World::Spatial::Math::VertexList &objXXXX = ptrNativeObject->mGeoPoints;
					EarthView::World::Spatial::Math::VertexList *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mGeoPoints( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::Analysis::CSectionLineInfo*)pObjectXXXX)->mGeoPoints = *(EarthView::World::Spatial::Math::VertexList*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mSlopeVec( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CSectionLineInfo* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CSectionLineInfo*) pObjectXXXX;
					EarthView::World::Core::RealVector &objXXXX = ptrNativeObject->mSlopeVec;
					EarthView::World::Core::RealVector *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mSlopeVec( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::Analysis::CSectionLineInfo*)pObjectXXXX)->mSlopeVec = *(EarthView::World::Core::RealVector*)value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMaxSlope( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CSectionLineInfo* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CSectionLineInfo*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mMaxSlope;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMaxSlope( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::Analysis::CSectionLineInfo*)pObjectXXXX)->mMaxSlope = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMinSlope( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CSectionLineInfo* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CSectionLineInfo*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mMinSlope;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMinSlope( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::Analysis::CSectionLineInfo*)pObjectXXXX)->mMinSlope = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMaxAltitude( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CSectionLineInfo* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CSectionLineInfo*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mMaxAltitude;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMaxAltitude( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::Analysis::CSectionLineInfo*)pObjectXXXX)->mMaxAltitude = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMinAltitude( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CSectionLineInfo* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CSectionLineInfo*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mMinAltitude;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMinAltitude( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::Analysis::CSectionLineInfo*)pObjectXXXX)->mMinAltitude = value;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMaxSlopeIndex( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CSectionLineInfo* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CSectionLineInfo*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->mMaxSlopeIndex;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMaxSlopeIndex( void *pObjectXXXX, ev_int32  value )
				{
					((EarthView::World::Spatial3D::Analysis::CSectionLineInfo*)pObjectXXXX)->mMaxSlopeIndex = value;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMinSlopeIndex( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CSectionLineInfo* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CSectionLineInfo*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->mMinSlopeIndex;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMinSlopeIndex( void *pObjectXXXX, ev_int32  value )
				{
					((EarthView::World::Spatial3D::Analysis::CSectionLineInfo*)pObjectXXXX)->mMinSlopeIndex = value;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMaxAltitudeIndex( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CSectionLineInfo* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CSectionLineInfo*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->mMaxAltitudeIndex;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMaxAltitudeIndex( void *pObjectXXXX, ev_int32  value )
				{
					((EarthView::World::Spatial3D::Analysis::CSectionLineInfo*)pObjectXXXX)->mMaxAltitudeIndex = value;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMinAltitudeIndex( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CSectionLineInfo* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CSectionLineInfo*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->mMinAltitudeIndex;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMinAltitudeIndex( void *pObjectXXXX, ev_int32  value )
				{
					((EarthView::World::Spatial3D::Analysis::CSectionLineInfo*)pObjectXXXX)->mMinAltitudeIndex = value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMaxSlopePoint( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CSectionLineInfo* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CSectionLineInfo*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->mMaxSlopePoint;
					EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMaxSlopePoint( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::Analysis::CSectionLineInfo*)pObjectXXXX)->mMaxSlopePoint = *(EarthView::World::Spatial::Math::CVector3*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMinSlopePoint( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CSectionLineInfo* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CSectionLineInfo*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->mMinSlopePoint;
					EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMinSlopePoint( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::Analysis::CSectionLineInfo*)pObjectXXXX)->mMinSlopePoint = *(EarthView::World::Spatial::Math::CVector3*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMaxAltitudePoint( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CSectionLineInfo* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CSectionLineInfo*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->mMaxAltitudePoint;
					EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMaxAltitudePoint( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::Analysis::CSectionLineInfo*)pObjectXXXX)->mMaxAltitudePoint = *(EarthView::World::Spatial::Math::CVector3*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMinAltitudePoint( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CSectionLineInfo* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CSectionLineInfo*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->mMinAltitudePoint;
					EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMinAltitudePoint( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::Analysis::CSectionLineInfo*)pObjectXXXX)->mMinAltitudePoint = *(EarthView::World::Spatial::Math::CVector3*)value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mClampedDistance( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CSectionLineInfo* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CSectionLineInfo*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mClampedDistance;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mClampedDistance( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::Analysis::CSectionLineInfo*)pObjectXXXX)->mClampedDistance = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mStraightDistance( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CSectionLineInfo* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CSectionLineInfo*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mStraightDistance;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mStraightDistance( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::Analysis::CSectionLineInfo*)pObjectXXXX)->mStraightDistance = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mProjectDistance( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CSectionLineInfo* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CSectionLineInfo*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mProjectDistance;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mProjectDistance( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::Analysis::CSectionLineInfo*)pObjectXXXX)->mProjectDistance = value;
				}
				typedef const EarthView::World::Spatial3D::Analysis::CAltitude3DListener*  ( _stdcall EarthView_World_Spatial3D_Analysis_CMath3DSection_getAltitude3DListener_CAltitude3DListener_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CMath3DSection_setAltitude3DListener_void_CAltitude3DListener_Callback)(_in EarthView::World::Spatial3D::Analysis::CAltitude3DListener* ref_pListener);
				class CMath3DSectionProxy : public EarthView::World::Spatial3D::Analysis::CMath3DSection
				{
				private:
					EarthView_World_Spatial3D_Analysis_CMath3DSection_getAltitude3DListener_CAltitude3DListener_Callback* m_EarthView_World_Spatial3D_Analysis_CMath3DSection_getAltitude3DListener_CAltitude3DListener_Callback;
					EarthView_World_Spatial3D_Analysis_CMath3DSection_setAltitude3DListener_void_CAltitude3DListener_Callback* m_EarthView_World_Spatial3D_Analysis_CMath3DSection_setAltitude3DListener_void_CAltitude3DListener_Callback;
				public:
					CMath3DSectionProxy(EarthView::World::Core::CNameValuePairList *pList) : CMath3DSection(pList)
					{
						m_EarthView_World_Spatial3D_Analysis_CMath3DSection_getAltitude3DListener_CAltitude3DListener_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CMath3DSection_setAltitude3DListener_void_CAltitude3DListener_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CMath3DSection_getAltitude3DListener_CAltitude3DListener(EarthView_World_Spatial3D_Analysis_CMath3DSection_getAltitude3DListener_CAltitude3DListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CMath3DSection_getAltitude3DListener_CAltitude3DListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CMath3DSection_setAltitude3DListener_void_CAltitude3DListener(EarthView_World_Spatial3D_Analysis_CMath3DSection_setAltitude3DListener_void_CAltitude3DListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CMath3DSection_setAltitude3DListener_void_CAltitude3DListener_Callback = pCallback;
					}
					virtual const EarthView::World::Spatial3D::Analysis::CAltitude3DListener* getAltitude3DListener() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CMath3DSection_getAltitude3DListener_CAltitude3DListener_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial3D::Analysis::CAltitude3DListener* returnValue = m_EarthView_World_Spatial3D_Analysis_CMath3DSection_getAltitude3DListener_CAltitude3DListener_Callback();
							return returnValue;
						}
						else
							return this->CMath3DSection::getAltitude3DListener();
					}
					virtual void setAltitude3DListener(_in EarthView::World::Spatial3D::Analysis::CAltitude3DListener* ref_pListener)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CMath3DSection_setAltitude3DListener_void_CAltitude3DListener_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CMath3DSection_setAltitude3DListener_void_CAltitude3DListener_Callback(ref_pListener);
						}
						else
							return this->CMath3DSection::setAltitude3DListener(ref_pListener);
					}
				};
				REGISTER_FACTORY_CLASS(CMath3DSectionProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DSection_calcuSectionInfo_void_VertexList_CSectionLineInfo(void *pObjectXXXX, _in const void* inPts, _out void* sectionInfo )
				{
					EarthView::World::Spatial3D::Analysis::CMath3DSection* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DSection*) pObjectXXXX;
					ptrNativeObject->calcuSectionInfo(*(EarthView::World::Spatial::Math::VertexList*)inPts, *(EarthView::World::Spatial3D::Analysis::CSectionLineInfo*)sectionInfo);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DSection_calcuSectionLineInfo_void_ev_bool_ev_real64_CVector3_CVector3_VertexList_CSectionLineInfo(void *pObjectXXXX, _in ev_bool detail, _inout ev_real64& interval, _in void* p0, _in void* p1, _out void* vertices, _out EarthView::World::Spatial3D::Analysis::CSectionLineInfo* pSectionInfo )
				{
					EarthView::World::Spatial3D::Analysis::CMath3DSection* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DSection*) pObjectXXXX;
					ptrNativeObject->calcuSectionLineInfo(detail, interval, *(EarthView::World::Spatial::Math::CVector3*)p0, *(EarthView::World::Spatial::Math::CVector3*)p1, *(EarthView::World::Spatial::Math::VertexList*)vertices, pSectionInfo);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DSection_calculateOnServer_void_VertexList_CSectionLineInfo(void *pObjectXXXX, _in const void* inPts, _out void* sectionInfo )
				{
					EarthView::World::Spatial3D::Analysis::CMath3DSection* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DSection*) pObjectXXXX;
					ptrNativeObject->calculateOnServer(*(EarthView::World::Spatial::Math::VertexList*)inPts, *(EarthView::World::Spatial3D::Analysis::CSectionLineInfo*)sectionInfo);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CMath3DSection_getAltitude3DListener_CAltitude3DListener( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CMath3DSection_getAltitude3DListener_CAltitude3DListener_Callback* pCallback )
				{
					CMath3DSectionProxy* ptr = dynamic_cast<CMath3DSectionProxy*>((EarthView::World::Spatial3D::Analysis::CMath3DSection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CMath3DSection_getAltitude3DListener_CAltitude3DListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CMath3DSection_setAltitude3DListener_void_CAltitude3DListener( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CMath3DSection_setAltitude3DListener_void_CAltitude3DListener_Callback* pCallback )
				{
					CMath3DSectionProxy* ptr = dynamic_cast<CMath3DSectionProxy*>((EarthView::World::Spatial3D::Analysis::CMath3DSection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CMath3DSection_setAltitude3DListener_void_CAltitude3DListener(pCallback);
					}
				}
			}
		}
	}
}
