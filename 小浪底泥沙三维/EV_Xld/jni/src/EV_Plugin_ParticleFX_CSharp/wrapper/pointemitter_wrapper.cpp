/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "plugin_particlefx/pointemitter.h"
namespace EarthView
{
	namespace World
	{
		namespace Plugin
		{
			namespace ParticleFX
			{
				typedef EarthView::World::Graphic::CParticleEmitter::CParticleEmitterInternalStringInterface*  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_getStringInterfacePtr_CParticleEmitterInternalStringInterface_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionDirectionNoRandom_void_CVector3_Callback)(_inout void* destVector);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionDirection_void_CVector3_Callback)(_inout void* destVector);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionVelocity_void_CVector3_Callback)(_inout void* destVector);
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionTTL_Real_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionColour_void_CColourValue_Callback)(_inout void* destColour);
				typedef ev_uint16  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_genConstantEmissionCount_ev_uint16_Real_Callback)(_in Real timeElapsed);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_setPosition_void_CVector3_Callback)(_in const void* pos);
				typedef const void*  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_getPosition_CVector3_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_setDirection_void_CVector3_Callback)(_in const void* direction);
				typedef const void*  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_getDirection_CVector3_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_setUp_void_CVector3_Callback)(_in const void* up);
				typedef const void*  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_getUp_CVector3_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_setAngle_void_CRadian_Callback)(_in const void* angle);
				typedef const void*  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_getAngle_CRadian_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_setParticleVelocity_void_Real_Callback)(_in Real speed);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_setParticleVelocity_void_Real_Real_Callback)(_in Real min, _in Real max);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_setMinParticleVelocity_void_Real_Callback)(_in Real min);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_setMaxParticleVelocity_void_Real_Callback)(_in Real max);
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_getParticleVelocity_Real_Callback)();
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_getMinParticleVelocity_Real_Callback)();
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_getMaxParticleVelocity_Real_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_setEmissionRate_void_Real_Callback)(_in Real particlesPerSecond);
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_getEmissionRate_Real_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_setTimeToLive_void_Real_Callback)(_in Real ttl);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_setTimeToLive_void_Real_Real_Callback)(_in Real minTtl, _in Real maxTtl);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_setMinTimeToLive_void_Real_Callback)(_in Real min);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_setMaxTimeToLive_void_Real_Callback)(_in Real max);
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_getTimeToLive_Real_Callback)();
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_getMinTimeToLive_Real_Callback)();
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_getMaxTimeToLive_Real_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_setColour_void_CColourValue_Callback)(_in const void* colour);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_setColour_void_CColourValue_CColourValue_Callback)(_in const void* colourStart, _in const void* colourEnd);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_setColourRangeStart_void_CColourValue_Callback)(_in const void* colour);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_setColourRangeEnd_void_CColourValue_Callback)(_in const void* colour);
				typedef const void*  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_getColour_CColourValue_Callback)();
				typedef const void*  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_getColourRangeStart_CColourValue_Callback)();
				typedef const void*  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_getColourRangeEnd_CColourValue_Callback)();
				typedef ev_uint16  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter__getEmissionCount_ev_uint16_Real_Callback)(_in Real timeElapsed);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter__initParticle_void_CParticle_Callback)(_in EarthView::World::Graphic::CParticle* pParticle);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_setEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
				typedef ev_bool  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_getEnabled_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_setStartTime_void_Real_Callback)(_in Real startTime);
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_getStartTime_Real_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_setDuration_void_Real_Callback)(_in Real duration);
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_getDuration_Real_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_setDuration_void_Real_Real_Callback)(_in Real min, _in Real max);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_setMinDuration_void_Real_Callback)(_in Real min);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_setMaxDuration_void_Real_Callback)(_in Real max);
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_getMinDuration_Real_Callback)();
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_getMaxDuration_Real_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_setRepeatDelay_void_Real_Callback)(_in Real duration);
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_getRepeatDelay_Real_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_setRepeatDelay_void_Real_Real_Callback)(_in Real min, _in Real max);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_setMinRepeatDelay_void_Real_Callback)(_in Real min);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_setMaxRepeatDelay_void_Real_Callback)(_in Real max);
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_getMinRepeatDelay_Real_Callback)();
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_getMaxRepeatDelay_Real_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_setName_void_EVString_Callback)(_in char*& newName);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_setEmittedEmitter_void_EVString_Callback)(_in char*& emittedEmitter);
				typedef ev_bool  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_isEmitted_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter_setEmitted_void_ev_bool_Callback)(_in ev_bool emitted);
				class CPointEmitterProxy : public EarthView::World::Plugin::ParticleFX::CPointEmitter
				{
				private:
					EarthView_World_Plugin_ParticleFX_CPointEmitter_getStringInterfacePtr_CParticleEmitterInternalStringInterface_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getStringInterfacePtr_CParticleEmitterInternalStringInterface_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionDirectionNoRandom_void_CVector3_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionDirectionNoRandom_void_CVector3_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionDirection_void_CVector3_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionDirection_void_CVector3_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionVelocity_void_CVector3_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionVelocity_void_CVector3_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionTTL_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionTTL_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionColour_void_CColourValue_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionColour_void_CColourValue_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter_genConstantEmissionCount_ev_uint16_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_genConstantEmissionCount_ev_uint16_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter_setPosition_void_CVector3_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setPosition_void_CVector3_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter_getPosition_CVector3_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getPosition_CVector3_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter_setDirection_void_CVector3_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setDirection_void_CVector3_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter_getDirection_CVector3_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getDirection_CVector3_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter_setUp_void_CVector3_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setUp_void_CVector3_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter_getUp_CVector3_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getUp_CVector3_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter_setAngle_void_CRadian_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setAngle_void_CRadian_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter_getAngle_CRadian_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getAngle_CRadian_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter_setParticleVelocity_void_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setParticleVelocity_void_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter_setParticleVelocity_void_Real_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setParticleVelocity_void_Real_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter_setMinParticleVelocity_void_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMinParticleVelocity_void_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter_setMaxParticleVelocity_void_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMaxParticleVelocity_void_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter_getParticleVelocity_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getParticleVelocity_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter_getMinParticleVelocity_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMinParticleVelocity_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter_getMaxParticleVelocity_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMaxParticleVelocity_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter_setEmissionRate_void_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setEmissionRate_void_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter_getEmissionRate_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getEmissionRate_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter_setTimeToLive_void_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setTimeToLive_void_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter_setTimeToLive_void_Real_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setTimeToLive_void_Real_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter_setMinTimeToLive_void_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMinTimeToLive_void_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter_setMaxTimeToLive_void_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMaxTimeToLive_void_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter_getTimeToLive_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getTimeToLive_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter_getMinTimeToLive_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMinTimeToLive_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter_getMaxTimeToLive_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMaxTimeToLive_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter_setColour_void_CColourValue_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setColour_void_CColourValue_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter_setColour_void_CColourValue_CColourValue_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setColour_void_CColourValue_CColourValue_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter_setColourRangeStart_void_CColourValue_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setColourRangeStart_void_CColourValue_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter_setColourRangeEnd_void_CColourValue_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setColourRangeEnd_void_CColourValue_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter_getColour_CColourValue_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getColour_CColourValue_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter_getColourRangeStart_CColourValue_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getColourRangeStart_CColourValue_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter_getColourRangeEnd_CColourValue_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getColourRangeEnd_CColourValue_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter__getEmissionCount_ev_uint16_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter__getEmissionCount_ev_uint16_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter__initParticle_void_CParticle_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter__initParticle_void_CParticle_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter_setEnabled_void_ev_bool_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setEnabled_void_ev_bool_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter_getEnabled_ev_bool_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getEnabled_ev_bool_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter_setStartTime_void_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setStartTime_void_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter_getStartTime_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getStartTime_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter_setDuration_void_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setDuration_void_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter_getDuration_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getDuration_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter_setDuration_void_Real_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setDuration_void_Real_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter_setMinDuration_void_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMinDuration_void_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter_setMaxDuration_void_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMaxDuration_void_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter_getMinDuration_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMinDuration_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter_getMaxDuration_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMaxDuration_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter_setRepeatDelay_void_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setRepeatDelay_void_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter_getRepeatDelay_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getRepeatDelay_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter_setRepeatDelay_void_Real_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setRepeatDelay_void_Real_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter_setMinRepeatDelay_void_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMinRepeatDelay_void_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter_setMaxRepeatDelay_void_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMaxRepeatDelay_void_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter_getMinRepeatDelay_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMinRepeatDelay_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter_getMaxRepeatDelay_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMaxRepeatDelay_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter_setName_void_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setName_void_EVString_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter_setEmittedEmitter_void_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setEmittedEmitter_void_EVString_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter_isEmitted_ev_bool_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_isEmitted_ev_bool_Callback;
					EarthView_World_Plugin_ParticleFX_CPointEmitter_setEmitted_void_ev_bool_Callback* m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setEmitted_void_ev_bool_Callback;
				public:
					CPointEmitterProxy(EarthView::World::Core::CNameValuePairList *pList) : CPointEmitter(pList)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getStringInterfacePtr_CParticleEmitterInternalStringInterface_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionDirectionNoRandom_void_CVector3_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionDirection_void_CVector3_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionVelocity_void_CVector3_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionTTL_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionColour_void_CColourValue_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_genConstantEmissionCount_ev_uint16_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setPosition_void_CVector3_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getPosition_CVector3_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setDirection_void_CVector3_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getDirection_CVector3_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setUp_void_CVector3_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getUp_CVector3_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setAngle_void_CRadian_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getAngle_CRadian_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setParticleVelocity_void_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setParticleVelocity_void_Real_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMinParticleVelocity_void_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMaxParticleVelocity_void_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getParticleVelocity_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMinParticleVelocity_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMaxParticleVelocity_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setEmissionRate_void_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getEmissionRate_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setTimeToLive_void_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setTimeToLive_void_Real_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMinTimeToLive_void_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMaxTimeToLive_void_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getTimeToLive_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMinTimeToLive_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMaxTimeToLive_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setColour_void_CColourValue_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setColour_void_CColourValue_CColourValue_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setColourRangeStart_void_CColourValue_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setColourRangeEnd_void_CColourValue_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getColour_CColourValue_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getColourRangeStart_CColourValue_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getColourRangeEnd_CColourValue_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter__getEmissionCount_ev_uint16_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter__initParticle_void_CParticle_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setEnabled_void_ev_bool_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getEnabled_ev_bool_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setStartTime_void_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getStartTime_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setDuration_void_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getDuration_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setDuration_void_Real_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMinDuration_void_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMaxDuration_void_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMinDuration_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMaxDuration_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setRepeatDelay_void_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getRepeatDelay_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setRepeatDelay_void_Real_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMinRepeatDelay_void_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMaxRepeatDelay_void_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMinRepeatDelay_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMaxRepeatDelay_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setEmittedEmitter_void_EVString_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_isEmitted_ev_bool_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setEmitted_void_ev_bool_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getStringInterfacePtr_CParticleEmitterInternalStringInterface(EarthView_World_Plugin_ParticleFX_CPointEmitter_getStringInterfacePtr_CParticleEmitterInternalStringInterface_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getStringInterfacePtr_CParticleEmitterInternalStringInterface_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionDirectionNoRandom_void_CVector3(EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionDirectionNoRandom_void_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionDirectionNoRandom_void_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionDirection_void_CVector3(EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionDirection_void_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionDirection_void_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionVelocity_void_CVector3(EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionVelocity_void_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionVelocity_void_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionTTL_Real(EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionTTL_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionTTL_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionColour_void_CColourValue(EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionColour_void_CColourValue_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionColour_void_CColourValue_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_genConstantEmissionCount_ev_uint16_Real(EarthView_World_Plugin_ParticleFX_CPointEmitter_genConstantEmissionCount_ev_uint16_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_genConstantEmissionCount_ev_uint16_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setPosition_void_CVector3(EarthView_World_Plugin_ParticleFX_CPointEmitter_setPosition_void_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setPosition_void_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getPosition_CVector3(EarthView_World_Plugin_ParticleFX_CPointEmitter_getPosition_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getPosition_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setDirection_void_CVector3(EarthView_World_Plugin_ParticleFX_CPointEmitter_setDirection_void_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setDirection_void_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getDirection_CVector3(EarthView_World_Plugin_ParticleFX_CPointEmitter_getDirection_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getDirection_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setUp_void_CVector3(EarthView_World_Plugin_ParticleFX_CPointEmitter_setUp_void_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setUp_void_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getUp_CVector3(EarthView_World_Plugin_ParticleFX_CPointEmitter_getUp_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getUp_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setAngle_void_CRadian(EarthView_World_Plugin_ParticleFX_CPointEmitter_setAngle_void_CRadian_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setAngle_void_CRadian_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getAngle_CRadian(EarthView_World_Plugin_ParticleFX_CPointEmitter_getAngle_CRadian_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getAngle_CRadian_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setParticleVelocity_void_Real(EarthView_World_Plugin_ParticleFX_CPointEmitter_setParticleVelocity_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setParticleVelocity_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setParticleVelocity_void_Real_Real(EarthView_World_Plugin_ParticleFX_CPointEmitter_setParticleVelocity_void_Real_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setParticleVelocity_void_Real_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMinParticleVelocity_void_Real(EarthView_World_Plugin_ParticleFX_CPointEmitter_setMinParticleVelocity_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMinParticleVelocity_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMaxParticleVelocity_void_Real(EarthView_World_Plugin_ParticleFX_CPointEmitter_setMaxParticleVelocity_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMaxParticleVelocity_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getParticleVelocity_Real(EarthView_World_Plugin_ParticleFX_CPointEmitter_getParticleVelocity_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getParticleVelocity_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMinParticleVelocity_Real(EarthView_World_Plugin_ParticleFX_CPointEmitter_getMinParticleVelocity_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMinParticleVelocity_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMaxParticleVelocity_Real(EarthView_World_Plugin_ParticleFX_CPointEmitter_getMaxParticleVelocity_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMaxParticleVelocity_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setEmissionRate_void_Real(EarthView_World_Plugin_ParticleFX_CPointEmitter_setEmissionRate_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setEmissionRate_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getEmissionRate_Real(EarthView_World_Plugin_ParticleFX_CPointEmitter_getEmissionRate_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getEmissionRate_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setTimeToLive_void_Real(EarthView_World_Plugin_ParticleFX_CPointEmitter_setTimeToLive_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setTimeToLive_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setTimeToLive_void_Real_Real(EarthView_World_Plugin_ParticleFX_CPointEmitter_setTimeToLive_void_Real_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setTimeToLive_void_Real_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMinTimeToLive_void_Real(EarthView_World_Plugin_ParticleFX_CPointEmitter_setMinTimeToLive_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMinTimeToLive_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMaxTimeToLive_void_Real(EarthView_World_Plugin_ParticleFX_CPointEmitter_setMaxTimeToLive_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMaxTimeToLive_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getTimeToLive_Real(EarthView_World_Plugin_ParticleFX_CPointEmitter_getTimeToLive_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getTimeToLive_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMinTimeToLive_Real(EarthView_World_Plugin_ParticleFX_CPointEmitter_getMinTimeToLive_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMinTimeToLive_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMaxTimeToLive_Real(EarthView_World_Plugin_ParticleFX_CPointEmitter_getMaxTimeToLive_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMaxTimeToLive_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setColour_void_CColourValue(EarthView_World_Plugin_ParticleFX_CPointEmitter_setColour_void_CColourValue_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setColour_void_CColourValue_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setColour_void_CColourValue_CColourValue(EarthView_World_Plugin_ParticleFX_CPointEmitter_setColour_void_CColourValue_CColourValue_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setColour_void_CColourValue_CColourValue_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setColourRangeStart_void_CColourValue(EarthView_World_Plugin_ParticleFX_CPointEmitter_setColourRangeStart_void_CColourValue_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setColourRangeStart_void_CColourValue_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setColourRangeEnd_void_CColourValue(EarthView_World_Plugin_ParticleFX_CPointEmitter_setColourRangeEnd_void_CColourValue_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setColourRangeEnd_void_CColourValue_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getColour_CColourValue(EarthView_World_Plugin_ParticleFX_CPointEmitter_getColour_CColourValue_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getColour_CColourValue_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getColourRangeStart_CColourValue(EarthView_World_Plugin_ParticleFX_CPointEmitter_getColourRangeStart_CColourValue_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getColourRangeStart_CColourValue_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getColourRangeEnd_CColourValue(EarthView_World_Plugin_ParticleFX_CPointEmitter_getColourRangeEnd_CColourValue_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getColourRangeEnd_CColourValue_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter__getEmissionCount_ev_uint16_Real(EarthView_World_Plugin_ParticleFX_CPointEmitter__getEmissionCount_ev_uint16_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter__getEmissionCount_ev_uint16_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter__initParticle_void_CParticle(EarthView_World_Plugin_ParticleFX_CPointEmitter__initParticle_void_CParticle_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter__initParticle_void_CParticle_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setEnabled_void_ev_bool(EarthView_World_Plugin_ParticleFX_CPointEmitter_setEnabled_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setEnabled_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getEnabled_ev_bool(EarthView_World_Plugin_ParticleFX_CPointEmitter_getEnabled_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getEnabled_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setStartTime_void_Real(EarthView_World_Plugin_ParticleFX_CPointEmitter_setStartTime_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setStartTime_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getStartTime_Real(EarthView_World_Plugin_ParticleFX_CPointEmitter_getStartTime_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getStartTime_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setDuration_void_Real(EarthView_World_Plugin_ParticleFX_CPointEmitter_setDuration_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setDuration_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getDuration_Real(EarthView_World_Plugin_ParticleFX_CPointEmitter_getDuration_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getDuration_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setDuration_void_Real_Real(EarthView_World_Plugin_ParticleFX_CPointEmitter_setDuration_void_Real_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setDuration_void_Real_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMinDuration_void_Real(EarthView_World_Plugin_ParticleFX_CPointEmitter_setMinDuration_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMinDuration_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMaxDuration_void_Real(EarthView_World_Plugin_ParticleFX_CPointEmitter_setMaxDuration_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMaxDuration_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMinDuration_Real(EarthView_World_Plugin_ParticleFX_CPointEmitter_getMinDuration_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMinDuration_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMaxDuration_Real(EarthView_World_Plugin_ParticleFX_CPointEmitter_getMaxDuration_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMaxDuration_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setRepeatDelay_void_Real(EarthView_World_Plugin_ParticleFX_CPointEmitter_setRepeatDelay_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setRepeatDelay_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getRepeatDelay_Real(EarthView_World_Plugin_ParticleFX_CPointEmitter_getRepeatDelay_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getRepeatDelay_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setRepeatDelay_void_Real_Real(EarthView_World_Plugin_ParticleFX_CPointEmitter_setRepeatDelay_void_Real_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setRepeatDelay_void_Real_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMinRepeatDelay_void_Real(EarthView_World_Plugin_ParticleFX_CPointEmitter_setMinRepeatDelay_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMinRepeatDelay_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMaxRepeatDelay_void_Real(EarthView_World_Plugin_ParticleFX_CPointEmitter_setMaxRepeatDelay_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMaxRepeatDelay_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMinRepeatDelay_Real(EarthView_World_Plugin_ParticleFX_CPointEmitter_getMinRepeatDelay_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMinRepeatDelay_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMaxRepeatDelay_Real(EarthView_World_Plugin_ParticleFX_CPointEmitter_getMaxRepeatDelay_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMaxRepeatDelay_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setName_void_EVString(EarthView_World_Plugin_ParticleFX_CPointEmitter_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setEmittedEmitter_void_EVString(EarthView_World_Plugin_ParticleFX_CPointEmitter_setEmittedEmitter_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setEmittedEmitter_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_isEmitted_ev_bool(EarthView_World_Plugin_ParticleFX_CPointEmitter_isEmitted_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_isEmitted_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setEmitted_void_ev_bool(EarthView_World_Plugin_ParticleFX_CPointEmitter_setEmitted_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setEmitted_void_ev_bool_Callback = pCallback;
					}
					virtual void _initParticle(_in EarthView::World::Graphic::CParticle* pParticle)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter__initParticle_void_CParticle_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CPointEmitter__initParticle_void_CParticle_Callback(pParticle);
						}
						else
							return this->CPointEmitter::_initParticle(pParticle);
					}
					virtual ev_uint16 _getEmissionCount(_in Real timeElapsed)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter__getEmissionCount_ev_uint16_Real_Callback != NULL && this->isCustomExtend())
						{
							ev_uint16 returnValue = m_EarthView_World_Plugin_ParticleFX_CPointEmitter__getEmissionCount_ev_uint16_Real_Callback(timeElapsed);
							return returnValue;
						}
						else
							return this->CPointEmitter::_getEmissionCount(timeElapsed);
					}
					virtual EarthView::World::Graphic::CParticleEmitter::CParticleEmitterInternalStringInterface* getStringInterfacePtr()
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getStringInterfacePtr_CParticleEmitterInternalStringInterface_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CParticleEmitter::CParticleEmitterInternalStringInterface* returnValue = m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getStringInterfacePtr_CParticleEmitterInternalStringInterface_Callback();
							return returnValue;
						}
						else
							return this->CPointEmitter::getStringInterfacePtr();
					}
					virtual void genEmissionDirectionNoRandom(_inout EarthView::World::Spatial::Math::CVector3& destVector)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionDirectionNoRandom_void_CVector3_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionDirectionNoRandom_void_CVector3_Callback(&destVector);
						}
						else
							return this->CPointEmitter::genEmissionDirectionNoRandom(destVector);
					}
					virtual void genEmissionDirection(_inout EarthView::World::Spatial::Math::CVector3& destVector)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionDirection_void_CVector3_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionDirection_void_CVector3_Callback(&destVector);
						}
						else
							return this->CPointEmitter::genEmissionDirection(destVector);
					}
					virtual void genEmissionVelocity(_inout EarthView::World::Spatial::Math::CVector3& destVector)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionVelocity_void_CVector3_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionVelocity_void_CVector3_Callback(&destVector);
						}
						else
							return this->CPointEmitter::genEmissionVelocity(destVector);
					}
					virtual Real genEmissionTTL()
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionTTL_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionTTL_Real_Callback();
							return returnValue;
						}
						else
							return this->CPointEmitter::genEmissionTTL();
					}
					virtual void genEmissionColour(_inout EarthView::World::Graphic::CColourValue& destColour)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionColour_void_CColourValue_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionColour_void_CColourValue_Callback(&destColour);
						}
						else
							return this->CPointEmitter::genEmissionColour(destColour);
					}
					virtual ev_uint16 genConstantEmissionCount(_in Real timeElapsed)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_genConstantEmissionCount_ev_uint16_Real_Callback != NULL && this->isCustomExtend())
						{
							ev_uint16 returnValue = m_EarthView_World_Plugin_ParticleFX_CPointEmitter_genConstantEmissionCount_ev_uint16_Real_Callback(timeElapsed);
							return returnValue;
						}
						else
							return this->CPointEmitter::genConstantEmissionCount(timeElapsed);
					}
					virtual void setPosition(_in const EarthView::World::Spatial::Math::CVector3& pos)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setPosition_void_CVector3_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setPosition_void_CVector3_Callback(&pos);
						}
						else
							return this->CPointEmitter::setPosition(pos);
					}
					virtual const EarthView::World::Spatial::Math::CVector3& getPosition() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getPosition_CVector3_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Math::CVector3& returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getPosition_CVector3_Callback();
							return returnValue;
						}
						else
							return this->CPointEmitter::getPosition();
					}
					virtual void setDirection(_in const EarthView::World::Spatial::Math::CVector3& direction)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setDirection_void_CVector3_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setDirection_void_CVector3_Callback(&direction);
						}
						else
							return this->CPointEmitter::setDirection(direction);
					}
					virtual const EarthView::World::Spatial::Math::CVector3& getDirection() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getDirection_CVector3_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Math::CVector3& returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getDirection_CVector3_Callback();
							return returnValue;
						}
						else
							return this->CPointEmitter::getDirection();
					}
					virtual void setUp(_in const EarthView::World::Spatial::Math::CVector3& up)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setUp_void_CVector3_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setUp_void_CVector3_Callback(&up);
						}
						else
							return this->CPointEmitter::setUp(up);
					}
					virtual const EarthView::World::Spatial::Math::CVector3& getUp() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getUp_CVector3_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Math::CVector3& returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getUp_CVector3_Callback();
							return returnValue;
						}
						else
							return this->CPointEmitter::getUp();
					}
					virtual void setAngle(_in const EarthView::World::Spatial::Math::CRadian& angle)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setAngle_void_CRadian_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setAngle_void_CRadian_Callback(&angle);
						}
						else
							return this->CPointEmitter::setAngle(angle);
					}
					virtual const EarthView::World::Spatial::Math::CRadian& getAngle() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getAngle_CRadian_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Math::CRadian& returnValue = *(EarthView::World::Spatial::Math::CRadian*)m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getAngle_CRadian_Callback();
							return returnValue;
						}
						else
							return this->CPointEmitter::getAngle();
					}
					virtual void setParticleVelocity(_in Real speed)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setParticleVelocity_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setParticleVelocity_void_Real_Callback(speed);
						}
						else
							return this->CPointEmitter::setParticleVelocity(speed);
					}
					virtual void setParticleVelocity(_in Real min, _in Real max)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setParticleVelocity_void_Real_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setParticleVelocity_void_Real_Real_Callback(min, max);
						}
						else
							return this->CPointEmitter::setParticleVelocity(min, max);
					}
					virtual void setMinParticleVelocity(_in Real min)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMinParticleVelocity_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMinParticleVelocity_void_Real_Callback(min);
						}
						else
							return this->CPointEmitter::setMinParticleVelocity(min);
					}
					virtual void setMaxParticleVelocity(_in Real max)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMaxParticleVelocity_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMaxParticleVelocity_void_Real_Callback(max);
						}
						else
							return this->CPointEmitter::setMaxParticleVelocity(max);
					}
					virtual Real getParticleVelocity() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getParticleVelocity_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getParticleVelocity_Real_Callback();
							return returnValue;
						}
						else
							return this->CPointEmitter::getParticleVelocity();
					}
					virtual Real getMinParticleVelocity() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMinParticleVelocity_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMinParticleVelocity_Real_Callback();
							return returnValue;
						}
						else
							return this->CPointEmitter::getMinParticleVelocity();
					}
					virtual Real getMaxParticleVelocity() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMaxParticleVelocity_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMaxParticleVelocity_Real_Callback();
							return returnValue;
						}
						else
							return this->CPointEmitter::getMaxParticleVelocity();
					}
					virtual void setEmissionRate(_in Real particlesPerSecond)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setEmissionRate_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setEmissionRate_void_Real_Callback(particlesPerSecond);
						}
						else
							return this->CPointEmitter::setEmissionRate(particlesPerSecond);
					}
					virtual Real getEmissionRate() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getEmissionRate_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getEmissionRate_Real_Callback();
							return returnValue;
						}
						else
							return this->CPointEmitter::getEmissionRate();
					}
					virtual void setTimeToLive(_in Real ttl)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setTimeToLive_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setTimeToLive_void_Real_Callback(ttl);
						}
						else
							return this->CPointEmitter::setTimeToLive(ttl);
					}
					virtual void setTimeToLive(_in Real minTtl, _in Real maxTtl)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setTimeToLive_void_Real_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setTimeToLive_void_Real_Real_Callback(minTtl, maxTtl);
						}
						else
							return this->CPointEmitter::setTimeToLive(minTtl, maxTtl);
					}
					virtual void setMinTimeToLive(_in Real min)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMinTimeToLive_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMinTimeToLive_void_Real_Callback(min);
						}
						else
							return this->CPointEmitter::setMinTimeToLive(min);
					}
					virtual void setMaxTimeToLive(_in Real max)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMaxTimeToLive_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMaxTimeToLive_void_Real_Callback(max);
						}
						else
							return this->CPointEmitter::setMaxTimeToLive(max);
					}
					virtual Real getTimeToLive() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getTimeToLive_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getTimeToLive_Real_Callback();
							return returnValue;
						}
						else
							return this->CPointEmitter::getTimeToLive();
					}
					virtual Real getMinTimeToLive() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMinTimeToLive_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMinTimeToLive_Real_Callback();
							return returnValue;
						}
						else
							return this->CPointEmitter::getMinTimeToLive();
					}
					virtual Real getMaxTimeToLive() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMaxTimeToLive_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMaxTimeToLive_Real_Callback();
							return returnValue;
						}
						else
							return this->CPointEmitter::getMaxTimeToLive();
					}
					virtual void setColour(_in const EarthView::World::Graphic::CColourValue& colour)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setColour_void_CColourValue_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setColour_void_CColourValue_Callback(&colour);
						}
						else
							return this->CPointEmitter::setColour(colour);
					}
					virtual void setColour(_in const EarthView::World::Graphic::CColourValue& colourStart, _in const EarthView::World::Graphic::CColourValue& colourEnd)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setColour_void_CColourValue_CColourValue_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setColour_void_CColourValue_CColourValue_Callback(&colourStart, &colourEnd);
						}
						else
							return this->CPointEmitter::setColour(colourStart, colourEnd);
					}
					virtual void setColourRangeStart(_in const EarthView::World::Graphic::CColourValue& colour)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setColourRangeStart_void_CColourValue_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setColourRangeStart_void_CColourValue_Callback(&colour);
						}
						else
							return this->CPointEmitter::setColourRangeStart(colour);
					}
					virtual void setColourRangeEnd(_in const EarthView::World::Graphic::CColourValue& colour)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setColourRangeEnd_void_CColourValue_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setColourRangeEnd_void_CColourValue_Callback(&colour);
						}
						else
							return this->CPointEmitter::setColourRangeEnd(colour);
					}
					virtual const EarthView::World::Graphic::CColourValue& getColour() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getColour_CColourValue_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Graphic::CColourValue& returnValue = *(EarthView::World::Graphic::CColourValue*)m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getColour_CColourValue_Callback();
							return returnValue;
						}
						else
							return this->CPointEmitter::getColour();
					}
					virtual const EarthView::World::Graphic::CColourValue& getColourRangeStart() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getColourRangeStart_CColourValue_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Graphic::CColourValue& returnValue = *(EarthView::World::Graphic::CColourValue*)m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getColourRangeStart_CColourValue_Callback();
							return returnValue;
						}
						else
							return this->CPointEmitter::getColourRangeStart();
					}
					virtual const EarthView::World::Graphic::CColourValue& getColourRangeEnd() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getColourRangeEnd_CColourValue_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Graphic::CColourValue& returnValue = *(EarthView::World::Graphic::CColourValue*)m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getColourRangeEnd_CColourValue_Callback();
							return returnValue;
						}
						else
							return this->CPointEmitter::getColourRangeEnd();
					}
					virtual void setEnabled(_in ev_bool enabled)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setEnabled_void_ev_bool_Callback(enabled);
						}
						else
							return this->CPointEmitter::setEnabled(enabled);
					}
					virtual ev_bool getEnabled() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getEnabled_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CPointEmitter::getEnabled();
					}
					virtual void setStartTime(_in Real startTime)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setStartTime_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setStartTime_void_Real_Callback(startTime);
						}
						else
							return this->CPointEmitter::setStartTime(startTime);
					}
					virtual Real getStartTime() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getStartTime_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getStartTime_Real_Callback();
							return returnValue;
						}
						else
							return this->CPointEmitter::getStartTime();
					}
					virtual void setDuration(_in Real duration)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setDuration_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setDuration_void_Real_Callback(duration);
						}
						else
							return this->CPointEmitter::setDuration(duration);
					}
					virtual Real getDuration() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getDuration_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getDuration_Real_Callback();
							return returnValue;
						}
						else
							return this->CPointEmitter::getDuration();
					}
					virtual void setDuration(_in Real min, _in Real max)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setDuration_void_Real_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setDuration_void_Real_Real_Callback(min, max);
						}
						else
							return this->CPointEmitter::setDuration(min, max);
					}
					virtual void setMinDuration(_in Real min)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMinDuration_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMinDuration_void_Real_Callback(min);
						}
						else
							return this->CPointEmitter::setMinDuration(min);
					}
					virtual void setMaxDuration(_in Real max)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMaxDuration_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMaxDuration_void_Real_Callback(max);
						}
						else
							return this->CPointEmitter::setMaxDuration(max);
					}
					virtual Real getMinDuration() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMinDuration_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMinDuration_Real_Callback();
							return returnValue;
						}
						else
							return this->CPointEmitter::getMinDuration();
					}
					virtual Real getMaxDuration() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMaxDuration_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMaxDuration_Real_Callback();
							return returnValue;
						}
						else
							return this->CPointEmitter::getMaxDuration();
					}
					virtual void setRepeatDelay(_in Real duration)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setRepeatDelay_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setRepeatDelay_void_Real_Callback(duration);
						}
						else
							return this->CPointEmitter::setRepeatDelay(duration);
					}
					virtual Real getRepeatDelay() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getRepeatDelay_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getRepeatDelay_Real_Callback();
							return returnValue;
						}
						else
							return this->CPointEmitter::getRepeatDelay();
					}
					virtual void setRepeatDelay(_in Real min, _in Real max)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setRepeatDelay_void_Real_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setRepeatDelay_void_Real_Real_Callback(min, max);
						}
						else
							return this->CPointEmitter::setRepeatDelay(min, max);
					}
					virtual void setMinRepeatDelay(_in Real min)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMinRepeatDelay_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMinRepeatDelay_void_Real_Callback(min);
						}
						else
							return this->CPointEmitter::setMinRepeatDelay(min);
					}
					virtual void setMaxRepeatDelay(_in Real max)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMaxRepeatDelay_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMaxRepeatDelay_void_Real_Callback(max);
						}
						else
							return this->CPointEmitter::setMaxRepeatDelay(max);
					}
					virtual Real getMinRepeatDelay() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMinRepeatDelay_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMinRepeatDelay_Real_Callback();
							return returnValue;
						}
						else
							return this->CPointEmitter::getMinRepeatDelay();
					}
					virtual Real getMaxRepeatDelay() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMaxRepeatDelay_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMaxRepeatDelay_Real_Callback();
							return returnValue;
						}
						else
							return this->CPointEmitter::getMaxRepeatDelay();
					}
					virtual void setName(_in const EVString& newName)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* newName_Char = newName.makeBuffer();
							m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setName_void_EVString_Callback(newName_Char);
						}
						else
							return this->CPointEmitter::setName(newName);
					}
					virtual void setEmittedEmitter(_in const EVString& emittedEmitter)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setEmittedEmitter_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* emittedEmitter_Char = emittedEmitter.makeBuffer();
							m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setEmittedEmitter_void_EVString_Callback(emittedEmitter_Char);
						}
						else
							return this->CPointEmitter::setEmittedEmitter(emittedEmitter);
					}
					virtual ev_bool isEmitted() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_isEmitted_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Plugin_ParticleFX_CPointEmitter_isEmitted_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CPointEmitter::isEmitted();
					}
					virtual void setEmitted(_in ev_bool emitted)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setEmitted_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CPointEmitter_setEmitted_void_ev_bool_Callback(emitted);
						}
						else
							return this->CPointEmitter::setEmitted(emitted);
					}
				};
				REGISTER_FACTORY_CLASS(CPointEmitterProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter__initParticle_void_CParticle(void *pObjectXXXX, _in EarthView::World::Graphic::CParticle* pParticle )
				{
					EarthView::World::Plugin::ParticleFX::CPointEmitter* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX;
					if (dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Plugin::ParticleFX::CPointEmitter::_initParticle(pParticle);
					else
						ptrNativeObject->_initParticle(pParticle);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter__initParticle_void_CParticle( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter__initParticle_void_CParticle_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter__initParticle_void_CParticle(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter__initParticle_void_CParticle_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CParticle* pParticle )
				{
					EarthView::World::Plugin::ParticleFX::CPointEmitter* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Plugin::ParticleFX::CPointEmitter::_initParticle(pParticle);
				}
				extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter__getEmissionCount_ev_uint16_Real(void *pObjectXXXX, _in Real timeElapsed )
				{
					EarthView::World::Plugin::ParticleFX::CPointEmitter* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX;
					if (dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*)ptrNativeObject) != NULL)
					{
						ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CPointEmitter::_getEmissionCount(timeElapsed);
						return objXXXX;
					}
					else
					{
						ev_uint16 objXXXX = ptrNativeObject->_getEmissionCount(timeElapsed);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter__getEmissionCount_ev_uint16_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter__getEmissionCount_ev_uint16_Real_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter__getEmissionCount_ev_uint16_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Plugin_ParticleFX_CPointEmitter__getEmissionCount_ev_uint16_Real_NoVirtual(void *pObjectXXXX, _in Real timeElapsed )
				{
					EarthView::World::Plugin::ParticleFX::CPointEmitter* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX;
					ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CPointEmitter::_getEmissionCount(timeElapsed);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getStringInterfacePtr_CParticleEmitterInternalStringInterface( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_getStringInterfacePtr_CParticleEmitterInternalStringInterface_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getStringInterfacePtr_CParticleEmitterInternalStringInterface(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionDirectionNoRandom_void_CVector3( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionDirectionNoRandom_void_CVector3_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionDirectionNoRandom_void_CVector3(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionDirection_void_CVector3( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionDirection_void_CVector3_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionDirection_void_CVector3(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionVelocity_void_CVector3( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionVelocity_void_CVector3_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionVelocity_void_CVector3(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionTTL_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionTTL_Real_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionTTL_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionColour_void_CColourValue( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionColour_void_CColourValue_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_genEmissionColour_void_CColourValue(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_genConstantEmissionCount_ev_uint16_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_genConstantEmissionCount_ev_uint16_Real_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_genConstantEmissionCount_ev_uint16_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setPosition_void_CVector3( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_setPosition_void_CVector3_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setPosition_void_CVector3(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getPosition_CVector3( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_getPosition_CVector3_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getPosition_CVector3(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setDirection_void_CVector3( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_setDirection_void_CVector3_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setDirection_void_CVector3(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getDirection_CVector3( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_getDirection_CVector3_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getDirection_CVector3(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setUp_void_CVector3( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_setUp_void_CVector3_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setUp_void_CVector3(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getUp_CVector3( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_getUp_CVector3_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getUp_CVector3(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setAngle_void_CRadian( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_setAngle_void_CRadian_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setAngle_void_CRadian(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getAngle_CRadian( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_getAngle_CRadian_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getAngle_CRadian(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setParticleVelocity_void_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_setParticleVelocity_void_Real_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setParticleVelocity_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setParticleVelocity_void_Real_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_setParticleVelocity_void_Real_Real_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setParticleVelocity_void_Real_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMinParticleVelocity_void_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_setMinParticleVelocity_void_Real_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMinParticleVelocity_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMaxParticleVelocity_void_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_setMaxParticleVelocity_void_Real_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMaxParticleVelocity_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getParticleVelocity_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_getParticleVelocity_Real_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getParticleVelocity_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMinParticleVelocity_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_getMinParticleVelocity_Real_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMinParticleVelocity_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMaxParticleVelocity_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_getMaxParticleVelocity_Real_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMaxParticleVelocity_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setEmissionRate_void_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_setEmissionRate_void_Real_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setEmissionRate_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getEmissionRate_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_getEmissionRate_Real_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getEmissionRate_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setTimeToLive_void_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_setTimeToLive_void_Real_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setTimeToLive_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setTimeToLive_void_Real_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_setTimeToLive_void_Real_Real_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setTimeToLive_void_Real_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMinTimeToLive_void_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_setMinTimeToLive_void_Real_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMinTimeToLive_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMaxTimeToLive_void_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_setMaxTimeToLive_void_Real_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMaxTimeToLive_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getTimeToLive_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_getTimeToLive_Real_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getTimeToLive_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMinTimeToLive_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_getMinTimeToLive_Real_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMinTimeToLive_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMaxTimeToLive_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_getMaxTimeToLive_Real_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMaxTimeToLive_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setColour_void_CColourValue( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_setColour_void_CColourValue_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setColour_void_CColourValue(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setColour_void_CColourValue_CColourValue( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_setColour_void_CColourValue_CColourValue_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setColour_void_CColourValue_CColourValue(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setColourRangeStart_void_CColourValue( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_setColourRangeStart_void_CColourValue_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setColourRangeStart_void_CColourValue(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setColourRangeEnd_void_CColourValue( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_setColourRangeEnd_void_CColourValue_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setColourRangeEnd_void_CColourValue(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getColour_CColourValue( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_getColour_CColourValue_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getColour_CColourValue(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getColourRangeStart_CColourValue( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_getColourRangeStart_CColourValue_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getColourRangeStart_CColourValue(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getColourRangeEnd_CColourValue( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_getColourRangeEnd_CColourValue_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getColourRangeEnd_CColourValue(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_setEnabled_void_ev_bool_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setEnabled_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_getEnabled_ev_bool_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getEnabled_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setStartTime_void_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_setStartTime_void_Real_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setStartTime_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getStartTime_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_getStartTime_Real_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getStartTime_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setDuration_void_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_setDuration_void_Real_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setDuration_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getDuration_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_getDuration_Real_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getDuration_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setDuration_void_Real_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_setDuration_void_Real_Real_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setDuration_void_Real_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMinDuration_void_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_setMinDuration_void_Real_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMinDuration_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMaxDuration_void_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_setMaxDuration_void_Real_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMaxDuration_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMinDuration_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_getMinDuration_Real_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMinDuration_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMaxDuration_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_getMaxDuration_Real_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMaxDuration_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setRepeatDelay_void_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_setRepeatDelay_void_Real_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setRepeatDelay_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getRepeatDelay_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_getRepeatDelay_Real_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getRepeatDelay_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setRepeatDelay_void_Real_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_setRepeatDelay_void_Real_Real_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setRepeatDelay_void_Real_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMinRepeatDelay_void_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_setMinRepeatDelay_void_Real_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMinRepeatDelay_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMaxRepeatDelay_void_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_setMaxRepeatDelay_void_Real_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setMaxRepeatDelay_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMinRepeatDelay_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_getMinRepeatDelay_Real_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMinRepeatDelay_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMaxRepeatDelay_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_getMaxRepeatDelay_Real_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_getMaxRepeatDelay_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setName_void_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_setName_void_EVString_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setEmittedEmitter_void_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_setEmittedEmitter_void_EVString_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setEmittedEmitter_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_isEmitted_ev_bool( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_isEmitted_ev_bool_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_isEmitted_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setEmitted_void_ev_bool( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CPointEmitter_setEmitted_void_ev_bool_Callback* pCallback )
				{
					CPointEmitterProxy* ptr = dynamic_cast<CPointEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CPointEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CPointEmitter_setEmitted_void_ev_bool(pCallback);
					}
				}
			}
		}
	}
}
