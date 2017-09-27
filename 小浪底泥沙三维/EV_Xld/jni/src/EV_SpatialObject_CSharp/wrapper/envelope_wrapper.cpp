/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialobject/geometry/envelope.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Geometry
			{
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Geometry_CEnvelope_getMinX_ev_real64_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Geometry_CEnvelope_getMaxX_ev_real64_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Geometry_CEnvelope_getMinY_ev_real64_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Geometry_CEnvelope_getMaxY_ev_real64_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Geometry_CEnvelope_getMinZ_ev_real64_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Geometry_CEnvelope_getMaxZ_ev_real64_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Geometry_CEnvelope_getWidth_ev_real64_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Geometry_CEnvelope_getHeight_ev_real64_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Geometry_CEnvelope_getDepth_ev_real64_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CEnvelope_isBox_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CEnvelope_isValid_ev_bool_Callback)();
				typedef EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_Geometry_CEnvelope_clone_IEnvelope_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CEnvelope_setMinX_void_ev_real64_Callback)(_in ev_real64 value);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CEnvelope_setMaxX_void_ev_real64_Callback)(_in ev_real64 value);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CEnvelope_setMinY_void_ev_real64_Callback)(_in ev_real64 value);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CEnvelope_setMaxY_void_ev_real64_Callback)(_in ev_real64 value);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CEnvelope_setMinZ_void_ev_real64_Callback)(_in ev_real64 value);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CEnvelope_setMaxZ_void_ev_real64_Callback)(_in ev_real64 value);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CEnvelope_containsCoordinate_ev_bool_ev_real64_ev_real64_ev_real64_EVDimensionType_Callback)(_in ev_real64 x, _in ev_real64 y, _in ev_real64 z, _in int type);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CEnvelope_containsEnvelope_ev_bool_IEnvelope_EVDimensionType_Callback)(_in const void* envelope, _in int type);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CEnvelope_isIntersects_ev_bool_IEnvelope_EVDimensionType_Callback)(_in const void* envelope, _in int type);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CEnvelope_expands_void_ev_bool_ev_real64_ev_real64_ev_real64_Callback)(_in ev_bool isRadio, _in ev_real64 scaleX, _in ev_real64 scaleY, _in ev_real64 scaleZ);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CEnvelope_unions_void_IEnvelope_EVDimensionType_Callback)(_in const void* envelope, _in int type);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CEnvelope_intersects_void_IEnvelope_EVDimensionType_Callback)(_in const void* envelope, _in int type);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CEnvelope_equals_ev_bool_IEnvelope_ev_real64_EVDimensionType_Callback)(_in const void* envelope, _in ev_real64 tolerance, _in int type);
				class CEnvelopeProxy : public EarthView::World::Spatial::Geometry::CEnvelope
				{
				private:
					EarthView_World_Spatial_Geometry_CEnvelope_getMinX_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CEnvelope_getMinX_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CEnvelope_getMaxX_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CEnvelope_getMaxX_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CEnvelope_getMinY_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CEnvelope_getMinY_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CEnvelope_getMaxY_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CEnvelope_getMaxY_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CEnvelope_getMinZ_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CEnvelope_getMinZ_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CEnvelope_getMaxZ_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CEnvelope_getMaxZ_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CEnvelope_getWidth_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CEnvelope_getWidth_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CEnvelope_getHeight_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CEnvelope_getHeight_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CEnvelope_getDepth_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CEnvelope_getDepth_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CEnvelope_isBox_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CEnvelope_isBox_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CEnvelope_isValid_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CEnvelope_isValid_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CEnvelope_clone_IEnvelope_Callback* m_EarthView_World_Spatial_Geometry_CEnvelope_clone_IEnvelope_Callback;
					EarthView_World_Spatial_Geometry_CEnvelope_setMinX_void_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CEnvelope_setMinX_void_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CEnvelope_setMaxX_void_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CEnvelope_setMaxX_void_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CEnvelope_setMinY_void_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CEnvelope_setMinY_void_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CEnvelope_setMaxY_void_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CEnvelope_setMaxY_void_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CEnvelope_setMinZ_void_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CEnvelope_setMinZ_void_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CEnvelope_setMaxZ_void_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CEnvelope_setMaxZ_void_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CEnvelope_containsCoordinate_ev_bool_ev_real64_ev_real64_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CEnvelope_containsCoordinate_ev_bool_ev_real64_ev_real64_ev_real64_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CEnvelope_containsEnvelope_ev_bool_IEnvelope_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CEnvelope_containsEnvelope_ev_bool_IEnvelope_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CEnvelope_isIntersects_ev_bool_IEnvelope_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CEnvelope_isIntersects_ev_bool_IEnvelope_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CEnvelope_expands_void_ev_bool_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CEnvelope_expands_void_ev_bool_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CEnvelope_unions_void_IEnvelope_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CEnvelope_unions_void_IEnvelope_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CEnvelope_intersects_void_IEnvelope_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CEnvelope_intersects_void_IEnvelope_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CEnvelope_equals_ev_bool_IEnvelope_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CEnvelope_equals_ev_bool_IEnvelope_ev_real64_EVDimensionType_Callback;
				public:
					CEnvelopeProxy(EarthView::World::Core::CNameValuePairList *pList) : CEnvelope(pList)
					{
						m_EarthView_World_Spatial_Geometry_CEnvelope_getMinX_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEnvelope_getMaxX_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEnvelope_getMinY_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEnvelope_getMaxY_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEnvelope_getMinZ_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEnvelope_getMaxZ_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEnvelope_getWidth_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEnvelope_getHeight_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEnvelope_getDepth_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEnvelope_isBox_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEnvelope_isValid_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEnvelope_clone_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEnvelope_setMinX_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEnvelope_setMaxX_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEnvelope_setMinY_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEnvelope_setMaxY_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEnvelope_setMinZ_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEnvelope_setMaxZ_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEnvelope_containsCoordinate_ev_bool_ev_real64_ev_real64_ev_real64_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEnvelope_containsEnvelope_ev_bool_IEnvelope_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEnvelope_isIntersects_ev_bool_IEnvelope_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEnvelope_expands_void_ev_bool_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEnvelope_unions_void_IEnvelope_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEnvelope_intersects_void_IEnvelope_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEnvelope_equals_ev_bool_IEnvelope_ev_real64_EVDimensionType_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEnvelope_getMinX_ev_real64(EarthView_World_Spatial_Geometry_CEnvelope_getMinX_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEnvelope_getMinX_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEnvelope_getMaxX_ev_real64(EarthView_World_Spatial_Geometry_CEnvelope_getMaxX_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEnvelope_getMaxX_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEnvelope_getMinY_ev_real64(EarthView_World_Spatial_Geometry_CEnvelope_getMinY_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEnvelope_getMinY_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEnvelope_getMaxY_ev_real64(EarthView_World_Spatial_Geometry_CEnvelope_getMaxY_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEnvelope_getMaxY_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEnvelope_getMinZ_ev_real64(EarthView_World_Spatial_Geometry_CEnvelope_getMinZ_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEnvelope_getMinZ_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEnvelope_getMaxZ_ev_real64(EarthView_World_Spatial_Geometry_CEnvelope_getMaxZ_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEnvelope_getMaxZ_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEnvelope_getWidth_ev_real64(EarthView_World_Spatial_Geometry_CEnvelope_getWidth_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEnvelope_getWidth_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEnvelope_getHeight_ev_real64(EarthView_World_Spatial_Geometry_CEnvelope_getHeight_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEnvelope_getHeight_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEnvelope_getDepth_ev_real64(EarthView_World_Spatial_Geometry_CEnvelope_getDepth_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEnvelope_getDepth_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEnvelope_isBox_ev_bool(EarthView_World_Spatial_Geometry_CEnvelope_isBox_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEnvelope_isBox_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEnvelope_isValid_ev_bool(EarthView_World_Spatial_Geometry_CEnvelope_isValid_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEnvelope_isValid_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEnvelope_clone_IEnvelope(EarthView_World_Spatial_Geometry_CEnvelope_clone_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEnvelope_clone_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEnvelope_setMinX_void_ev_real64(EarthView_World_Spatial_Geometry_CEnvelope_setMinX_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEnvelope_setMinX_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEnvelope_setMaxX_void_ev_real64(EarthView_World_Spatial_Geometry_CEnvelope_setMaxX_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEnvelope_setMaxX_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEnvelope_setMinY_void_ev_real64(EarthView_World_Spatial_Geometry_CEnvelope_setMinY_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEnvelope_setMinY_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEnvelope_setMaxY_void_ev_real64(EarthView_World_Spatial_Geometry_CEnvelope_setMaxY_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEnvelope_setMaxY_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEnvelope_setMinZ_void_ev_real64(EarthView_World_Spatial_Geometry_CEnvelope_setMinZ_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEnvelope_setMinZ_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEnvelope_setMaxZ_void_ev_real64(EarthView_World_Spatial_Geometry_CEnvelope_setMaxZ_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEnvelope_setMaxZ_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEnvelope_containsCoordinate_ev_bool_ev_real64_ev_real64_ev_real64_EVDimensionType(EarthView_World_Spatial_Geometry_CEnvelope_containsCoordinate_ev_bool_ev_real64_ev_real64_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEnvelope_containsCoordinate_ev_bool_ev_real64_ev_real64_ev_real64_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEnvelope_containsEnvelope_ev_bool_IEnvelope_EVDimensionType(EarthView_World_Spatial_Geometry_CEnvelope_containsEnvelope_ev_bool_IEnvelope_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEnvelope_containsEnvelope_ev_bool_IEnvelope_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEnvelope_isIntersects_ev_bool_IEnvelope_EVDimensionType(EarthView_World_Spatial_Geometry_CEnvelope_isIntersects_ev_bool_IEnvelope_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEnvelope_isIntersects_ev_bool_IEnvelope_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEnvelope_expands_void_ev_bool_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Geometry_CEnvelope_expands_void_ev_bool_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEnvelope_expands_void_ev_bool_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEnvelope_unions_void_IEnvelope_EVDimensionType(EarthView_World_Spatial_Geometry_CEnvelope_unions_void_IEnvelope_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEnvelope_unions_void_IEnvelope_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEnvelope_intersects_void_IEnvelope_EVDimensionType(EarthView_World_Spatial_Geometry_CEnvelope_intersects_void_IEnvelope_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEnvelope_intersects_void_IEnvelope_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEnvelope_equals_ev_bool_IEnvelope_ev_real64_EVDimensionType(EarthView_World_Spatial_Geometry_CEnvelope_equals_ev_bool_IEnvelope_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEnvelope_equals_ev_bool_IEnvelope_ev_real64_EVDimensionType_Callback = pCallback;
					}
					virtual ev_real64 getMinX() const
					{
						if(m_EarthView_World_Spatial_Geometry_CEnvelope_getMinX_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Geometry_CEnvelope_getMinX_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CEnvelope::getMinX();
					}
					virtual ev_real64 getMinY() const
					{
						if(m_EarthView_World_Spatial_Geometry_CEnvelope_getMinY_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Geometry_CEnvelope_getMinY_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CEnvelope::getMinY();
					}
					virtual ev_real64 getMinZ() const
					{
						if(m_EarthView_World_Spatial_Geometry_CEnvelope_getMinZ_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Geometry_CEnvelope_getMinZ_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CEnvelope::getMinZ();
					}
					virtual ev_real64 getMaxX() const
					{
						if(m_EarthView_World_Spatial_Geometry_CEnvelope_getMaxX_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Geometry_CEnvelope_getMaxX_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CEnvelope::getMaxX();
					}
					virtual ev_real64 getMaxY() const
					{
						if(m_EarthView_World_Spatial_Geometry_CEnvelope_getMaxY_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Geometry_CEnvelope_getMaxY_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CEnvelope::getMaxY();
					}
					virtual ev_real64 getMaxZ() const
					{
						if(m_EarthView_World_Spatial_Geometry_CEnvelope_getMaxZ_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Geometry_CEnvelope_getMaxZ_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CEnvelope::getMaxZ();
					}
					virtual void setMinX(_in ev_real64 value)
					{
						if(m_EarthView_World_Spatial_Geometry_CEnvelope_setMinX_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CEnvelope_setMinX_void_ev_real64_Callback(value);
						}
						else
							return this->CEnvelope::setMinX(value);
					}
					virtual void setMinY(_in ev_real64 value)
					{
						if(m_EarthView_World_Spatial_Geometry_CEnvelope_setMinY_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CEnvelope_setMinY_void_ev_real64_Callback(value);
						}
						else
							return this->CEnvelope::setMinY(value);
					}
					virtual void setMinZ(_in ev_real64 value)
					{
						if(m_EarthView_World_Spatial_Geometry_CEnvelope_setMinZ_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CEnvelope_setMinZ_void_ev_real64_Callback(value);
						}
						else
							return this->CEnvelope::setMinZ(value);
					}
					virtual void setMaxX(_in ev_real64 value)
					{
						if(m_EarthView_World_Spatial_Geometry_CEnvelope_setMaxX_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CEnvelope_setMaxX_void_ev_real64_Callback(value);
						}
						else
							return this->CEnvelope::setMaxX(value);
					}
					virtual void setMaxY(_in ev_real64 value)
					{
						if(m_EarthView_World_Spatial_Geometry_CEnvelope_setMaxY_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CEnvelope_setMaxY_void_ev_real64_Callback(value);
						}
						else
							return this->CEnvelope::setMaxY(value);
					}
					virtual void setMaxZ(_in ev_real64 value)
					{
						if(m_EarthView_World_Spatial_Geometry_CEnvelope_setMaxZ_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CEnvelope_setMaxZ_void_ev_real64_Callback(value);
						}
						else
							return this->CEnvelope::setMaxZ(value);
					}
					virtual ev_real64 getWidth() const
					{
						if(m_EarthView_World_Spatial_Geometry_CEnvelope_getWidth_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Geometry_CEnvelope_getWidth_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CEnvelope::getWidth();
					}
					virtual ev_real64 getHeight() const
					{
						if(m_EarthView_World_Spatial_Geometry_CEnvelope_getHeight_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Geometry_CEnvelope_getHeight_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CEnvelope::getHeight();
					}
					virtual ev_real64 getDepth() const
					{
						if(m_EarthView_World_Spatial_Geometry_CEnvelope_getDepth_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Geometry_CEnvelope_getDepth_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CEnvelope::getDepth();
					}
					virtual ev_bool isBox() const
					{
						if(m_EarthView_World_Spatial_Geometry_CEnvelope_isBox_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CEnvelope_isBox_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEnvelope::isBox();
					}
					virtual ev_bool isValid() const
					{
						if(m_EarthView_World_Spatial_Geometry_CEnvelope_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CEnvelope_isValid_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEnvelope::isValid();
					}
					virtual ev_bool containsCoordinate(_in ev_real64 x, _in ev_real64 y, _in ev_real64 z, _in EarthView::World::Spatial::Geometry::EVDimensionType type) const
					{
						if(m_EarthView_World_Spatial_Geometry_CEnvelope_containsCoordinate_ev_bool_ev_real64_ev_real64_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CEnvelope_containsCoordinate_ev_bool_ev_real64_ev_real64_ev_real64_EVDimensionType_Callback(x, y, z, (int)type);
							return returnValue;
						}
						else
							return this->CEnvelope::containsCoordinate(x, y, z, type);
					}
					virtual ev_bool containsEnvelope(_in const EarthView::World::Spatial::Geometry::IEnvelope& envelope, _in EarthView::World::Spatial::Geometry::EVDimensionType type) const
					{
						if(m_EarthView_World_Spatial_Geometry_CEnvelope_containsEnvelope_ev_bool_IEnvelope_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CEnvelope_containsEnvelope_ev_bool_IEnvelope_EVDimensionType_Callback(&envelope, (int)type);
							return returnValue;
						}
						else
							return this->CEnvelope::containsEnvelope(envelope, type);
					}
					virtual ev_bool isIntersects(_in const EarthView::World::Spatial::Geometry::IEnvelope& envelope, _in EarthView::World::Spatial::Geometry::EVDimensionType type) const
					{
						if(m_EarthView_World_Spatial_Geometry_CEnvelope_isIntersects_ev_bool_IEnvelope_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CEnvelope_isIntersects_ev_bool_IEnvelope_EVDimensionType_Callback(&envelope, (int)type);
							return returnValue;
						}
						else
							return this->CEnvelope::isIntersects(envelope, type);
					}
					virtual void expands(_in ev_bool isRadio, _in ev_real64 scaleX, _in ev_real64 scaleY, _in ev_real64 scaleZ)
					{
						if(m_EarthView_World_Spatial_Geometry_CEnvelope_expands_void_ev_bool_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CEnvelope_expands_void_ev_bool_ev_real64_ev_real64_ev_real64_Callback(isRadio, scaleX, scaleY, scaleZ);
						}
						else
							return this->CEnvelope::expands(isRadio, scaleX, scaleY, scaleZ);
					}
					virtual void unions(_in const EarthView::World::Spatial::Geometry::IEnvelope& envelope, _in EarthView::World::Spatial::Geometry::EVDimensionType type)
					{
						if(m_EarthView_World_Spatial_Geometry_CEnvelope_unions_void_IEnvelope_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CEnvelope_unions_void_IEnvelope_EVDimensionType_Callback(&envelope, (int)type);
						}
						else
							return this->CEnvelope::unions(envelope, type);
					}
					virtual void intersects(_in const EarthView::World::Spatial::Geometry::IEnvelope& envelope, _in EarthView::World::Spatial::Geometry::EVDimensionType type)
					{
						if(m_EarthView_World_Spatial_Geometry_CEnvelope_intersects_void_IEnvelope_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CEnvelope_intersects_void_IEnvelope_EVDimensionType_Callback(&envelope, (int)type);
						}
						else
							return this->CEnvelope::intersects(envelope, type);
					}
					virtual EarthView::World::Spatial::Geometry::IEnvelope* clone() const
					{
						if(m_EarthView_World_Spatial_Geometry_CEnvelope_clone_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_Geometry_CEnvelope_clone_IEnvelope_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CEnvelope::clone();
					}
					virtual ev_bool equals(_in const EarthView::World::Spatial::Geometry::IEnvelope& envelope, _in ev_real64 tolerance, _in EarthView::World::Spatial::Geometry::EVDimensionType type) const
					{
						if(m_EarthView_World_Spatial_Geometry_CEnvelope_equals_ev_bool_IEnvelope_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CEnvelope_equals_ev_bool_IEnvelope_ev_real64_EVDimensionType_Callback(&envelope, tolerance, (int)type);
							return returnValue;
						}
						else
							return this->CEnvelope::equals(envelope, tolerance, type);
					}
				};
				REGISTER_FACTORY_CLASS(CEnvelopeProxy);
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CEnvelope_getMinX_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX;
					if (dynamic_cast<CEnvelopeProxy*>((EarthView::World::Spatial::Geometry::CEnvelope*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEnvelope::getMinX();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getMinX();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEnvelope_getMinX_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEnvelope_getMinX_ev_real64_Callback* pCallback )
				{
					CEnvelopeProxy* ptr = dynamic_cast<CEnvelopeProxy*>((EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEnvelope_getMinX_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CEnvelope_getMinX_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEnvelope::getMinX();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CEnvelope_getMinY_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX;
					if (dynamic_cast<CEnvelopeProxy*>((EarthView::World::Spatial::Geometry::CEnvelope*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEnvelope::getMinY();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getMinY();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEnvelope_getMinY_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEnvelope_getMinY_ev_real64_Callback* pCallback )
				{
					CEnvelopeProxy* ptr = dynamic_cast<CEnvelopeProxy*>((EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEnvelope_getMinY_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CEnvelope_getMinY_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEnvelope::getMinY();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CEnvelope_getMinZ_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX;
					if (dynamic_cast<CEnvelopeProxy*>((EarthView::World::Spatial::Geometry::CEnvelope*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEnvelope::getMinZ();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getMinZ();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEnvelope_getMinZ_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEnvelope_getMinZ_ev_real64_Callback* pCallback )
				{
					CEnvelopeProxy* ptr = dynamic_cast<CEnvelopeProxy*>((EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEnvelope_getMinZ_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CEnvelope_getMinZ_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEnvelope::getMinZ();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CEnvelope_getMaxX_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX;
					if (dynamic_cast<CEnvelopeProxy*>((EarthView::World::Spatial::Geometry::CEnvelope*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEnvelope::getMaxX();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getMaxX();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEnvelope_getMaxX_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEnvelope_getMaxX_ev_real64_Callback* pCallback )
				{
					CEnvelopeProxy* ptr = dynamic_cast<CEnvelopeProxy*>((EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEnvelope_getMaxX_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CEnvelope_getMaxX_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEnvelope::getMaxX();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CEnvelope_getMaxY_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX;
					if (dynamic_cast<CEnvelopeProxy*>((EarthView::World::Spatial::Geometry::CEnvelope*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEnvelope::getMaxY();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getMaxY();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEnvelope_getMaxY_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEnvelope_getMaxY_ev_real64_Callback* pCallback )
				{
					CEnvelopeProxy* ptr = dynamic_cast<CEnvelopeProxy*>((EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEnvelope_getMaxY_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CEnvelope_getMaxY_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEnvelope::getMaxY();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CEnvelope_getMaxZ_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX;
					if (dynamic_cast<CEnvelopeProxy*>((EarthView::World::Spatial::Geometry::CEnvelope*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEnvelope::getMaxZ();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getMaxZ();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEnvelope_getMaxZ_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEnvelope_getMaxZ_ev_real64_Callback* pCallback )
				{
					CEnvelopeProxy* ptr = dynamic_cast<CEnvelopeProxy*>((EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEnvelope_getMaxZ_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CEnvelope_getMaxZ_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEnvelope::getMaxZ();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CEnvelope_setMinX_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Geometry::CEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX;
					if (dynamic_cast<CEnvelopeProxy*>((EarthView::World::Spatial::Geometry::CEnvelope*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CEnvelope::setMinX(value);
					else
						ptrNativeObject->setMinX(value);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEnvelope_setMinX_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEnvelope_setMinX_void_ev_real64_Callback* pCallback )
				{
					CEnvelopeProxy* ptr = dynamic_cast<CEnvelopeProxy*>((EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEnvelope_setMinX_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CEnvelope_setMinX_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Geometry::CEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CEnvelope::setMinX(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CEnvelope_setMinY_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Geometry::CEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX;
					if (dynamic_cast<CEnvelopeProxy*>((EarthView::World::Spatial::Geometry::CEnvelope*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CEnvelope::setMinY(value);
					else
						ptrNativeObject->setMinY(value);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEnvelope_setMinY_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEnvelope_setMinY_void_ev_real64_Callback* pCallback )
				{
					CEnvelopeProxy* ptr = dynamic_cast<CEnvelopeProxy*>((EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEnvelope_setMinY_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CEnvelope_setMinY_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Geometry::CEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CEnvelope::setMinY(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CEnvelope_setMinZ_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Geometry::CEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX;
					if (dynamic_cast<CEnvelopeProxy*>((EarthView::World::Spatial::Geometry::CEnvelope*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CEnvelope::setMinZ(value);
					else
						ptrNativeObject->setMinZ(value);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEnvelope_setMinZ_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEnvelope_setMinZ_void_ev_real64_Callback* pCallback )
				{
					CEnvelopeProxy* ptr = dynamic_cast<CEnvelopeProxy*>((EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEnvelope_setMinZ_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CEnvelope_setMinZ_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Geometry::CEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CEnvelope::setMinZ(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CEnvelope_setMaxX_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Geometry::CEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX;
					if (dynamic_cast<CEnvelopeProxy*>((EarthView::World::Spatial::Geometry::CEnvelope*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CEnvelope::setMaxX(value);
					else
						ptrNativeObject->setMaxX(value);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEnvelope_setMaxX_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEnvelope_setMaxX_void_ev_real64_Callback* pCallback )
				{
					CEnvelopeProxy* ptr = dynamic_cast<CEnvelopeProxy*>((EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEnvelope_setMaxX_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CEnvelope_setMaxX_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Geometry::CEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CEnvelope::setMaxX(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CEnvelope_setMaxY_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Geometry::CEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX;
					if (dynamic_cast<CEnvelopeProxy*>((EarthView::World::Spatial::Geometry::CEnvelope*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CEnvelope::setMaxY(value);
					else
						ptrNativeObject->setMaxY(value);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEnvelope_setMaxY_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEnvelope_setMaxY_void_ev_real64_Callback* pCallback )
				{
					CEnvelopeProxy* ptr = dynamic_cast<CEnvelopeProxy*>((EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEnvelope_setMaxY_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CEnvelope_setMaxY_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Geometry::CEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CEnvelope::setMaxY(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CEnvelope_setMaxZ_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Geometry::CEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX;
					if (dynamic_cast<CEnvelopeProxy*>((EarthView::World::Spatial::Geometry::CEnvelope*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CEnvelope::setMaxZ(value);
					else
						ptrNativeObject->setMaxZ(value);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEnvelope_setMaxZ_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEnvelope_setMaxZ_void_ev_real64_Callback* pCallback )
				{
					CEnvelopeProxy* ptr = dynamic_cast<CEnvelopeProxy*>((EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEnvelope_setMaxZ_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CEnvelope_setMaxZ_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Geometry::CEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CEnvelope::setMaxZ(value);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CEnvelope_getWidth_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX;
					if (dynamic_cast<CEnvelopeProxy*>((EarthView::World::Spatial::Geometry::CEnvelope*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEnvelope::getWidth();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getWidth();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEnvelope_getWidth_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEnvelope_getWidth_ev_real64_Callback* pCallback )
				{
					CEnvelopeProxy* ptr = dynamic_cast<CEnvelopeProxy*>((EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEnvelope_getWidth_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CEnvelope_getWidth_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEnvelope::getWidth();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CEnvelope_getHeight_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX;
					if (dynamic_cast<CEnvelopeProxy*>((EarthView::World::Spatial::Geometry::CEnvelope*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEnvelope::getHeight();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getHeight();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEnvelope_getHeight_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEnvelope_getHeight_ev_real64_Callback* pCallback )
				{
					CEnvelopeProxy* ptr = dynamic_cast<CEnvelopeProxy*>((EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEnvelope_getHeight_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CEnvelope_getHeight_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEnvelope::getHeight();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CEnvelope_getDepth_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX;
					if (dynamic_cast<CEnvelopeProxy*>((EarthView::World::Spatial::Geometry::CEnvelope*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEnvelope::getDepth();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getDepth();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEnvelope_getDepth_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEnvelope_getDepth_ev_real64_Callback* pCallback )
				{
					CEnvelopeProxy* ptr = dynamic_cast<CEnvelopeProxy*>((EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEnvelope_getDepth_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CEnvelope_getDepth_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEnvelope::getDepth();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CEnvelope_getCenter_void_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _out ev_real64& x, _out ev_real64& y, _out ev_real64& z )
				{
					const EarthView::World::Spatial::Geometry::CEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX;
					ptrNativeObject->getCenter(x, y, z);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CEnvelope_setCenter_void_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z )
				{
					EarthView::World::Spatial::Geometry::CEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX;
					ptrNativeObject->setCenter(x, y, z);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CEnvelope_isBox_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX;
					if (dynamic_cast<CEnvelopeProxy*>((EarthView::World::Spatial::Geometry::CEnvelope*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEnvelope::isBox();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isBox();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEnvelope_isBox_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEnvelope_isBox_ev_bool_Callback* pCallback )
				{
					CEnvelopeProxy* ptr = dynamic_cast<CEnvelopeProxy*>((EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEnvelope_isBox_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CEnvelope_isBox_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEnvelope::isBox();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CEnvelope_isValid_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX;
					if (dynamic_cast<CEnvelopeProxy*>((EarthView::World::Spatial::Geometry::CEnvelope*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEnvelope::isValid();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isValid();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEnvelope_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEnvelope_isValid_ev_bool_Callback* pCallback )
				{
					CEnvelopeProxy* ptr = dynamic_cast<CEnvelopeProxy*>((EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEnvelope_isValid_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CEnvelope_isValid_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEnvelope::isValid();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CEnvelope_containsCoordinate_ev_bool_ev_real64_ev_real64_ev_real64_EVDimensionType(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z, _in int type )
				{
					const EarthView::World::Spatial::Geometry::CEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX;
					if (dynamic_cast<CEnvelopeProxy*>((EarthView::World::Spatial::Geometry::CEnvelope*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEnvelope::containsCoordinate(x, y, z, (EarthView::World::Spatial::Geometry::EVDimensionType)type);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->containsCoordinate(x, y, z, (EarthView::World::Spatial::Geometry::EVDimensionType)type);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEnvelope_containsCoordinate_ev_bool_ev_real64_ev_real64_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEnvelope_containsCoordinate_ev_bool_ev_real64_ev_real64_ev_real64_EVDimensionType_Callback* pCallback )
				{
					CEnvelopeProxy* ptr = dynamic_cast<CEnvelopeProxy*>((EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEnvelope_containsCoordinate_ev_bool_ev_real64_ev_real64_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CEnvelope_containsCoordinate_ev_bool_ev_real64_ev_real64_ev_real64_EVDimensionType_NoVirtual(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z, _in int type )
				{
					const EarthView::World::Spatial::Geometry::CEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEnvelope::containsCoordinate(x, y, z, (EarthView::World::Spatial::Geometry::EVDimensionType)type);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CEnvelope_containsEnvelope_ev_bool_IEnvelope_EVDimensionType(void *pObjectXXXX, _in const void* envelope, _in int type )
				{
					const EarthView::World::Spatial::Geometry::CEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX;
					if (dynamic_cast<CEnvelopeProxy*>((EarthView::World::Spatial::Geometry::CEnvelope*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEnvelope::containsEnvelope(*(EarthView::World::Spatial::Geometry::IEnvelope*)envelope, (EarthView::World::Spatial::Geometry::EVDimensionType)type);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->containsEnvelope(*(EarthView::World::Spatial::Geometry::IEnvelope*)envelope, (EarthView::World::Spatial::Geometry::EVDimensionType)type);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEnvelope_containsEnvelope_ev_bool_IEnvelope_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEnvelope_containsEnvelope_ev_bool_IEnvelope_EVDimensionType_Callback* pCallback )
				{
					CEnvelopeProxy* ptr = dynamic_cast<CEnvelopeProxy*>((EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEnvelope_containsEnvelope_ev_bool_IEnvelope_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CEnvelope_containsEnvelope_ev_bool_IEnvelope_EVDimensionType_NoVirtual(void *pObjectXXXX, _in const void* envelope, _in int type )
				{
					const EarthView::World::Spatial::Geometry::CEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEnvelope::containsEnvelope(*(EarthView::World::Spatial::Geometry::IEnvelope*)envelope, (EarthView::World::Spatial::Geometry::EVDimensionType)type);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CEnvelope_isIntersects_ev_bool_IEnvelope_EVDimensionType(void *pObjectXXXX, _in const void* envelope, _in int type )
				{
					const EarthView::World::Spatial::Geometry::CEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX;
					if (dynamic_cast<CEnvelopeProxy*>((EarthView::World::Spatial::Geometry::CEnvelope*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEnvelope::isIntersects(*(EarthView::World::Spatial::Geometry::IEnvelope*)envelope, (EarthView::World::Spatial::Geometry::EVDimensionType)type);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isIntersects(*(EarthView::World::Spatial::Geometry::IEnvelope*)envelope, (EarthView::World::Spatial::Geometry::EVDimensionType)type);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEnvelope_isIntersects_ev_bool_IEnvelope_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEnvelope_isIntersects_ev_bool_IEnvelope_EVDimensionType_Callback* pCallback )
				{
					CEnvelopeProxy* ptr = dynamic_cast<CEnvelopeProxy*>((EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEnvelope_isIntersects_ev_bool_IEnvelope_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CEnvelope_isIntersects_ev_bool_IEnvelope_EVDimensionType_NoVirtual(void *pObjectXXXX, _in const void* envelope, _in int type )
				{
					const EarthView::World::Spatial::Geometry::CEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEnvelope::isIntersects(*(EarthView::World::Spatial::Geometry::IEnvelope*)envelope, (EarthView::World::Spatial::Geometry::EVDimensionType)type);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CEnvelope_expands_void_ev_bool_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_bool isRadio, _in ev_real64 scaleX, _in ev_real64 scaleY, _in ev_real64 scaleZ )
				{
					EarthView::World::Spatial::Geometry::CEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX;
					if (dynamic_cast<CEnvelopeProxy*>((EarthView::World::Spatial::Geometry::CEnvelope*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CEnvelope::expands(isRadio, scaleX, scaleY, scaleZ);
					else
						ptrNativeObject->expands(isRadio, scaleX, scaleY, scaleZ);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEnvelope_expands_void_ev_bool_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEnvelope_expands_void_ev_bool_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CEnvelopeProxy* ptr = dynamic_cast<CEnvelopeProxy*>((EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEnvelope_expands_void_ev_bool_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CEnvelope_expands_void_ev_bool_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_bool isRadio, _in ev_real64 scaleX, _in ev_real64 scaleY, _in ev_real64 scaleZ )
				{
					EarthView::World::Spatial::Geometry::CEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CEnvelope::expands(isRadio, scaleX, scaleY, scaleZ);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CEnvelope_unions_void_IEnvelope_EVDimensionType(void *pObjectXXXX, _in const void* envelope, _in int type )
				{
					EarthView::World::Spatial::Geometry::CEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX;
					if (dynamic_cast<CEnvelopeProxy*>((EarthView::World::Spatial::Geometry::CEnvelope*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CEnvelope::unions(*(EarthView::World::Spatial::Geometry::IEnvelope*)envelope, (EarthView::World::Spatial::Geometry::EVDimensionType)type);
					else
						ptrNativeObject->unions(*(EarthView::World::Spatial::Geometry::IEnvelope*)envelope, (EarthView::World::Spatial::Geometry::EVDimensionType)type);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEnvelope_unions_void_IEnvelope_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEnvelope_unions_void_IEnvelope_EVDimensionType_Callback* pCallback )
				{
					CEnvelopeProxy* ptr = dynamic_cast<CEnvelopeProxy*>((EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEnvelope_unions_void_IEnvelope_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CEnvelope_unions_void_IEnvelope_EVDimensionType_NoVirtual(void *pObjectXXXX, _in const void* envelope, _in int type )
				{
					EarthView::World::Spatial::Geometry::CEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CEnvelope::unions(*(EarthView::World::Spatial::Geometry::IEnvelope*)envelope, (EarthView::World::Spatial::Geometry::EVDimensionType)type);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CEnvelope_intersects_void_IEnvelope_EVDimensionType(void *pObjectXXXX, _in const void* envelope, _in int type )
				{
					EarthView::World::Spatial::Geometry::CEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX;
					if (dynamic_cast<CEnvelopeProxy*>((EarthView::World::Spatial::Geometry::CEnvelope*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CEnvelope::intersects(*(EarthView::World::Spatial::Geometry::IEnvelope*)envelope, (EarthView::World::Spatial::Geometry::EVDimensionType)type);
					else
						ptrNativeObject->intersects(*(EarthView::World::Spatial::Geometry::IEnvelope*)envelope, (EarthView::World::Spatial::Geometry::EVDimensionType)type);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEnvelope_intersects_void_IEnvelope_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEnvelope_intersects_void_IEnvelope_EVDimensionType_Callback* pCallback )
				{
					CEnvelopeProxy* ptr = dynamic_cast<CEnvelopeProxy*>((EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEnvelope_intersects_void_IEnvelope_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CEnvelope_intersects_void_IEnvelope_EVDimensionType_NoVirtual(void *pObjectXXXX, _in const void* envelope, _in int type )
				{
					EarthView::World::Spatial::Geometry::CEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CEnvelope::intersects(*(EarthView::World::Spatial::Geometry::IEnvelope*)envelope, (EarthView::World::Spatial::Geometry::EVDimensionType)type);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Geometry_CEnvelope_clone_IEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX;
					if (dynamic_cast<CEnvelopeProxy*>((EarthView::World::Spatial::Geometry::CEnvelope*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEnvelope::clone();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->clone();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEnvelope_clone_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEnvelope_clone_IEnvelope_Callback* pCallback )
				{
					CEnvelopeProxy* ptr = dynamic_cast<CEnvelopeProxy*>((EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEnvelope_clone_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Geometry_CEnvelope_clone_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEnvelope::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CEnvelope_clone2_CEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CEnvelope objXXXX = ptrNativeObject->clone2();
					EarthView::World::Spatial::Geometry::CEnvelope *pXXXX = new EarthView::World::Spatial::Geometry::CEnvelope(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CEnvelope_equals_ev_bool_IEnvelope_ev_real64_EVDimensionType(void *pObjectXXXX, _in const void* envelope, _in ev_real64 tolerance, _in int type )
				{
					const EarthView::World::Spatial::Geometry::CEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX;
					if (dynamic_cast<CEnvelopeProxy*>((EarthView::World::Spatial::Geometry::CEnvelope*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEnvelope::equals(*(EarthView::World::Spatial::Geometry::IEnvelope*)envelope, tolerance, (EarthView::World::Spatial::Geometry::EVDimensionType)type);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->equals(*(EarthView::World::Spatial::Geometry::IEnvelope*)envelope, tolerance, (EarthView::World::Spatial::Geometry::EVDimensionType)type);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEnvelope_equals_ev_bool_IEnvelope_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEnvelope_equals_ev_bool_IEnvelope_ev_real64_EVDimensionType_Callback* pCallback )
				{
					CEnvelopeProxy* ptr = dynamic_cast<CEnvelopeProxy*>((EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEnvelope_equals_ev_bool_IEnvelope_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CEnvelope_equals_ev_bool_IEnvelope_ev_real64_EVDimensionType_NoVirtual(void *pObjectXXXX, _in const void* envelope, _in ev_real64 tolerance, _in int type )
				{
					const EarthView::World::Spatial::Geometry::CEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEnvelope::equals(*(EarthView::World::Spatial::Geometry::IEnvelope*)envelope, tolerance, (EarthView::World::Spatial::Geometry::EVDimensionType)type);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CEnvelope_OperatorAssign_CEnvelope_CEnvelope(void *pObjXXXX, _in const void* envelope )
				{
					EarthView::World::Spatial::Geometry::CEnvelope& objXXXX = *((EarthView::World::Spatial::Geometry::CEnvelope*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial::Geometry::CEnvelope*)envelope;
					EarthView::World::Spatial::Geometry::CEnvelope *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
		}
	}
}
