/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/ienvelope.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Geometry
			{
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Geometry_IEnvelope_getMinX_ev_real64_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Geometry_IEnvelope_getMaxX_ev_real64_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Geometry_IEnvelope_getMinY_ev_real64_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Geometry_IEnvelope_getMaxY_ev_real64_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Geometry_IEnvelope_getMinZ_ev_real64_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Geometry_IEnvelope_getMaxZ_ev_real64_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Geometry_IEnvelope_getWidth_ev_real64_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Geometry_IEnvelope_getHeight_ev_real64_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Geometry_IEnvelope_getDepth_ev_real64_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_IEnvelope_isBox_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_IEnvelope_isValid_ev_bool_Callback)();
				typedef EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_Geometry_IEnvelope_clone_IEnvelope_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_IEnvelope_setMinX_void_ev_real64_Callback)(_in ev_real64 value);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_IEnvelope_setMaxX_void_ev_real64_Callback)(_in ev_real64 value);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_IEnvelope_setMinY_void_ev_real64_Callback)(_in ev_real64 value);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_IEnvelope_setMaxY_void_ev_real64_Callback)(_in ev_real64 value);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_IEnvelope_setMinZ_void_ev_real64_Callback)(_in ev_real64 value);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_IEnvelope_setMaxZ_void_ev_real64_Callback)(_in ev_real64 value);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_IEnvelope_containsCoordinate_ev_bool_ev_real64_ev_real64_ev_real64_EVDimensionType_Callback)(_in ev_real64 x, _in ev_real64 y, _in ev_real64 z, _in int type);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_IEnvelope_containsEnvelope_ev_bool_IEnvelope_EVDimensionType_Callback)(_in const void* envelope, _in int type);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_IEnvelope_isIntersects_ev_bool_IEnvelope_EVDimensionType_Callback)(_in const void* envelope, _in int type);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_IEnvelope_expands_void_ev_bool_ev_real64_ev_real64_ev_real64_Callback)(_in ev_bool isRadio, _in ev_real64 scaleX, _in ev_real64 scaleY, _in ev_real64 scaleZ);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_IEnvelope_unions_void_IEnvelope_EVDimensionType_Callback)(_in const void* envelope, _in int type);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_IEnvelope_intersects_void_IEnvelope_EVDimensionType_Callback)(_in const void* envelope, _in int type);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_IEnvelope_equals_ev_bool_IEnvelope_ev_real64_EVDimensionType_Callback)(_in const void* envelope, _in ev_real64 tolerance, _in int type);
				class IEnvelopeProxy : public EarthView::World::Spatial::Geometry::IEnvelope
				{
				private:
					EarthView_World_Spatial_Geometry_IEnvelope_getMinX_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_IEnvelope_getMinX_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_IEnvelope_getMaxX_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_IEnvelope_getMaxX_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_IEnvelope_getMinY_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_IEnvelope_getMinY_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_IEnvelope_getMaxY_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_IEnvelope_getMaxY_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_IEnvelope_getMinZ_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_IEnvelope_getMinZ_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_IEnvelope_getMaxZ_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_IEnvelope_getMaxZ_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_IEnvelope_getWidth_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_IEnvelope_getWidth_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_IEnvelope_getHeight_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_IEnvelope_getHeight_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_IEnvelope_getDepth_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_IEnvelope_getDepth_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_IEnvelope_isBox_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_IEnvelope_isBox_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_IEnvelope_isValid_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_IEnvelope_isValid_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_IEnvelope_clone_IEnvelope_Callback* m_EarthView_World_Spatial_Geometry_IEnvelope_clone_IEnvelope_Callback;
					EarthView_World_Spatial_Geometry_IEnvelope_setMinX_void_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_IEnvelope_setMinX_void_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_IEnvelope_setMaxX_void_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_IEnvelope_setMaxX_void_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_IEnvelope_setMinY_void_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_IEnvelope_setMinY_void_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_IEnvelope_setMaxY_void_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_IEnvelope_setMaxY_void_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_IEnvelope_setMinZ_void_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_IEnvelope_setMinZ_void_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_IEnvelope_setMaxZ_void_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_IEnvelope_setMaxZ_void_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_IEnvelope_containsCoordinate_ev_bool_ev_real64_ev_real64_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_IEnvelope_containsCoordinate_ev_bool_ev_real64_ev_real64_ev_real64_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_IEnvelope_containsEnvelope_ev_bool_IEnvelope_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_IEnvelope_containsEnvelope_ev_bool_IEnvelope_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_IEnvelope_isIntersects_ev_bool_IEnvelope_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_IEnvelope_isIntersects_ev_bool_IEnvelope_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_IEnvelope_expands_void_ev_bool_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_IEnvelope_expands_void_ev_bool_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_IEnvelope_unions_void_IEnvelope_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_IEnvelope_unions_void_IEnvelope_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_IEnvelope_intersects_void_IEnvelope_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_IEnvelope_intersects_void_IEnvelope_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_IEnvelope_equals_ev_bool_IEnvelope_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_IEnvelope_equals_ev_bool_IEnvelope_ev_real64_EVDimensionType_Callback;
				public:
					IEnvelopeProxy(EarthView::World::Core::CNameValuePairList *pList) : IEnvelope(pList)
					{
						m_EarthView_World_Spatial_Geometry_IEnvelope_getMinX_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IEnvelope_getMaxX_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IEnvelope_getMinY_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IEnvelope_getMaxY_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IEnvelope_getMinZ_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IEnvelope_getMaxZ_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IEnvelope_getWidth_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IEnvelope_getHeight_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IEnvelope_getDepth_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IEnvelope_isBox_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IEnvelope_isValid_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IEnvelope_clone_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IEnvelope_setMinX_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IEnvelope_setMaxX_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IEnvelope_setMinY_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IEnvelope_setMaxY_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IEnvelope_setMinZ_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IEnvelope_setMaxZ_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IEnvelope_containsCoordinate_ev_bool_ev_real64_ev_real64_ev_real64_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IEnvelope_containsEnvelope_ev_bool_IEnvelope_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IEnvelope_isIntersects_ev_bool_IEnvelope_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IEnvelope_expands_void_ev_bool_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IEnvelope_unions_void_IEnvelope_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IEnvelope_intersects_void_IEnvelope_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IEnvelope_equals_ev_bool_IEnvelope_ev_real64_EVDimensionType_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(IEnvelopeProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IEnvelope_getMinX_ev_real64(EarthView_World_Spatial_Geometry_IEnvelope_getMinX_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IEnvelope_getMinX_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IEnvelope_getMaxX_ev_real64(EarthView_World_Spatial_Geometry_IEnvelope_getMaxX_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IEnvelope_getMaxX_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IEnvelope_getMinY_ev_real64(EarthView_World_Spatial_Geometry_IEnvelope_getMinY_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IEnvelope_getMinY_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IEnvelope_getMaxY_ev_real64(EarthView_World_Spatial_Geometry_IEnvelope_getMaxY_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IEnvelope_getMaxY_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IEnvelope_getMinZ_ev_real64(EarthView_World_Spatial_Geometry_IEnvelope_getMinZ_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IEnvelope_getMinZ_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IEnvelope_getMaxZ_ev_real64(EarthView_World_Spatial_Geometry_IEnvelope_getMaxZ_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IEnvelope_getMaxZ_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IEnvelope_getWidth_ev_real64(EarthView_World_Spatial_Geometry_IEnvelope_getWidth_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IEnvelope_getWidth_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IEnvelope_getHeight_ev_real64(EarthView_World_Spatial_Geometry_IEnvelope_getHeight_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IEnvelope_getHeight_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IEnvelope_getDepth_ev_real64(EarthView_World_Spatial_Geometry_IEnvelope_getDepth_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IEnvelope_getDepth_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IEnvelope_isBox_ev_bool(EarthView_World_Spatial_Geometry_IEnvelope_isBox_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IEnvelope_isBox_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IEnvelope_isValid_ev_bool(EarthView_World_Spatial_Geometry_IEnvelope_isValid_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IEnvelope_isValid_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IEnvelope_clone_IEnvelope(EarthView_World_Spatial_Geometry_IEnvelope_clone_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IEnvelope_clone_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IEnvelope_setMinX_void_ev_real64(EarthView_World_Spatial_Geometry_IEnvelope_setMinX_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IEnvelope_setMinX_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IEnvelope_setMaxX_void_ev_real64(EarthView_World_Spatial_Geometry_IEnvelope_setMaxX_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IEnvelope_setMaxX_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IEnvelope_setMinY_void_ev_real64(EarthView_World_Spatial_Geometry_IEnvelope_setMinY_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IEnvelope_setMinY_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IEnvelope_setMaxY_void_ev_real64(EarthView_World_Spatial_Geometry_IEnvelope_setMaxY_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IEnvelope_setMaxY_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IEnvelope_setMinZ_void_ev_real64(EarthView_World_Spatial_Geometry_IEnvelope_setMinZ_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IEnvelope_setMinZ_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IEnvelope_setMaxZ_void_ev_real64(EarthView_World_Spatial_Geometry_IEnvelope_setMaxZ_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IEnvelope_setMaxZ_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IEnvelope_containsCoordinate_ev_bool_ev_real64_ev_real64_ev_real64_EVDimensionType(EarthView_World_Spatial_Geometry_IEnvelope_containsCoordinate_ev_bool_ev_real64_ev_real64_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IEnvelope_containsCoordinate_ev_bool_ev_real64_ev_real64_ev_real64_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IEnvelope_containsEnvelope_ev_bool_IEnvelope_EVDimensionType(EarthView_World_Spatial_Geometry_IEnvelope_containsEnvelope_ev_bool_IEnvelope_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IEnvelope_containsEnvelope_ev_bool_IEnvelope_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IEnvelope_isIntersects_ev_bool_IEnvelope_EVDimensionType(EarthView_World_Spatial_Geometry_IEnvelope_isIntersects_ev_bool_IEnvelope_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IEnvelope_isIntersects_ev_bool_IEnvelope_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IEnvelope_expands_void_ev_bool_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Geometry_IEnvelope_expands_void_ev_bool_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IEnvelope_expands_void_ev_bool_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IEnvelope_unions_void_IEnvelope_EVDimensionType(EarthView_World_Spatial_Geometry_IEnvelope_unions_void_IEnvelope_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IEnvelope_unions_void_IEnvelope_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IEnvelope_intersects_void_IEnvelope_EVDimensionType(EarthView_World_Spatial_Geometry_IEnvelope_intersects_void_IEnvelope_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IEnvelope_intersects_void_IEnvelope_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IEnvelope_equals_ev_bool_IEnvelope_ev_real64_EVDimensionType(EarthView_World_Spatial_Geometry_IEnvelope_equals_ev_bool_IEnvelope_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IEnvelope_equals_ev_bool_IEnvelope_ev_real64_EVDimensionType_Callback = pCallback;
					}
					virtual ev_real64 getMinX() const
					{
						if(m_EarthView_World_Spatial_Geometry_IEnvelope_getMinX_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Geometry_IEnvelope_getMinX_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->IEnvelope::getMinX();
					}
					virtual ev_real64 getMaxX() const
					{
						if(m_EarthView_World_Spatial_Geometry_IEnvelope_getMaxX_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Geometry_IEnvelope_getMaxX_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->IEnvelope::getMaxX();
					}
					virtual ev_real64 getMinY() const
					{
						if(m_EarthView_World_Spatial_Geometry_IEnvelope_getMinY_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Geometry_IEnvelope_getMinY_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->IEnvelope::getMinY();
					}
					virtual ev_real64 getMaxY() const
					{
						if(m_EarthView_World_Spatial_Geometry_IEnvelope_getMaxY_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Geometry_IEnvelope_getMaxY_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->IEnvelope::getMaxY();
					}
					virtual ev_real64 getMinZ() const
					{
						if(m_EarthView_World_Spatial_Geometry_IEnvelope_getMinZ_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Geometry_IEnvelope_getMinZ_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->IEnvelope::getMinZ();
					}
					virtual ev_real64 getMaxZ() const
					{
						if(m_EarthView_World_Spatial_Geometry_IEnvelope_getMaxZ_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Geometry_IEnvelope_getMaxZ_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->IEnvelope::getMaxZ();
					}
					virtual ev_real64 getWidth() const
					{
						if(m_EarthView_World_Spatial_Geometry_IEnvelope_getWidth_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Geometry_IEnvelope_getWidth_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->IEnvelope::getWidth();
					}
					virtual ev_real64 getHeight() const
					{
						if(m_EarthView_World_Spatial_Geometry_IEnvelope_getHeight_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Geometry_IEnvelope_getHeight_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->IEnvelope::getHeight();
					}
					virtual ev_real64 getDepth() const
					{
						if(m_EarthView_World_Spatial_Geometry_IEnvelope_getDepth_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Geometry_IEnvelope_getDepth_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->IEnvelope::getDepth();
					}
					virtual ev_bool isBox() const
					{
						if(m_EarthView_World_Spatial_Geometry_IEnvelope_isBox_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_IEnvelope_isBox_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IEnvelope::isBox();
					}
					virtual ev_bool isValid() const
					{
						if(m_EarthView_World_Spatial_Geometry_IEnvelope_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_IEnvelope_isValid_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IEnvelope::isValid();
					}
					virtual EarthView::World::Spatial::Geometry::IEnvelope* clone() const
					{
						if(m_EarthView_World_Spatial_Geometry_IEnvelope_clone_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_Geometry_IEnvelope_clone_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->IEnvelope::clone();
					}
					virtual void setMinX(_in ev_real64 value)
					{
						if(m_EarthView_World_Spatial_Geometry_IEnvelope_setMinX_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_IEnvelope_setMinX_void_ev_real64_Callback(value);
						}
						else
							return this->IEnvelope::setMinX(value);
					}
					virtual void setMaxX(_in ev_real64 value)
					{
						if(m_EarthView_World_Spatial_Geometry_IEnvelope_setMaxX_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_IEnvelope_setMaxX_void_ev_real64_Callback(value);
						}
						else
							return this->IEnvelope::setMaxX(value);
					}
					virtual void setMinY(_in ev_real64 value)
					{
						if(m_EarthView_World_Spatial_Geometry_IEnvelope_setMinY_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_IEnvelope_setMinY_void_ev_real64_Callback(value);
						}
						else
							return this->IEnvelope::setMinY(value);
					}
					virtual void setMaxY(_in ev_real64 value)
					{
						if(m_EarthView_World_Spatial_Geometry_IEnvelope_setMaxY_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_IEnvelope_setMaxY_void_ev_real64_Callback(value);
						}
						else
							return this->IEnvelope::setMaxY(value);
					}
					virtual void setMinZ(_in ev_real64 value)
					{
						if(m_EarthView_World_Spatial_Geometry_IEnvelope_setMinZ_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_IEnvelope_setMinZ_void_ev_real64_Callback(value);
						}
						else
							return this->IEnvelope::setMinZ(value);
					}
					virtual void setMaxZ(_in ev_real64 value)
					{
						if(m_EarthView_World_Spatial_Geometry_IEnvelope_setMaxZ_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_IEnvelope_setMaxZ_void_ev_real64_Callback(value);
						}
						else
							return this->IEnvelope::setMaxZ(value);
					}
					virtual ev_bool containsCoordinate(_in ev_real64 x, _in ev_real64 y, _in ev_real64 z, _in EarthView::World::Spatial::Geometry::EVDimensionType type) const
					{
						if(m_EarthView_World_Spatial_Geometry_IEnvelope_containsCoordinate_ev_bool_ev_real64_ev_real64_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_IEnvelope_containsCoordinate_ev_bool_ev_real64_ev_real64_ev_real64_EVDimensionType_Callback(x, y, z, (int)type);
							return returnValue;
						}
						else
							return this->IEnvelope::containsCoordinate(x, y, z, type);
					}
					virtual ev_bool containsEnvelope(_in const EarthView::World::Spatial::Geometry::IEnvelope& envelope, _in EarthView::World::Spatial::Geometry::EVDimensionType type) const
					{
						if(m_EarthView_World_Spatial_Geometry_IEnvelope_containsEnvelope_ev_bool_IEnvelope_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_IEnvelope_containsEnvelope_ev_bool_IEnvelope_EVDimensionType_Callback(&envelope, (int)type);
							return returnValue;
						}
						else
							return this->IEnvelope::containsEnvelope(envelope, type);
					}
					virtual ev_bool isIntersects(_in const EarthView::World::Spatial::Geometry::IEnvelope& envelope, _in EarthView::World::Spatial::Geometry::EVDimensionType type) const
					{
						if(m_EarthView_World_Spatial_Geometry_IEnvelope_isIntersects_ev_bool_IEnvelope_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_IEnvelope_isIntersects_ev_bool_IEnvelope_EVDimensionType_Callback(&envelope, (int)type);
							return returnValue;
						}
						else
							return this->IEnvelope::isIntersects(envelope, type);
					}
					virtual void expands(_in ev_bool isRadio, _in ev_real64 scaleX, _in ev_real64 scaleY, _in ev_real64 scaleZ)
					{
						if(m_EarthView_World_Spatial_Geometry_IEnvelope_expands_void_ev_bool_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_IEnvelope_expands_void_ev_bool_ev_real64_ev_real64_ev_real64_Callback(isRadio, scaleX, scaleY, scaleZ);
						}
						else
							return this->IEnvelope::expands(isRadio, scaleX, scaleY, scaleZ);
					}
					virtual void unions(_in const EarthView::World::Spatial::Geometry::IEnvelope& envelope, _in EarthView::World::Spatial::Geometry::EVDimensionType type)
					{
						if(m_EarthView_World_Spatial_Geometry_IEnvelope_unions_void_IEnvelope_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_IEnvelope_unions_void_IEnvelope_EVDimensionType_Callback(&envelope, (int)type);
						}
						else
							return this->IEnvelope::unions(envelope, type);
					}
					virtual void intersects(_in const EarthView::World::Spatial::Geometry::IEnvelope& envelope, _in EarthView::World::Spatial::Geometry::EVDimensionType type)
					{
						if(m_EarthView_World_Spatial_Geometry_IEnvelope_intersects_void_IEnvelope_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_IEnvelope_intersects_void_IEnvelope_EVDimensionType_Callback(&envelope, (int)type);
						}
						else
							return this->IEnvelope::intersects(envelope, type);
					}
					virtual ev_bool equals(_in const EarthView::World::Spatial::Geometry::IEnvelope& envelope, _in ev_real64 tolerance, _in EarthView::World::Spatial::Geometry::EVDimensionType type) const
					{
						if(m_EarthView_World_Spatial_Geometry_IEnvelope_equals_ev_bool_IEnvelope_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_IEnvelope_equals_ev_bool_IEnvelope_ev_real64_EVDimensionType_Callback(&envelope, tolerance, (int)type);
							return returnValue;
						}
						else
							return this->IEnvelope::equals(envelope, tolerance, type);
					}
				};
				REGISTER_FACTORY_CLASS(IEnvelopeProxy);
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_IEnvelope_getMinX_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX;
					if (dynamic_cast<IEnvelopeProxy*>((EarthView::World::Spatial::Geometry::IEnvelope*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IEnvelope::getMinX();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getMinX();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IEnvelope_getMinX_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IEnvelope_getMinX_ev_real64_Callback* pCallback )
				{
					IEnvelopeProxy* ptr = dynamic_cast<IEnvelopeProxy*>((EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IEnvelope_getMinX_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_IEnvelope_getMinX_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IEnvelope::getMinX();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_IEnvelope_getMaxX_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX;
					if (dynamic_cast<IEnvelopeProxy*>((EarthView::World::Spatial::Geometry::IEnvelope*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IEnvelope::getMaxX();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getMaxX();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IEnvelope_getMaxX_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IEnvelope_getMaxX_ev_real64_Callback* pCallback )
				{
					IEnvelopeProxy* ptr = dynamic_cast<IEnvelopeProxy*>((EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IEnvelope_getMaxX_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_IEnvelope_getMaxX_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IEnvelope::getMaxX();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_IEnvelope_getMinY_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX;
					if (dynamic_cast<IEnvelopeProxy*>((EarthView::World::Spatial::Geometry::IEnvelope*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IEnvelope::getMinY();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getMinY();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IEnvelope_getMinY_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IEnvelope_getMinY_ev_real64_Callback* pCallback )
				{
					IEnvelopeProxy* ptr = dynamic_cast<IEnvelopeProxy*>((EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IEnvelope_getMinY_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_IEnvelope_getMinY_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IEnvelope::getMinY();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_IEnvelope_getMaxY_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX;
					if (dynamic_cast<IEnvelopeProxy*>((EarthView::World::Spatial::Geometry::IEnvelope*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IEnvelope::getMaxY();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getMaxY();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IEnvelope_getMaxY_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IEnvelope_getMaxY_ev_real64_Callback* pCallback )
				{
					IEnvelopeProxy* ptr = dynamic_cast<IEnvelopeProxy*>((EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IEnvelope_getMaxY_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_IEnvelope_getMaxY_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IEnvelope::getMaxY();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_IEnvelope_getMinZ_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX;
					if (dynamic_cast<IEnvelopeProxy*>((EarthView::World::Spatial::Geometry::IEnvelope*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IEnvelope::getMinZ();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getMinZ();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IEnvelope_getMinZ_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IEnvelope_getMinZ_ev_real64_Callback* pCallback )
				{
					IEnvelopeProxy* ptr = dynamic_cast<IEnvelopeProxy*>((EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IEnvelope_getMinZ_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_IEnvelope_getMinZ_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IEnvelope::getMinZ();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_IEnvelope_getMaxZ_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX;
					if (dynamic_cast<IEnvelopeProxy*>((EarthView::World::Spatial::Geometry::IEnvelope*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IEnvelope::getMaxZ();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getMaxZ();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IEnvelope_getMaxZ_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IEnvelope_getMaxZ_ev_real64_Callback* pCallback )
				{
					IEnvelopeProxy* ptr = dynamic_cast<IEnvelopeProxy*>((EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IEnvelope_getMaxZ_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_IEnvelope_getMaxZ_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IEnvelope::getMaxZ();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_IEnvelope_getWidth_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX;
					if (dynamic_cast<IEnvelopeProxy*>((EarthView::World::Spatial::Geometry::IEnvelope*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IEnvelope::getWidth();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getWidth();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IEnvelope_getWidth_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IEnvelope_getWidth_ev_real64_Callback* pCallback )
				{
					IEnvelopeProxy* ptr = dynamic_cast<IEnvelopeProxy*>((EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IEnvelope_getWidth_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_IEnvelope_getWidth_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IEnvelope::getWidth();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_IEnvelope_getHeight_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX;
					if (dynamic_cast<IEnvelopeProxy*>((EarthView::World::Spatial::Geometry::IEnvelope*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IEnvelope::getHeight();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getHeight();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IEnvelope_getHeight_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IEnvelope_getHeight_ev_real64_Callback* pCallback )
				{
					IEnvelopeProxy* ptr = dynamic_cast<IEnvelopeProxy*>((EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IEnvelope_getHeight_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_IEnvelope_getHeight_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IEnvelope::getHeight();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_IEnvelope_getDepth_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX;
					if (dynamic_cast<IEnvelopeProxy*>((EarthView::World::Spatial::Geometry::IEnvelope*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IEnvelope::getDepth();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getDepth();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IEnvelope_getDepth_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IEnvelope_getDepth_ev_real64_Callback* pCallback )
				{
					IEnvelopeProxy* ptr = dynamic_cast<IEnvelopeProxy*>((EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IEnvelope_getDepth_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_IEnvelope_getDepth_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IEnvelope::getDepth();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_IEnvelope_isBox_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX;
					if (dynamic_cast<IEnvelopeProxy*>((EarthView::World::Spatial::Geometry::IEnvelope*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IEnvelope::isBox();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isBox();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IEnvelope_isBox_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IEnvelope_isBox_ev_bool_Callback* pCallback )
				{
					IEnvelopeProxy* ptr = dynamic_cast<IEnvelopeProxy*>((EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IEnvelope_isBox_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_IEnvelope_isBox_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IEnvelope::isBox();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_IEnvelope_isValid_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX;
					if (dynamic_cast<IEnvelopeProxy*>((EarthView::World::Spatial::Geometry::IEnvelope*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IEnvelope::isValid();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isValid();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IEnvelope_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IEnvelope_isValid_ev_bool_Callback* pCallback )
				{
					IEnvelopeProxy* ptr = dynamic_cast<IEnvelopeProxy*>((EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IEnvelope_isValid_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_IEnvelope_isValid_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IEnvelope::isValid();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Geometry_IEnvelope_clone_IEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX;
					if (dynamic_cast<IEnvelopeProxy*>((EarthView::World::Spatial::Geometry::IEnvelope*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IEnvelope::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IEnvelope_clone_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IEnvelope_clone_IEnvelope_Callback* pCallback )
				{
					IEnvelopeProxy* ptr = dynamic_cast<IEnvelopeProxy*>((EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IEnvelope_clone_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Geometry_IEnvelope_clone_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IEnvelope::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_IEnvelope_setMinX_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Geometry::IEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX;
					if (dynamic_cast<IEnvelopeProxy*>((EarthView::World::Spatial::Geometry::IEnvelope*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::IEnvelope::setMinX(value);
					else
						ptrNativeObject->setMinX(value);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IEnvelope_setMinX_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IEnvelope_setMinX_void_ev_real64_Callback* pCallback )
				{
					IEnvelopeProxy* ptr = dynamic_cast<IEnvelopeProxy*>((EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IEnvelope_setMinX_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_IEnvelope_setMinX_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Geometry::IEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::IEnvelope::setMinX(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_IEnvelope_setMaxX_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Geometry::IEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX;
					if (dynamic_cast<IEnvelopeProxy*>((EarthView::World::Spatial::Geometry::IEnvelope*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::IEnvelope::setMaxX(value);
					else
						ptrNativeObject->setMaxX(value);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IEnvelope_setMaxX_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IEnvelope_setMaxX_void_ev_real64_Callback* pCallback )
				{
					IEnvelopeProxy* ptr = dynamic_cast<IEnvelopeProxy*>((EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IEnvelope_setMaxX_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_IEnvelope_setMaxX_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Geometry::IEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::IEnvelope::setMaxX(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_IEnvelope_setMinY_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Geometry::IEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX;
					if (dynamic_cast<IEnvelopeProxy*>((EarthView::World::Spatial::Geometry::IEnvelope*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::IEnvelope::setMinY(value);
					else
						ptrNativeObject->setMinY(value);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IEnvelope_setMinY_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IEnvelope_setMinY_void_ev_real64_Callback* pCallback )
				{
					IEnvelopeProxy* ptr = dynamic_cast<IEnvelopeProxy*>((EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IEnvelope_setMinY_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_IEnvelope_setMinY_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Geometry::IEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::IEnvelope::setMinY(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_IEnvelope_setMaxY_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Geometry::IEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX;
					if (dynamic_cast<IEnvelopeProxy*>((EarthView::World::Spatial::Geometry::IEnvelope*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::IEnvelope::setMaxY(value);
					else
						ptrNativeObject->setMaxY(value);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IEnvelope_setMaxY_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IEnvelope_setMaxY_void_ev_real64_Callback* pCallback )
				{
					IEnvelopeProxy* ptr = dynamic_cast<IEnvelopeProxy*>((EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IEnvelope_setMaxY_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_IEnvelope_setMaxY_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Geometry::IEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::IEnvelope::setMaxY(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_IEnvelope_setMinZ_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Geometry::IEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX;
					if (dynamic_cast<IEnvelopeProxy*>((EarthView::World::Spatial::Geometry::IEnvelope*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::IEnvelope::setMinZ(value);
					else
						ptrNativeObject->setMinZ(value);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IEnvelope_setMinZ_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IEnvelope_setMinZ_void_ev_real64_Callback* pCallback )
				{
					IEnvelopeProxy* ptr = dynamic_cast<IEnvelopeProxy*>((EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IEnvelope_setMinZ_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_IEnvelope_setMinZ_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Geometry::IEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::IEnvelope::setMinZ(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_IEnvelope_setMaxZ_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Geometry::IEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX;
					if (dynamic_cast<IEnvelopeProxy*>((EarthView::World::Spatial::Geometry::IEnvelope*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::IEnvelope::setMaxZ(value);
					else
						ptrNativeObject->setMaxZ(value);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IEnvelope_setMaxZ_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IEnvelope_setMaxZ_void_ev_real64_Callback* pCallback )
				{
					IEnvelopeProxy* ptr = dynamic_cast<IEnvelopeProxy*>((EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IEnvelope_setMaxZ_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_IEnvelope_setMaxZ_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Geometry::IEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::IEnvelope::setMaxZ(value);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_IEnvelope_containsCoordinate_ev_bool_ev_real64_ev_real64_ev_real64_EVDimensionType(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z, _in int type )
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX;
					if (dynamic_cast<IEnvelopeProxy*>((EarthView::World::Spatial::Geometry::IEnvelope*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IEnvelope::containsCoordinate(x, y, z, (EarthView::World::Spatial::Geometry::EVDimensionType)type);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->containsCoordinate(x, y, z, (EarthView::World::Spatial::Geometry::EVDimensionType)type);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IEnvelope_containsCoordinate_ev_bool_ev_real64_ev_real64_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IEnvelope_containsCoordinate_ev_bool_ev_real64_ev_real64_ev_real64_EVDimensionType_Callback* pCallback )
				{
					IEnvelopeProxy* ptr = dynamic_cast<IEnvelopeProxy*>((EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IEnvelope_containsCoordinate_ev_bool_ev_real64_ev_real64_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_IEnvelope_containsCoordinate_ev_bool_ev_real64_ev_real64_ev_real64_EVDimensionType_NoVirtual(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z, _in int type )
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IEnvelope::containsCoordinate(x, y, z, (EarthView::World::Spatial::Geometry::EVDimensionType)type);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_IEnvelope_containsEnvelope_ev_bool_IEnvelope_EVDimensionType(void *pObjectXXXX, _in const void* envelope, _in int type )
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX;
					if (dynamic_cast<IEnvelopeProxy*>((EarthView::World::Spatial::Geometry::IEnvelope*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IEnvelope::containsEnvelope(*(EarthView::World::Spatial::Geometry::IEnvelope*)envelope, (EarthView::World::Spatial::Geometry::EVDimensionType)type);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->containsEnvelope(*(EarthView::World::Spatial::Geometry::IEnvelope*)envelope, (EarthView::World::Spatial::Geometry::EVDimensionType)type);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IEnvelope_containsEnvelope_ev_bool_IEnvelope_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IEnvelope_containsEnvelope_ev_bool_IEnvelope_EVDimensionType_Callback* pCallback )
				{
					IEnvelopeProxy* ptr = dynamic_cast<IEnvelopeProxy*>((EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IEnvelope_containsEnvelope_ev_bool_IEnvelope_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_IEnvelope_containsEnvelope_ev_bool_IEnvelope_EVDimensionType_NoVirtual(void *pObjectXXXX, _in const void* envelope, _in int type )
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IEnvelope::containsEnvelope(*(EarthView::World::Spatial::Geometry::IEnvelope*)envelope, (EarthView::World::Spatial::Geometry::EVDimensionType)type);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_IEnvelope_isIntersects_ev_bool_IEnvelope_EVDimensionType(void *pObjectXXXX, _in const void* envelope, _in int type )
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX;
					if (dynamic_cast<IEnvelopeProxy*>((EarthView::World::Spatial::Geometry::IEnvelope*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IEnvelope::isIntersects(*(EarthView::World::Spatial::Geometry::IEnvelope*)envelope, (EarthView::World::Spatial::Geometry::EVDimensionType)type);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isIntersects(*(EarthView::World::Spatial::Geometry::IEnvelope*)envelope, (EarthView::World::Spatial::Geometry::EVDimensionType)type);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IEnvelope_isIntersects_ev_bool_IEnvelope_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IEnvelope_isIntersects_ev_bool_IEnvelope_EVDimensionType_Callback* pCallback )
				{
					IEnvelopeProxy* ptr = dynamic_cast<IEnvelopeProxy*>((EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IEnvelope_isIntersects_ev_bool_IEnvelope_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_IEnvelope_isIntersects_ev_bool_IEnvelope_EVDimensionType_NoVirtual(void *pObjectXXXX, _in const void* envelope, _in int type )
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IEnvelope::isIntersects(*(EarthView::World::Spatial::Geometry::IEnvelope*)envelope, (EarthView::World::Spatial::Geometry::EVDimensionType)type);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_IEnvelope_expands_void_ev_bool_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_bool isRadio, _in ev_real64 scaleX, _in ev_real64 scaleY, _in ev_real64 scaleZ )
				{
					EarthView::World::Spatial::Geometry::IEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX;
					if (dynamic_cast<IEnvelopeProxy*>((EarthView::World::Spatial::Geometry::IEnvelope*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::IEnvelope::expands(isRadio, scaleX, scaleY, scaleZ);
					else
						ptrNativeObject->expands(isRadio, scaleX, scaleY, scaleZ);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IEnvelope_expands_void_ev_bool_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IEnvelope_expands_void_ev_bool_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					IEnvelopeProxy* ptr = dynamic_cast<IEnvelopeProxy*>((EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IEnvelope_expands_void_ev_bool_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_IEnvelope_expands_void_ev_bool_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_bool isRadio, _in ev_real64 scaleX, _in ev_real64 scaleY, _in ev_real64 scaleZ )
				{
					EarthView::World::Spatial::Geometry::IEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::IEnvelope::expands(isRadio, scaleX, scaleY, scaleZ);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_IEnvelope_unions_void_IEnvelope_EVDimensionType(void *pObjectXXXX, _in const void* envelope, _in int type )
				{
					EarthView::World::Spatial::Geometry::IEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX;
					if (dynamic_cast<IEnvelopeProxy*>((EarthView::World::Spatial::Geometry::IEnvelope*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::IEnvelope::unions(*(EarthView::World::Spatial::Geometry::IEnvelope*)envelope, (EarthView::World::Spatial::Geometry::EVDimensionType)type);
					else
						ptrNativeObject->unions(*(EarthView::World::Spatial::Geometry::IEnvelope*)envelope, (EarthView::World::Spatial::Geometry::EVDimensionType)type);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IEnvelope_unions_void_IEnvelope_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IEnvelope_unions_void_IEnvelope_EVDimensionType_Callback* pCallback )
				{
					IEnvelopeProxy* ptr = dynamic_cast<IEnvelopeProxy*>((EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IEnvelope_unions_void_IEnvelope_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_IEnvelope_unions_void_IEnvelope_EVDimensionType_NoVirtual(void *pObjectXXXX, _in const void* envelope, _in int type )
				{
					EarthView::World::Spatial::Geometry::IEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::IEnvelope::unions(*(EarthView::World::Spatial::Geometry::IEnvelope*)envelope, (EarthView::World::Spatial::Geometry::EVDimensionType)type);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_IEnvelope_intersects_void_IEnvelope_EVDimensionType(void *pObjectXXXX, _in const void* envelope, _in int type )
				{
					EarthView::World::Spatial::Geometry::IEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX;
					if (dynamic_cast<IEnvelopeProxy*>((EarthView::World::Spatial::Geometry::IEnvelope*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::IEnvelope::intersects(*(EarthView::World::Spatial::Geometry::IEnvelope*)envelope, (EarthView::World::Spatial::Geometry::EVDimensionType)type);
					else
						ptrNativeObject->intersects(*(EarthView::World::Spatial::Geometry::IEnvelope*)envelope, (EarthView::World::Spatial::Geometry::EVDimensionType)type);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IEnvelope_intersects_void_IEnvelope_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IEnvelope_intersects_void_IEnvelope_EVDimensionType_Callback* pCallback )
				{
					IEnvelopeProxy* ptr = dynamic_cast<IEnvelopeProxy*>((EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IEnvelope_intersects_void_IEnvelope_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_IEnvelope_intersects_void_IEnvelope_EVDimensionType_NoVirtual(void *pObjectXXXX, _in const void* envelope, _in int type )
				{
					EarthView::World::Spatial::Geometry::IEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::IEnvelope::intersects(*(EarthView::World::Spatial::Geometry::IEnvelope*)envelope, (EarthView::World::Spatial::Geometry::EVDimensionType)type);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_IEnvelope_equals_ev_bool_IEnvelope_ev_real64_EVDimensionType(void *pObjectXXXX, _in const void* envelope, _in ev_real64 tolerance, _in int type )
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX;
					if (dynamic_cast<IEnvelopeProxy*>((EarthView::World::Spatial::Geometry::IEnvelope*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IEnvelope::equals(*(EarthView::World::Spatial::Geometry::IEnvelope*)envelope, tolerance, (EarthView::World::Spatial::Geometry::EVDimensionType)type);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->equals(*(EarthView::World::Spatial::Geometry::IEnvelope*)envelope, tolerance, (EarthView::World::Spatial::Geometry::EVDimensionType)type);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IEnvelope_equals_ev_bool_IEnvelope_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IEnvelope_equals_ev_bool_IEnvelope_ev_real64_EVDimensionType_Callback* pCallback )
				{
					IEnvelopeProxy* ptr = dynamic_cast<IEnvelopeProxy*>((EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IEnvelope_equals_ev_bool_IEnvelope_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_IEnvelope_equals_ev_bool_IEnvelope_ev_real64_EVDimensionType_NoVirtual(void *pObjectXXXX, _in const void* envelope, _in ev_real64 tolerance, _in int type )
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEnvelope*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IEnvelope::equals(*(EarthView::World::Spatial::Geometry::IEnvelope*)envelope, tolerance, (EarthView::World::Spatial::Geometry::EVDimensionType)type);
					return objXXXX;
				}
			}
		}
	}
}
