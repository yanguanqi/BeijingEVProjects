/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "plugin_particlefx/ringemitter.h"
namespace EarthView
{
	namespace World
	{
		namespace Plugin
		{
			namespace ParticleFX
			{
				typedef EarthView::World::Graphic::CParticleEmitter::CParticleEmitterInternalStringInterface*  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_getStringInterfacePtr_CParticleEmitterInternalStringInterface_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionDirectionNoRandom_void_CVector3_Callback)(_inout void* destVector);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionDirection_void_CVector3_Callback)(_inout void* destVector);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionVelocity_void_CVector3_Callback)(_inout void* destVector);
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionTTL_Real_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionColour_void_CColourValue_Callback)(_inout void* destColour);
				typedef ev_uint16  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_genConstantEmissionCount_ev_uint16_Real_Callback)(_in Real timeElapsed);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_setPosition_void_CVector3_Callback)(_in const void* pos);
				typedef const void*  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_getPosition_CVector3_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_setDirection_void_CVector3_Callback)(_in const void* direction);
				typedef const void*  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_getDirection_CVector3_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_setUp_void_CVector3_Callback)(_in const void* up);
				typedef const void*  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_getUp_CVector3_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_setAngle_void_CRadian_Callback)(_in const void* angle);
				typedef const void*  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_getAngle_CRadian_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_setParticleVelocity_void_Real_Callback)(_in Real speed);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_setParticleVelocity_void_Real_Real_Callback)(_in Real min, _in Real max);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_setMinParticleVelocity_void_Real_Callback)(_in Real min);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_setMaxParticleVelocity_void_Real_Callback)(_in Real max);
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_getParticleVelocity_Real_Callback)();
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_getMinParticleVelocity_Real_Callback)();
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_getMaxParticleVelocity_Real_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_setEmissionRate_void_Real_Callback)(_in Real particlesPerSecond);
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_getEmissionRate_Real_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_setTimeToLive_void_Real_Callback)(_in Real ttl);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_setTimeToLive_void_Real_Real_Callback)(_in Real minTtl, _in Real maxTtl);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_setMinTimeToLive_void_Real_Callback)(_in Real min);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_setMaxTimeToLive_void_Real_Callback)(_in Real max);
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_getTimeToLive_Real_Callback)();
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_getMinTimeToLive_Real_Callback)();
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_getMaxTimeToLive_Real_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_setColour_void_CColourValue_Callback)(_in const void* colour);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_setColour_void_CColourValue_CColourValue_Callback)(_in const void* colourStart, _in const void* colourEnd);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_setColourRangeStart_void_CColourValue_Callback)(_in const void* colour);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_setColourRangeEnd_void_CColourValue_Callback)(_in const void* colour);
				typedef const void*  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_getColour_CColourValue_Callback)();
				typedef const void*  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_getColourRangeStart_CColourValue_Callback)();
				typedef const void*  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_getColourRangeEnd_CColourValue_Callback)();
				typedef ev_uint16  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter__getEmissionCount_ev_uint16_Real_Callback)(_in Real timeElapsed);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter__initParticle_void_CParticle_Callback)(_in EarthView::World::Graphic::CParticle* pParticle);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_setEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
				typedef ev_bool  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_getEnabled_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_setStartTime_void_Real_Callback)(_in Real startTime);
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_getStartTime_Real_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_setDuration_void_Real_Callback)(_in Real duration);
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_getDuration_Real_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_setDuration_void_Real_Real_Callback)(_in Real min, _in Real max);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_setMinDuration_void_Real_Callback)(_in Real min);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_setMaxDuration_void_Real_Callback)(_in Real max);
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_getMinDuration_Real_Callback)();
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_getMaxDuration_Real_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_setRepeatDelay_void_Real_Callback)(_in Real duration);
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_getRepeatDelay_Real_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_setRepeatDelay_void_Real_Real_Callback)(_in Real min, _in Real max);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_setMinRepeatDelay_void_Real_Callback)(_in Real min);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_setMaxRepeatDelay_void_Real_Callback)(_in Real max);
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_getMinRepeatDelay_Real_Callback)();
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_getMaxRepeatDelay_Real_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_setName_void_EVString_Callback)(_in char*& newName);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_setEmittedEmitter_void_EVString_Callback)(_in char*& emittedEmitter);
				typedef ev_bool  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_isEmitted_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_setEmitted_void_ev_bool_Callback)(_in ev_bool emitted);
				class CRingEmitterProxy : public EarthView::World::Plugin::ParticleFX::CRingEmitter
				{
				private:
					EarthView_World_Plugin_ParticleFX_CRingEmitter_getStringInterfacePtr_CParticleEmitterInternalStringInterface_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getStringInterfacePtr_CParticleEmitterInternalStringInterface_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionDirectionNoRandom_void_CVector3_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionDirectionNoRandom_void_CVector3_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionDirection_void_CVector3_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionDirection_void_CVector3_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionVelocity_void_CVector3_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionVelocity_void_CVector3_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionTTL_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionTTL_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionColour_void_CColourValue_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionColour_void_CColourValue_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_genConstantEmissionCount_ev_uint16_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_genConstantEmissionCount_ev_uint16_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_setPosition_void_CVector3_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setPosition_void_CVector3_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_getPosition_CVector3_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getPosition_CVector3_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_setDirection_void_CVector3_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setDirection_void_CVector3_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_getDirection_CVector3_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getDirection_CVector3_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_setUp_void_CVector3_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setUp_void_CVector3_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_getUp_CVector3_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getUp_CVector3_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_setAngle_void_CRadian_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setAngle_void_CRadian_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_getAngle_CRadian_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getAngle_CRadian_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_setParticleVelocity_void_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setParticleVelocity_void_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_setParticleVelocity_void_Real_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setParticleVelocity_void_Real_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_setMinParticleVelocity_void_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMinParticleVelocity_void_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_setMaxParticleVelocity_void_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMaxParticleVelocity_void_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_getParticleVelocity_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getParticleVelocity_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_getMinParticleVelocity_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMinParticleVelocity_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_getMaxParticleVelocity_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMaxParticleVelocity_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_setEmissionRate_void_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setEmissionRate_void_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_getEmissionRate_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getEmissionRate_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_setTimeToLive_void_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setTimeToLive_void_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_setTimeToLive_void_Real_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setTimeToLive_void_Real_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_setMinTimeToLive_void_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMinTimeToLive_void_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_setMaxTimeToLive_void_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMaxTimeToLive_void_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_getTimeToLive_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getTimeToLive_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_getMinTimeToLive_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMinTimeToLive_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_getMaxTimeToLive_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMaxTimeToLive_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_setColour_void_CColourValue_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setColour_void_CColourValue_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_setColour_void_CColourValue_CColourValue_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setColour_void_CColourValue_CColourValue_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_setColourRangeStart_void_CColourValue_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setColourRangeStart_void_CColourValue_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_setColourRangeEnd_void_CColourValue_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setColourRangeEnd_void_CColourValue_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_getColour_CColourValue_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getColour_CColourValue_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_getColourRangeStart_CColourValue_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getColourRangeStart_CColourValue_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_getColourRangeEnd_CColourValue_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getColourRangeEnd_CColourValue_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter__getEmissionCount_ev_uint16_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter__getEmissionCount_ev_uint16_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter__initParticle_void_CParticle_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter__initParticle_void_CParticle_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_setEnabled_void_ev_bool_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setEnabled_void_ev_bool_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_getEnabled_ev_bool_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getEnabled_ev_bool_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_setStartTime_void_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setStartTime_void_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_getStartTime_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getStartTime_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_setDuration_void_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setDuration_void_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_getDuration_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getDuration_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_setDuration_void_Real_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setDuration_void_Real_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_setMinDuration_void_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMinDuration_void_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_setMaxDuration_void_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMaxDuration_void_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_getMinDuration_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMinDuration_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_getMaxDuration_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMaxDuration_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_setRepeatDelay_void_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setRepeatDelay_void_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_getRepeatDelay_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getRepeatDelay_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_setRepeatDelay_void_Real_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setRepeatDelay_void_Real_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_setMinRepeatDelay_void_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMinRepeatDelay_void_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_setMaxRepeatDelay_void_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMaxRepeatDelay_void_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_getMinRepeatDelay_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMinRepeatDelay_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_getMaxRepeatDelay_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMaxRepeatDelay_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_setName_void_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setName_void_EVString_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_setEmittedEmitter_void_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setEmittedEmitter_void_EVString_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_isEmitted_ev_bool_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_isEmitted_ev_bool_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_setEmitted_void_ev_bool_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setEmitted_void_ev_bool_Callback;
				public:
					CRingEmitterProxy(EarthView::World::Core::CNameValuePairList *pList) : CRingEmitter(pList)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getStringInterfacePtr_CParticleEmitterInternalStringInterface_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionDirectionNoRandom_void_CVector3_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionDirection_void_CVector3_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionVelocity_void_CVector3_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionTTL_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionColour_void_CColourValue_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_genConstantEmissionCount_ev_uint16_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setPosition_void_CVector3_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getPosition_CVector3_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setDirection_void_CVector3_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getDirection_CVector3_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setUp_void_CVector3_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getUp_CVector3_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setAngle_void_CRadian_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getAngle_CRadian_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setParticleVelocity_void_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setParticleVelocity_void_Real_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMinParticleVelocity_void_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMaxParticleVelocity_void_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getParticleVelocity_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMinParticleVelocity_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMaxParticleVelocity_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setEmissionRate_void_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getEmissionRate_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setTimeToLive_void_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setTimeToLive_void_Real_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMinTimeToLive_void_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMaxTimeToLive_void_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getTimeToLive_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMinTimeToLive_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMaxTimeToLive_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setColour_void_CColourValue_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setColour_void_CColourValue_CColourValue_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setColourRangeStart_void_CColourValue_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setColourRangeEnd_void_CColourValue_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getColour_CColourValue_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getColourRangeStart_CColourValue_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getColourRangeEnd_CColourValue_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter__getEmissionCount_ev_uint16_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter__initParticle_void_CParticle_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setEnabled_void_ev_bool_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getEnabled_ev_bool_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setStartTime_void_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getStartTime_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setDuration_void_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getDuration_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setDuration_void_Real_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMinDuration_void_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMaxDuration_void_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMinDuration_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMaxDuration_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setRepeatDelay_void_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getRepeatDelay_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setRepeatDelay_void_Real_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMinRepeatDelay_void_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMaxRepeatDelay_void_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMinRepeatDelay_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMaxRepeatDelay_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setEmittedEmitter_void_EVString_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_isEmitted_ev_bool_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setEmitted_void_ev_bool_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getStringInterfacePtr_CParticleEmitterInternalStringInterface(EarthView_World_Plugin_ParticleFX_CRingEmitter_getStringInterfacePtr_CParticleEmitterInternalStringInterface_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getStringInterfacePtr_CParticleEmitterInternalStringInterface_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionDirectionNoRandom_void_CVector3(EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionDirectionNoRandom_void_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionDirectionNoRandom_void_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionDirection_void_CVector3(EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionDirection_void_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionDirection_void_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionVelocity_void_CVector3(EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionVelocity_void_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionVelocity_void_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionTTL_Real(EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionTTL_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionTTL_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionColour_void_CColourValue(EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionColour_void_CColourValue_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionColour_void_CColourValue_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_genConstantEmissionCount_ev_uint16_Real(EarthView_World_Plugin_ParticleFX_CRingEmitter_genConstantEmissionCount_ev_uint16_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_genConstantEmissionCount_ev_uint16_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setPosition_void_CVector3(EarthView_World_Plugin_ParticleFX_CRingEmitter_setPosition_void_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setPosition_void_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getPosition_CVector3(EarthView_World_Plugin_ParticleFX_CRingEmitter_getPosition_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getPosition_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setDirection_void_CVector3(EarthView_World_Plugin_ParticleFX_CRingEmitter_setDirection_void_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setDirection_void_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getDirection_CVector3(EarthView_World_Plugin_ParticleFX_CRingEmitter_getDirection_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getDirection_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setUp_void_CVector3(EarthView_World_Plugin_ParticleFX_CRingEmitter_setUp_void_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setUp_void_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getUp_CVector3(EarthView_World_Plugin_ParticleFX_CRingEmitter_getUp_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getUp_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setAngle_void_CRadian(EarthView_World_Plugin_ParticleFX_CRingEmitter_setAngle_void_CRadian_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setAngle_void_CRadian_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getAngle_CRadian(EarthView_World_Plugin_ParticleFX_CRingEmitter_getAngle_CRadian_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getAngle_CRadian_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setParticleVelocity_void_Real(EarthView_World_Plugin_ParticleFX_CRingEmitter_setParticleVelocity_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setParticleVelocity_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setParticleVelocity_void_Real_Real(EarthView_World_Plugin_ParticleFX_CRingEmitter_setParticleVelocity_void_Real_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setParticleVelocity_void_Real_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMinParticleVelocity_void_Real(EarthView_World_Plugin_ParticleFX_CRingEmitter_setMinParticleVelocity_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMinParticleVelocity_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMaxParticleVelocity_void_Real(EarthView_World_Plugin_ParticleFX_CRingEmitter_setMaxParticleVelocity_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMaxParticleVelocity_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getParticleVelocity_Real(EarthView_World_Plugin_ParticleFX_CRingEmitter_getParticleVelocity_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getParticleVelocity_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMinParticleVelocity_Real(EarthView_World_Plugin_ParticleFX_CRingEmitter_getMinParticleVelocity_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMinParticleVelocity_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMaxParticleVelocity_Real(EarthView_World_Plugin_ParticleFX_CRingEmitter_getMaxParticleVelocity_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMaxParticleVelocity_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setEmissionRate_void_Real(EarthView_World_Plugin_ParticleFX_CRingEmitter_setEmissionRate_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setEmissionRate_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getEmissionRate_Real(EarthView_World_Plugin_ParticleFX_CRingEmitter_getEmissionRate_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getEmissionRate_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setTimeToLive_void_Real(EarthView_World_Plugin_ParticleFX_CRingEmitter_setTimeToLive_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setTimeToLive_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setTimeToLive_void_Real_Real(EarthView_World_Plugin_ParticleFX_CRingEmitter_setTimeToLive_void_Real_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setTimeToLive_void_Real_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMinTimeToLive_void_Real(EarthView_World_Plugin_ParticleFX_CRingEmitter_setMinTimeToLive_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMinTimeToLive_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMaxTimeToLive_void_Real(EarthView_World_Plugin_ParticleFX_CRingEmitter_setMaxTimeToLive_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMaxTimeToLive_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getTimeToLive_Real(EarthView_World_Plugin_ParticleFX_CRingEmitter_getTimeToLive_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getTimeToLive_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMinTimeToLive_Real(EarthView_World_Plugin_ParticleFX_CRingEmitter_getMinTimeToLive_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMinTimeToLive_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMaxTimeToLive_Real(EarthView_World_Plugin_ParticleFX_CRingEmitter_getMaxTimeToLive_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMaxTimeToLive_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setColour_void_CColourValue(EarthView_World_Plugin_ParticleFX_CRingEmitter_setColour_void_CColourValue_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setColour_void_CColourValue_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setColour_void_CColourValue_CColourValue(EarthView_World_Plugin_ParticleFX_CRingEmitter_setColour_void_CColourValue_CColourValue_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setColour_void_CColourValue_CColourValue_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setColourRangeStart_void_CColourValue(EarthView_World_Plugin_ParticleFX_CRingEmitter_setColourRangeStart_void_CColourValue_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setColourRangeStart_void_CColourValue_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setColourRangeEnd_void_CColourValue(EarthView_World_Plugin_ParticleFX_CRingEmitter_setColourRangeEnd_void_CColourValue_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setColourRangeEnd_void_CColourValue_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getColour_CColourValue(EarthView_World_Plugin_ParticleFX_CRingEmitter_getColour_CColourValue_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getColour_CColourValue_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getColourRangeStart_CColourValue(EarthView_World_Plugin_ParticleFX_CRingEmitter_getColourRangeStart_CColourValue_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getColourRangeStart_CColourValue_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getColourRangeEnd_CColourValue(EarthView_World_Plugin_ParticleFX_CRingEmitter_getColourRangeEnd_CColourValue_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getColourRangeEnd_CColourValue_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter__getEmissionCount_ev_uint16_Real(EarthView_World_Plugin_ParticleFX_CRingEmitter__getEmissionCount_ev_uint16_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter__getEmissionCount_ev_uint16_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter__initParticle_void_CParticle(EarthView_World_Plugin_ParticleFX_CRingEmitter__initParticle_void_CParticle_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter__initParticle_void_CParticle_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setEnabled_void_ev_bool(EarthView_World_Plugin_ParticleFX_CRingEmitter_setEnabled_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setEnabled_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getEnabled_ev_bool(EarthView_World_Plugin_ParticleFX_CRingEmitter_getEnabled_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getEnabled_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setStartTime_void_Real(EarthView_World_Plugin_ParticleFX_CRingEmitter_setStartTime_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setStartTime_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getStartTime_Real(EarthView_World_Plugin_ParticleFX_CRingEmitter_getStartTime_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getStartTime_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setDuration_void_Real(EarthView_World_Plugin_ParticleFX_CRingEmitter_setDuration_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setDuration_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getDuration_Real(EarthView_World_Plugin_ParticleFX_CRingEmitter_getDuration_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getDuration_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setDuration_void_Real_Real(EarthView_World_Plugin_ParticleFX_CRingEmitter_setDuration_void_Real_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setDuration_void_Real_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMinDuration_void_Real(EarthView_World_Plugin_ParticleFX_CRingEmitter_setMinDuration_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMinDuration_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMaxDuration_void_Real(EarthView_World_Plugin_ParticleFX_CRingEmitter_setMaxDuration_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMaxDuration_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMinDuration_Real(EarthView_World_Plugin_ParticleFX_CRingEmitter_getMinDuration_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMinDuration_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMaxDuration_Real(EarthView_World_Plugin_ParticleFX_CRingEmitter_getMaxDuration_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMaxDuration_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setRepeatDelay_void_Real(EarthView_World_Plugin_ParticleFX_CRingEmitter_setRepeatDelay_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setRepeatDelay_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getRepeatDelay_Real(EarthView_World_Plugin_ParticleFX_CRingEmitter_getRepeatDelay_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getRepeatDelay_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setRepeatDelay_void_Real_Real(EarthView_World_Plugin_ParticleFX_CRingEmitter_setRepeatDelay_void_Real_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setRepeatDelay_void_Real_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMinRepeatDelay_void_Real(EarthView_World_Plugin_ParticleFX_CRingEmitter_setMinRepeatDelay_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMinRepeatDelay_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMaxRepeatDelay_void_Real(EarthView_World_Plugin_ParticleFX_CRingEmitter_setMaxRepeatDelay_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMaxRepeatDelay_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMinRepeatDelay_Real(EarthView_World_Plugin_ParticleFX_CRingEmitter_getMinRepeatDelay_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMinRepeatDelay_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMaxRepeatDelay_Real(EarthView_World_Plugin_ParticleFX_CRingEmitter_getMaxRepeatDelay_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMaxRepeatDelay_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setName_void_EVString(EarthView_World_Plugin_ParticleFX_CRingEmitter_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setEmittedEmitter_void_EVString(EarthView_World_Plugin_ParticleFX_CRingEmitter_setEmittedEmitter_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setEmittedEmitter_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_isEmitted_ev_bool(EarthView_World_Plugin_ParticleFX_CRingEmitter_isEmitted_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_isEmitted_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setEmitted_void_ev_bool(EarthView_World_Plugin_ParticleFX_CRingEmitter_setEmitted_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setEmitted_void_ev_bool_Callback = pCallback;
					}
					virtual void _initParticle(_in EarthView::World::Graphic::CParticle* pParticle)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter__initParticle_void_CParticle_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CRingEmitter__initParticle_void_CParticle_Callback(pParticle);
						}
						else
							return this->CRingEmitter::_initParticle(pParticle);
					}
					virtual ev_uint16 _getEmissionCount(_in Real timeElapsed)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter__getEmissionCount_ev_uint16_Real_Callback != NULL && this->isCustomExtend())
						{
							ev_uint16 returnValue = m_EarthView_World_Plugin_ParticleFX_CRingEmitter__getEmissionCount_ev_uint16_Real_Callback(timeElapsed);
							return returnValue;
						}
						else
							return this->CRingEmitter::_getEmissionCount(timeElapsed);
					}
					virtual void setDirection(_in const EarthView::World::Spatial::Math::CVector3& direction)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setDirection_void_CVector3_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setDirection_void_CVector3_Callback(&direction);
						}
						else
							return this->CRingEmitter::setDirection(direction);
					}
					virtual EarthView::World::Graphic::CParticleEmitter::CParticleEmitterInternalStringInterface* getStringInterfacePtr()
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getStringInterfacePtr_CParticleEmitterInternalStringInterface_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CParticleEmitter::CParticleEmitterInternalStringInterface* returnValue = m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getStringInterfacePtr_CParticleEmitterInternalStringInterface_Callback();
							return returnValue;
						}
						else
							return this->CRingEmitter::getStringInterfacePtr();
					}
					virtual void genEmissionDirectionNoRandom(_inout EarthView::World::Spatial::Math::CVector3& destVector)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionDirectionNoRandom_void_CVector3_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionDirectionNoRandom_void_CVector3_Callback(&destVector);
						}
						else
							return this->CRingEmitter::genEmissionDirectionNoRandom(destVector);
					}
					virtual void genEmissionDirection(_inout EarthView::World::Spatial::Math::CVector3& destVector)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionDirection_void_CVector3_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionDirection_void_CVector3_Callback(&destVector);
						}
						else
							return this->CRingEmitter::genEmissionDirection(destVector);
					}
					virtual void genEmissionVelocity(_inout EarthView::World::Spatial::Math::CVector3& destVector)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionVelocity_void_CVector3_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionVelocity_void_CVector3_Callback(&destVector);
						}
						else
							return this->CRingEmitter::genEmissionVelocity(destVector);
					}
					virtual Real genEmissionTTL()
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionTTL_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionTTL_Real_Callback();
							return returnValue;
						}
						else
							return this->CRingEmitter::genEmissionTTL();
					}
					virtual void genEmissionColour(_inout EarthView::World::Graphic::CColourValue& destColour)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionColour_void_CColourValue_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionColour_void_CColourValue_Callback(&destColour);
						}
						else
							return this->CRingEmitter::genEmissionColour(destColour);
					}
					virtual ev_uint16 genConstantEmissionCount(_in Real timeElapsed)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_genConstantEmissionCount_ev_uint16_Real_Callback != NULL && this->isCustomExtend())
						{
							ev_uint16 returnValue = m_EarthView_World_Plugin_ParticleFX_CRingEmitter_genConstantEmissionCount_ev_uint16_Real_Callback(timeElapsed);
							return returnValue;
						}
						else
							return this->CRingEmitter::genConstantEmissionCount(timeElapsed);
					}
					virtual void setPosition(_in const EarthView::World::Spatial::Math::CVector3& pos)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setPosition_void_CVector3_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setPosition_void_CVector3_Callback(&pos);
						}
						else
							return this->CRingEmitter::setPosition(pos);
					}
					virtual const EarthView::World::Spatial::Math::CVector3& getPosition() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getPosition_CVector3_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Math::CVector3& returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getPosition_CVector3_Callback();
							return returnValue;
						}
						else
							return this->CRingEmitter::getPosition();
					}
					virtual const EarthView::World::Spatial::Math::CVector3& getDirection() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getDirection_CVector3_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Math::CVector3& returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getDirection_CVector3_Callback();
							return returnValue;
						}
						else
							return this->CRingEmitter::getDirection();
					}
					virtual void setUp(_in const EarthView::World::Spatial::Math::CVector3& up)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setUp_void_CVector3_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setUp_void_CVector3_Callback(&up);
						}
						else
							return this->CRingEmitter::setUp(up);
					}
					virtual const EarthView::World::Spatial::Math::CVector3& getUp() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getUp_CVector3_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Math::CVector3& returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getUp_CVector3_Callback();
							return returnValue;
						}
						else
							return this->CRingEmitter::getUp();
					}
					virtual void setAngle(_in const EarthView::World::Spatial::Math::CRadian& angle)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setAngle_void_CRadian_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setAngle_void_CRadian_Callback(&angle);
						}
						else
							return this->CRingEmitter::setAngle(angle);
					}
					virtual const EarthView::World::Spatial::Math::CRadian& getAngle() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getAngle_CRadian_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Math::CRadian& returnValue = *(EarthView::World::Spatial::Math::CRadian*)m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getAngle_CRadian_Callback();
							return returnValue;
						}
						else
							return this->CRingEmitter::getAngle();
					}
					virtual void setParticleVelocity(_in Real speed)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setParticleVelocity_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setParticleVelocity_void_Real_Callback(speed);
						}
						else
							return this->CRingEmitter::setParticleVelocity(speed);
					}
					virtual void setParticleVelocity(_in Real min, _in Real max)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setParticleVelocity_void_Real_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setParticleVelocity_void_Real_Real_Callback(min, max);
						}
						else
							return this->CRingEmitter::setParticleVelocity(min, max);
					}
					virtual void setMinParticleVelocity(_in Real min)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMinParticleVelocity_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMinParticleVelocity_void_Real_Callback(min);
						}
						else
							return this->CRingEmitter::setMinParticleVelocity(min);
					}
					virtual void setMaxParticleVelocity(_in Real max)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMaxParticleVelocity_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMaxParticleVelocity_void_Real_Callback(max);
						}
						else
							return this->CRingEmitter::setMaxParticleVelocity(max);
					}
					virtual Real getParticleVelocity() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getParticleVelocity_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getParticleVelocity_Real_Callback();
							return returnValue;
						}
						else
							return this->CRingEmitter::getParticleVelocity();
					}
					virtual Real getMinParticleVelocity() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMinParticleVelocity_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMinParticleVelocity_Real_Callback();
							return returnValue;
						}
						else
							return this->CRingEmitter::getMinParticleVelocity();
					}
					virtual Real getMaxParticleVelocity() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMaxParticleVelocity_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMaxParticleVelocity_Real_Callback();
							return returnValue;
						}
						else
							return this->CRingEmitter::getMaxParticleVelocity();
					}
					virtual void setEmissionRate(_in Real particlesPerSecond)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setEmissionRate_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setEmissionRate_void_Real_Callback(particlesPerSecond);
						}
						else
							return this->CRingEmitter::setEmissionRate(particlesPerSecond);
					}
					virtual Real getEmissionRate() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getEmissionRate_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getEmissionRate_Real_Callback();
							return returnValue;
						}
						else
							return this->CRingEmitter::getEmissionRate();
					}
					virtual void setTimeToLive(_in Real ttl)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setTimeToLive_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setTimeToLive_void_Real_Callback(ttl);
						}
						else
							return this->CRingEmitter::setTimeToLive(ttl);
					}
					virtual void setTimeToLive(_in Real minTtl, _in Real maxTtl)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setTimeToLive_void_Real_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setTimeToLive_void_Real_Real_Callback(minTtl, maxTtl);
						}
						else
							return this->CRingEmitter::setTimeToLive(minTtl, maxTtl);
					}
					virtual void setMinTimeToLive(_in Real min)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMinTimeToLive_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMinTimeToLive_void_Real_Callback(min);
						}
						else
							return this->CRingEmitter::setMinTimeToLive(min);
					}
					virtual void setMaxTimeToLive(_in Real max)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMaxTimeToLive_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMaxTimeToLive_void_Real_Callback(max);
						}
						else
							return this->CRingEmitter::setMaxTimeToLive(max);
					}
					virtual Real getTimeToLive() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getTimeToLive_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getTimeToLive_Real_Callback();
							return returnValue;
						}
						else
							return this->CRingEmitter::getTimeToLive();
					}
					virtual Real getMinTimeToLive() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMinTimeToLive_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMinTimeToLive_Real_Callback();
							return returnValue;
						}
						else
							return this->CRingEmitter::getMinTimeToLive();
					}
					virtual Real getMaxTimeToLive() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMaxTimeToLive_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMaxTimeToLive_Real_Callback();
							return returnValue;
						}
						else
							return this->CRingEmitter::getMaxTimeToLive();
					}
					virtual void setColour(_in const EarthView::World::Graphic::CColourValue& colour)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setColour_void_CColourValue_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setColour_void_CColourValue_Callback(&colour);
						}
						else
							return this->CRingEmitter::setColour(colour);
					}
					virtual void setColour(_in const EarthView::World::Graphic::CColourValue& colourStart, _in const EarthView::World::Graphic::CColourValue& colourEnd)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setColour_void_CColourValue_CColourValue_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setColour_void_CColourValue_CColourValue_Callback(&colourStart, &colourEnd);
						}
						else
							return this->CRingEmitter::setColour(colourStart, colourEnd);
					}
					virtual void setColourRangeStart(_in const EarthView::World::Graphic::CColourValue& colour)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setColourRangeStart_void_CColourValue_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setColourRangeStart_void_CColourValue_Callback(&colour);
						}
						else
							return this->CRingEmitter::setColourRangeStart(colour);
					}
					virtual void setColourRangeEnd(_in const EarthView::World::Graphic::CColourValue& colour)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setColourRangeEnd_void_CColourValue_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setColourRangeEnd_void_CColourValue_Callback(&colour);
						}
						else
							return this->CRingEmitter::setColourRangeEnd(colour);
					}
					virtual const EarthView::World::Graphic::CColourValue& getColour() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getColour_CColourValue_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Graphic::CColourValue& returnValue = *(EarthView::World::Graphic::CColourValue*)m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getColour_CColourValue_Callback();
							return returnValue;
						}
						else
							return this->CRingEmitter::getColour();
					}
					virtual const EarthView::World::Graphic::CColourValue& getColourRangeStart() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getColourRangeStart_CColourValue_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Graphic::CColourValue& returnValue = *(EarthView::World::Graphic::CColourValue*)m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getColourRangeStart_CColourValue_Callback();
							return returnValue;
						}
						else
							return this->CRingEmitter::getColourRangeStart();
					}
					virtual const EarthView::World::Graphic::CColourValue& getColourRangeEnd() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getColourRangeEnd_CColourValue_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Graphic::CColourValue& returnValue = *(EarthView::World::Graphic::CColourValue*)m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getColourRangeEnd_CColourValue_Callback();
							return returnValue;
						}
						else
							return this->CRingEmitter::getColourRangeEnd();
					}
					virtual void setEnabled(_in ev_bool enabled)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setEnabled_void_ev_bool_Callback(enabled);
						}
						else
							return this->CRingEmitter::setEnabled(enabled);
					}
					virtual ev_bool getEnabled() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getEnabled_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CRingEmitter::getEnabled();
					}
					virtual void setStartTime(_in Real startTime)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setStartTime_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setStartTime_void_Real_Callback(startTime);
						}
						else
							return this->CRingEmitter::setStartTime(startTime);
					}
					virtual Real getStartTime() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getStartTime_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getStartTime_Real_Callback();
							return returnValue;
						}
						else
							return this->CRingEmitter::getStartTime();
					}
					virtual void setDuration(_in Real duration)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setDuration_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setDuration_void_Real_Callback(duration);
						}
						else
							return this->CRingEmitter::setDuration(duration);
					}
					virtual Real getDuration() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getDuration_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getDuration_Real_Callback();
							return returnValue;
						}
						else
							return this->CRingEmitter::getDuration();
					}
					virtual void setDuration(_in Real min, _in Real max)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setDuration_void_Real_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setDuration_void_Real_Real_Callback(min, max);
						}
						else
							return this->CRingEmitter::setDuration(min, max);
					}
					virtual void setMinDuration(_in Real min)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMinDuration_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMinDuration_void_Real_Callback(min);
						}
						else
							return this->CRingEmitter::setMinDuration(min);
					}
					virtual void setMaxDuration(_in Real max)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMaxDuration_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMaxDuration_void_Real_Callback(max);
						}
						else
							return this->CRingEmitter::setMaxDuration(max);
					}
					virtual Real getMinDuration() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMinDuration_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMinDuration_Real_Callback();
							return returnValue;
						}
						else
							return this->CRingEmitter::getMinDuration();
					}
					virtual Real getMaxDuration() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMaxDuration_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMaxDuration_Real_Callback();
							return returnValue;
						}
						else
							return this->CRingEmitter::getMaxDuration();
					}
					virtual void setRepeatDelay(_in Real duration)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setRepeatDelay_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setRepeatDelay_void_Real_Callback(duration);
						}
						else
							return this->CRingEmitter::setRepeatDelay(duration);
					}
					virtual Real getRepeatDelay() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getRepeatDelay_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getRepeatDelay_Real_Callback();
							return returnValue;
						}
						else
							return this->CRingEmitter::getRepeatDelay();
					}
					virtual void setRepeatDelay(_in Real min, _in Real max)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setRepeatDelay_void_Real_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setRepeatDelay_void_Real_Real_Callback(min, max);
						}
						else
							return this->CRingEmitter::setRepeatDelay(min, max);
					}
					virtual void setMinRepeatDelay(_in Real min)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMinRepeatDelay_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMinRepeatDelay_void_Real_Callback(min);
						}
						else
							return this->CRingEmitter::setMinRepeatDelay(min);
					}
					virtual void setMaxRepeatDelay(_in Real max)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMaxRepeatDelay_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMaxRepeatDelay_void_Real_Callback(max);
						}
						else
							return this->CRingEmitter::setMaxRepeatDelay(max);
					}
					virtual Real getMinRepeatDelay() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMinRepeatDelay_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMinRepeatDelay_Real_Callback();
							return returnValue;
						}
						else
							return this->CRingEmitter::getMinRepeatDelay();
					}
					virtual Real getMaxRepeatDelay() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMaxRepeatDelay_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMaxRepeatDelay_Real_Callback();
							return returnValue;
						}
						else
							return this->CRingEmitter::getMaxRepeatDelay();
					}
					virtual void setName(_in const EVString& newName)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* newName_Char = newName.makeBuffer();
							m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setName_void_EVString_Callback(newName_Char);
						}
						else
							return this->CRingEmitter::setName(newName);
					}
					virtual void setEmittedEmitter(_in const EVString& emittedEmitter)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setEmittedEmitter_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* emittedEmitter_Char = emittedEmitter.makeBuffer();
							m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setEmittedEmitter_void_EVString_Callback(emittedEmitter_Char);
						}
						else
							return this->CRingEmitter::setEmittedEmitter(emittedEmitter);
					}
					virtual ev_bool isEmitted() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_isEmitted_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Plugin_ParticleFX_CRingEmitter_isEmitted_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CRingEmitter::isEmitted();
					}
					virtual void setEmitted(_in ev_bool emitted)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setEmitted_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CRingEmitter_setEmitted_void_ev_bool_Callback(emitted);
						}
						else
							return this->CRingEmitter::setEmitted(emitted);
					}
				};
				REGISTER_FACTORY_CLASS(CRingEmitterProxy);
				typedef char*  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerX_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerX_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerX_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CRingEmitterCmdInnerXProxy : public EarthView::World::Plugin::ParticleFX::CRingEmitter::CRingEmitterCmdInnerX
				{
				private:
					EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerX_doGet_EVString_void_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerX_doGet_EVString_void_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerX_doSet_void_void_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerX_doSet_void_void_EVString_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerX_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerX_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CRingEmitterCmdInnerXProxy(EarthView::World::Core::CNameValuePairList *pList) : CRingEmitterCmdInnerX(pList)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerX_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerX_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerX_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerX_doGet_EVString_void(EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerX_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerX_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerX_doSet_void_void_EVString(EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerX_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerX_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerX_trySet_ev_bool_void_EVString_EVString(EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerX_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerX_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerX_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerX_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CRingEmitterCmdInnerX::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerX_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerX_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CRingEmitterCmdInnerX::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerX_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerX_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CRingEmitterCmdInnerX::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CRingEmitterCmdInnerXProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerX_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CRingEmitter::CRingEmitterCmdInnerX* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CRingEmitter::CRingEmitterCmdInnerX*) pObjectXXXX;
					if (dynamic_cast<CRingEmitterCmdInnerXProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter::CRingEmitterCmdInnerX*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CRingEmitter::CRingEmitterCmdInnerX::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerX_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerX_doGet_EVString_void_Callback* pCallback )
				{
					CRingEmitterCmdInnerXProxy* ptr = dynamic_cast<CRingEmitterCmdInnerXProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter::CRingEmitterCmdInnerX*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerX_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerX_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CRingEmitter::CRingEmitterCmdInnerX* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CRingEmitter::CRingEmitterCmdInnerX*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CRingEmitter::CRingEmitterCmdInnerX::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerX_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CRingEmitter::CRingEmitterCmdInnerX* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CRingEmitter::CRingEmitterCmdInnerX*) pObjectXXXX;
					if (dynamic_cast<CRingEmitterCmdInnerXProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter::CRingEmitterCmdInnerX*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Plugin::ParticleFX::CRingEmitter::CRingEmitterCmdInnerX::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerX_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerX_doSet_void_void_EVString_Callback* pCallback )
				{
					CRingEmitterCmdInnerXProxy* ptr = dynamic_cast<CRingEmitterCmdInnerXProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter::CRingEmitterCmdInnerX*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerX_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerX_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CRingEmitter::CRingEmitterCmdInnerX* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CRingEmitter::CRingEmitterCmdInnerX*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Plugin::ParticleFX::CRingEmitter::CRingEmitterCmdInnerX::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerX_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerX_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CRingEmitterCmdInnerXProxy* ptr = dynamic_cast<CRingEmitterCmdInnerXProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter::CRingEmitterCmdInnerX*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerX_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				typedef char*  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerY_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerY_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerY_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CRingEmitterCmdInnerYProxy : public EarthView::World::Plugin::ParticleFX::CRingEmitter::CRingEmitterCmdInnerY
				{
				private:
					EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerY_doGet_EVString_void_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerY_doGet_EVString_void_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerY_doSet_void_void_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerY_doSet_void_void_EVString_Callback;
					EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerY_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerY_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CRingEmitterCmdInnerYProxy(EarthView::World::Core::CNameValuePairList *pList) : CRingEmitterCmdInnerY(pList)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerY_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerY_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerY_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerY_doGet_EVString_void(EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerY_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerY_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerY_doSet_void_void_EVString(EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerY_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerY_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerY_trySet_ev_bool_void_EVString_EVString(EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerY_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerY_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerY_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerY_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CRingEmitterCmdInnerY::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerY_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerY_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CRingEmitterCmdInnerY::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerY_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerY_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CRingEmitterCmdInnerY::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CRingEmitterCmdInnerYProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerY_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CRingEmitter::CRingEmitterCmdInnerY* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CRingEmitter::CRingEmitterCmdInnerY*) pObjectXXXX;
					if (dynamic_cast<CRingEmitterCmdInnerYProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter::CRingEmitterCmdInnerY*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CRingEmitter::CRingEmitterCmdInnerY::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerY_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerY_doGet_EVString_void_Callback* pCallback )
				{
					CRingEmitterCmdInnerYProxy* ptr = dynamic_cast<CRingEmitterCmdInnerYProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter::CRingEmitterCmdInnerY*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerY_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerY_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CRingEmitter::CRingEmitterCmdInnerY* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CRingEmitter::CRingEmitterCmdInnerY*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CRingEmitter::CRingEmitterCmdInnerY::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerY_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CRingEmitter::CRingEmitterCmdInnerY* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CRingEmitter::CRingEmitterCmdInnerY*) pObjectXXXX;
					if (dynamic_cast<CRingEmitterCmdInnerYProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter::CRingEmitterCmdInnerY*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Plugin::ParticleFX::CRingEmitter::CRingEmitterCmdInnerY::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerY_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerY_doSet_void_void_EVString_Callback* pCallback )
				{
					CRingEmitterCmdInnerYProxy* ptr = dynamic_cast<CRingEmitterCmdInnerYProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter::CRingEmitterCmdInnerY*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerY_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerY_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CRingEmitter::CRingEmitterCmdInnerY* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CRingEmitter::CRingEmitterCmdInnerY*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Plugin::ParticleFX::CRingEmitter::CRingEmitterCmdInnerY::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerY_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerY_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CRingEmitterCmdInnerYProxy* ptr = dynamic_cast<CRingEmitterCmdInnerYProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter::CRingEmitterCmdInnerY*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerY_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter__initParticle_void_CParticle(void *pObjectXXXX, _in EarthView::World::Graphic::CParticle* pParticle )
				{
					EarthView::World::Plugin::ParticleFX::CRingEmitter* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX;
					if (dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Plugin::ParticleFX::CRingEmitter::_initParticle(pParticle);
					else
						ptrNativeObject->_initParticle(pParticle);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter__initParticle_void_CParticle( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter__initParticle_void_CParticle_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter__initParticle_void_CParticle(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter__initParticle_void_CParticle_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CParticle* pParticle )
				{
					EarthView::World::Plugin::ParticleFX::CRingEmitter* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Plugin::ParticleFX::CRingEmitter::_initParticle(pParticle);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_setInnerSize_void_Real_Real(void *pObjectXXXX, _in Real x, _in Real y )
				{
					EarthView::World::Plugin::ParticleFX::CRingEmitter* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX;
					ptrNativeObject->setInnerSize(x, y);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_setInnerSizeX_void_Real(void *pObjectXXXX, _in Real x )
				{
					EarthView::World::Plugin::ParticleFX::CRingEmitter* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX;
					ptrNativeObject->setInnerSizeX(x);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_setInnerSizeY_void_Real(void *pObjectXXXX, _in Real y )
				{
					EarthView::World::Plugin::ParticleFX::CRingEmitter* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX;
					ptrNativeObject->setInnerSizeY(y);
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_getInnerSizeX_Real(void *pObjectXXXX )
				{
					const EarthView::World::Plugin::ParticleFX::CRingEmitter* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->getInnerSizeX();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Plugin_ParticleFX_CRingEmitter_getInnerSizeY_Real(void *pObjectXXXX )
				{
					const EarthView::World::Plugin::ParticleFX::CRingEmitter* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->getInnerSizeY();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getStringInterfacePtr_CParticleEmitterInternalStringInterface( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_getStringInterfacePtr_CParticleEmitterInternalStringInterface_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getStringInterfacePtr_CParticleEmitterInternalStringInterface(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionDirectionNoRandom_void_CVector3( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionDirectionNoRandom_void_CVector3_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionDirectionNoRandom_void_CVector3(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionDirection_void_CVector3( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionDirection_void_CVector3_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionDirection_void_CVector3(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionVelocity_void_CVector3( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionVelocity_void_CVector3_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionVelocity_void_CVector3(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionTTL_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionTTL_Real_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionTTL_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionColour_void_CColourValue( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionColour_void_CColourValue_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionColour_void_CColourValue(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_genConstantEmissionCount_ev_uint16_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_genConstantEmissionCount_ev_uint16_Real_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_genConstantEmissionCount_ev_uint16_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setPosition_void_CVector3( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_setPosition_void_CVector3_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setPosition_void_CVector3(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getPosition_CVector3( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_getPosition_CVector3_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getPosition_CVector3(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setDirection_void_CVector3( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_setDirection_void_CVector3_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setDirection_void_CVector3(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getDirection_CVector3( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_getDirection_CVector3_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getDirection_CVector3(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setUp_void_CVector3( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_setUp_void_CVector3_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setUp_void_CVector3(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getUp_CVector3( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_getUp_CVector3_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getUp_CVector3(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setAngle_void_CRadian( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_setAngle_void_CRadian_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setAngle_void_CRadian(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getAngle_CRadian( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_getAngle_CRadian_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getAngle_CRadian(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setParticleVelocity_void_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_setParticleVelocity_void_Real_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setParticleVelocity_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setParticleVelocity_void_Real_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_setParticleVelocity_void_Real_Real_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setParticleVelocity_void_Real_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMinParticleVelocity_void_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_setMinParticleVelocity_void_Real_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMinParticleVelocity_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMaxParticleVelocity_void_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_setMaxParticleVelocity_void_Real_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMaxParticleVelocity_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getParticleVelocity_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_getParticleVelocity_Real_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getParticleVelocity_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMinParticleVelocity_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_getMinParticleVelocity_Real_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMinParticleVelocity_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMaxParticleVelocity_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_getMaxParticleVelocity_Real_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMaxParticleVelocity_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setEmissionRate_void_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_setEmissionRate_void_Real_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setEmissionRate_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getEmissionRate_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_getEmissionRate_Real_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getEmissionRate_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setTimeToLive_void_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_setTimeToLive_void_Real_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setTimeToLive_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setTimeToLive_void_Real_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_setTimeToLive_void_Real_Real_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setTimeToLive_void_Real_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMinTimeToLive_void_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_setMinTimeToLive_void_Real_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMinTimeToLive_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMaxTimeToLive_void_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_setMaxTimeToLive_void_Real_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMaxTimeToLive_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getTimeToLive_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_getTimeToLive_Real_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getTimeToLive_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMinTimeToLive_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_getMinTimeToLive_Real_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMinTimeToLive_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMaxTimeToLive_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_getMaxTimeToLive_Real_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMaxTimeToLive_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setColour_void_CColourValue( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_setColour_void_CColourValue_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setColour_void_CColourValue(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setColour_void_CColourValue_CColourValue( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_setColour_void_CColourValue_CColourValue_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setColour_void_CColourValue_CColourValue(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setColourRangeStart_void_CColourValue( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_setColourRangeStart_void_CColourValue_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setColourRangeStart_void_CColourValue(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setColourRangeEnd_void_CColourValue( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_setColourRangeEnd_void_CColourValue_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setColourRangeEnd_void_CColourValue(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getColour_CColourValue( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_getColour_CColourValue_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getColour_CColourValue(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getColourRangeStart_CColourValue( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_getColourRangeStart_CColourValue_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getColourRangeStart_CColourValue(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getColourRangeEnd_CColourValue( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_getColourRangeEnd_CColourValue_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getColourRangeEnd_CColourValue(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter__getEmissionCount_ev_uint16_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter__getEmissionCount_ev_uint16_Real_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter__getEmissionCount_ev_uint16_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_setEnabled_void_ev_bool_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setEnabled_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_getEnabled_ev_bool_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getEnabled_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setStartTime_void_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_setStartTime_void_Real_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setStartTime_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getStartTime_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_getStartTime_Real_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getStartTime_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setDuration_void_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_setDuration_void_Real_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setDuration_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getDuration_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_getDuration_Real_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getDuration_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setDuration_void_Real_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_setDuration_void_Real_Real_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setDuration_void_Real_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMinDuration_void_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_setMinDuration_void_Real_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMinDuration_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMaxDuration_void_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_setMaxDuration_void_Real_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMaxDuration_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMinDuration_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_getMinDuration_Real_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMinDuration_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMaxDuration_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_getMaxDuration_Real_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMaxDuration_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setRepeatDelay_void_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_setRepeatDelay_void_Real_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setRepeatDelay_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getRepeatDelay_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_getRepeatDelay_Real_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getRepeatDelay_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setRepeatDelay_void_Real_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_setRepeatDelay_void_Real_Real_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setRepeatDelay_void_Real_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMinRepeatDelay_void_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_setMinRepeatDelay_void_Real_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMinRepeatDelay_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMaxRepeatDelay_void_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_setMaxRepeatDelay_void_Real_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMaxRepeatDelay_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMinRepeatDelay_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_getMinRepeatDelay_Real_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMinRepeatDelay_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMaxRepeatDelay_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_getMaxRepeatDelay_Real_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMaxRepeatDelay_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setName_void_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_setName_void_EVString_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setEmittedEmitter_void_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_setEmittedEmitter_void_EVString_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setEmittedEmitter_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_isEmitted_ev_bool( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_isEmitted_ev_bool_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_isEmitted_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setEmitted_void_ev_bool( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CRingEmitter_setEmitted_void_ev_bool_Callback* pCallback )
				{
					CRingEmitterProxy* ptr = dynamic_cast<CRingEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CRingEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setEmitted_void_ev_bool(pCallback);
					}
				}
			}
		}
	}
}
