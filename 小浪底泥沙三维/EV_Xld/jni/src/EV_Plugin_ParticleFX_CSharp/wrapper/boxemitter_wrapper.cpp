/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "plugin_particlefx/boxemitter.h"
namespace EarthView
{
	namespace World
	{
		namespace Plugin
		{
			namespace ParticleFX
			{
				typedef EarthView::World::Graphic::CParticleEmitter::CParticleEmitterInternalStringInterface*  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_getStringInterfacePtr_CParticleEmitterInternalStringInterface_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionDirectionNoRandom_void_CVector3_Callback)(_inout void* destVector);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionDirection_void_CVector3_Callback)(_inout void* destVector);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionVelocity_void_CVector3_Callback)(_inout void* destVector);
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionTTL_Real_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionColour_void_CColourValue_Callback)(_inout void* destColour);
				typedef ev_uint16  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_genConstantEmissionCount_ev_uint16_Real_Callback)(_in Real timeElapsed);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_setPosition_void_CVector3_Callback)(_in const void* pos);
				typedef const void*  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_getPosition_CVector3_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_setDirection_void_CVector3_Callback)(_in const void* direction);
				typedef const void*  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_getDirection_CVector3_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_setUp_void_CVector3_Callback)(_in const void* up);
				typedef const void*  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_getUp_CVector3_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_setAngle_void_CRadian_Callback)(_in const void* angle);
				typedef const void*  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_getAngle_CRadian_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_setParticleVelocity_void_Real_Callback)(_in Real speed);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_setParticleVelocity_void_Real_Real_Callback)(_in Real min, _in Real max);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMinParticleVelocity_void_Real_Callback)(_in Real min);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMaxParticleVelocity_void_Real_Callback)(_in Real max);
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_getParticleVelocity_Real_Callback)();
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMinParticleVelocity_Real_Callback)();
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMaxParticleVelocity_Real_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_setEmissionRate_void_Real_Callback)(_in Real particlesPerSecond);
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_getEmissionRate_Real_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_setTimeToLive_void_Real_Callback)(_in Real ttl);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_setTimeToLive_void_Real_Real_Callback)(_in Real minTtl, _in Real maxTtl);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMinTimeToLive_void_Real_Callback)(_in Real min);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMaxTimeToLive_void_Real_Callback)(_in Real max);
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_getTimeToLive_Real_Callback)();
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMinTimeToLive_Real_Callback)();
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMaxTimeToLive_Real_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_setColour_void_CColourValue_Callback)(_in const void* colour);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_setColour_void_CColourValue_CColourValue_Callback)(_in const void* colourStart, _in const void* colourEnd);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_setColourRangeStart_void_CColourValue_Callback)(_in const void* colour);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_setColourRangeEnd_void_CColourValue_Callback)(_in const void* colour);
				typedef const void*  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_getColour_CColourValue_Callback)();
				typedef const void*  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_getColourRangeStart_CColourValue_Callback)();
				typedef const void*  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_getColourRangeEnd_CColourValue_Callback)();
				typedef ev_uint16  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter__getEmissionCount_ev_uint16_Real_Callback)(_in Real timeElapsed);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter__initParticle_void_CParticle_Callback)(_in EarthView::World::Graphic::CParticle* pParticle);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_setEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
				typedef ev_bool  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_getEnabled_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_setStartTime_void_Real_Callback)(_in Real startTime);
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_getStartTime_Real_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_setDuration_void_Real_Callback)(_in Real duration);
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_getDuration_Real_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_setDuration_void_Real_Real_Callback)(_in Real min, _in Real max);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMinDuration_void_Real_Callback)(_in Real min);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMaxDuration_void_Real_Callback)(_in Real max);
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMinDuration_Real_Callback)();
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMaxDuration_Real_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_setRepeatDelay_void_Real_Callback)(_in Real duration);
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_getRepeatDelay_Real_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_setRepeatDelay_void_Real_Real_Callback)(_in Real min, _in Real max);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMinRepeatDelay_void_Real_Callback)(_in Real min);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMaxRepeatDelay_void_Real_Callback)(_in Real max);
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMinRepeatDelay_Real_Callback)();
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMaxRepeatDelay_Real_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_setName_void_EVString_Callback)(_in char*& newName);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_setEmittedEmitter_void_EVString_Callback)(_in char*& emittedEmitter);
				typedef ev_bool  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_isEmitted_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter_setEmitted_void_ev_bool_Callback)(_in ev_bool emitted);
				class CBoxEmitterProxy : public EarthView::World::Plugin::ParticleFX::CBoxEmitter
				{
				private:
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_getStringInterfacePtr_CParticleEmitterInternalStringInterface_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getStringInterfacePtr_CParticleEmitterInternalStringInterface_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionDirectionNoRandom_void_CVector3_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionDirectionNoRandom_void_CVector3_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionDirection_void_CVector3_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionDirection_void_CVector3_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionVelocity_void_CVector3_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionVelocity_void_CVector3_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionTTL_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionTTL_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionColour_void_CColourValue_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionColour_void_CColourValue_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_genConstantEmissionCount_ev_uint16_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_genConstantEmissionCount_ev_uint16_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_setPosition_void_CVector3_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setPosition_void_CVector3_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_getPosition_CVector3_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getPosition_CVector3_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_setDirection_void_CVector3_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setDirection_void_CVector3_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_getDirection_CVector3_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getDirection_CVector3_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_setUp_void_CVector3_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setUp_void_CVector3_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_getUp_CVector3_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getUp_CVector3_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_setAngle_void_CRadian_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setAngle_void_CRadian_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_getAngle_CRadian_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getAngle_CRadian_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_setParticleVelocity_void_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setParticleVelocity_void_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_setParticleVelocity_void_Real_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setParticleVelocity_void_Real_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMinParticleVelocity_void_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMinParticleVelocity_void_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMaxParticleVelocity_void_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMaxParticleVelocity_void_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_getParticleVelocity_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getParticleVelocity_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMinParticleVelocity_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMinParticleVelocity_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMaxParticleVelocity_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMaxParticleVelocity_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_setEmissionRate_void_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setEmissionRate_void_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_getEmissionRate_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getEmissionRate_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_setTimeToLive_void_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setTimeToLive_void_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_setTimeToLive_void_Real_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setTimeToLive_void_Real_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMinTimeToLive_void_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMinTimeToLive_void_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMaxTimeToLive_void_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMaxTimeToLive_void_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_getTimeToLive_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getTimeToLive_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMinTimeToLive_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMinTimeToLive_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMaxTimeToLive_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMaxTimeToLive_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_setColour_void_CColourValue_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setColour_void_CColourValue_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_setColour_void_CColourValue_CColourValue_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setColour_void_CColourValue_CColourValue_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_setColourRangeStart_void_CColourValue_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setColourRangeStart_void_CColourValue_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_setColourRangeEnd_void_CColourValue_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setColourRangeEnd_void_CColourValue_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_getColour_CColourValue_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getColour_CColourValue_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_getColourRangeStart_CColourValue_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getColourRangeStart_CColourValue_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_getColourRangeEnd_CColourValue_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getColourRangeEnd_CColourValue_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter__getEmissionCount_ev_uint16_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter__getEmissionCount_ev_uint16_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter__initParticle_void_CParticle_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter__initParticle_void_CParticle_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_setEnabled_void_ev_bool_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setEnabled_void_ev_bool_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_getEnabled_ev_bool_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getEnabled_ev_bool_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_setStartTime_void_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setStartTime_void_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_getStartTime_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getStartTime_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_setDuration_void_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setDuration_void_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_getDuration_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getDuration_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_setDuration_void_Real_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setDuration_void_Real_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMinDuration_void_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMinDuration_void_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMaxDuration_void_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMaxDuration_void_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMinDuration_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMinDuration_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMaxDuration_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMaxDuration_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_setRepeatDelay_void_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setRepeatDelay_void_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_getRepeatDelay_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getRepeatDelay_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_setRepeatDelay_void_Real_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setRepeatDelay_void_Real_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMinRepeatDelay_void_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMinRepeatDelay_void_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMaxRepeatDelay_void_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMaxRepeatDelay_void_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMinRepeatDelay_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMinRepeatDelay_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMaxRepeatDelay_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMaxRepeatDelay_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_setName_void_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setName_void_EVString_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_setEmittedEmitter_void_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setEmittedEmitter_void_EVString_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_isEmitted_ev_bool_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_isEmitted_ev_bool_Callback;
					EarthView_World_Plugin_ParticleFX_CBoxEmitter_setEmitted_void_ev_bool_Callback* m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setEmitted_void_ev_bool_Callback;
				public:
					CBoxEmitterProxy(EarthView::World::Core::CNameValuePairList *pList) : CBoxEmitter(pList)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getStringInterfacePtr_CParticleEmitterInternalStringInterface_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionDirectionNoRandom_void_CVector3_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionDirection_void_CVector3_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionVelocity_void_CVector3_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionTTL_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionColour_void_CColourValue_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_genConstantEmissionCount_ev_uint16_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setPosition_void_CVector3_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getPosition_CVector3_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setDirection_void_CVector3_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getDirection_CVector3_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setUp_void_CVector3_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getUp_CVector3_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setAngle_void_CRadian_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getAngle_CRadian_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setParticleVelocity_void_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setParticleVelocity_void_Real_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMinParticleVelocity_void_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMaxParticleVelocity_void_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getParticleVelocity_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMinParticleVelocity_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMaxParticleVelocity_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setEmissionRate_void_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getEmissionRate_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setTimeToLive_void_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setTimeToLive_void_Real_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMinTimeToLive_void_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMaxTimeToLive_void_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getTimeToLive_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMinTimeToLive_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMaxTimeToLive_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setColour_void_CColourValue_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setColour_void_CColourValue_CColourValue_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setColourRangeStart_void_CColourValue_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setColourRangeEnd_void_CColourValue_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getColour_CColourValue_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getColourRangeStart_CColourValue_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getColourRangeEnd_CColourValue_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter__getEmissionCount_ev_uint16_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter__initParticle_void_CParticle_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setEnabled_void_ev_bool_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getEnabled_ev_bool_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setStartTime_void_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getStartTime_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setDuration_void_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getDuration_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setDuration_void_Real_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMinDuration_void_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMaxDuration_void_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMinDuration_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMaxDuration_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setRepeatDelay_void_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getRepeatDelay_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setRepeatDelay_void_Real_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMinRepeatDelay_void_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMaxRepeatDelay_void_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMinRepeatDelay_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMaxRepeatDelay_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setEmittedEmitter_void_EVString_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_isEmitted_ev_bool_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setEmitted_void_ev_bool_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getStringInterfacePtr_CParticleEmitterInternalStringInterface(EarthView_World_Plugin_ParticleFX_CBoxEmitter_getStringInterfacePtr_CParticleEmitterInternalStringInterface_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getStringInterfacePtr_CParticleEmitterInternalStringInterface_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionDirectionNoRandom_void_CVector3(EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionDirectionNoRandom_void_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionDirectionNoRandom_void_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionDirection_void_CVector3(EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionDirection_void_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionDirection_void_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionVelocity_void_CVector3(EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionVelocity_void_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionVelocity_void_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionTTL_Real(EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionTTL_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionTTL_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionColour_void_CColourValue(EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionColour_void_CColourValue_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionColour_void_CColourValue_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_genConstantEmissionCount_ev_uint16_Real(EarthView_World_Plugin_ParticleFX_CBoxEmitter_genConstantEmissionCount_ev_uint16_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_genConstantEmissionCount_ev_uint16_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setPosition_void_CVector3(EarthView_World_Plugin_ParticleFX_CBoxEmitter_setPosition_void_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setPosition_void_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getPosition_CVector3(EarthView_World_Plugin_ParticleFX_CBoxEmitter_getPosition_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getPosition_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setDirection_void_CVector3(EarthView_World_Plugin_ParticleFX_CBoxEmitter_setDirection_void_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setDirection_void_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getDirection_CVector3(EarthView_World_Plugin_ParticleFX_CBoxEmitter_getDirection_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getDirection_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setUp_void_CVector3(EarthView_World_Plugin_ParticleFX_CBoxEmitter_setUp_void_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setUp_void_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getUp_CVector3(EarthView_World_Plugin_ParticleFX_CBoxEmitter_getUp_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getUp_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setAngle_void_CRadian(EarthView_World_Plugin_ParticleFX_CBoxEmitter_setAngle_void_CRadian_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setAngle_void_CRadian_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getAngle_CRadian(EarthView_World_Plugin_ParticleFX_CBoxEmitter_getAngle_CRadian_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getAngle_CRadian_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setParticleVelocity_void_Real(EarthView_World_Plugin_ParticleFX_CBoxEmitter_setParticleVelocity_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setParticleVelocity_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setParticleVelocity_void_Real_Real(EarthView_World_Plugin_ParticleFX_CBoxEmitter_setParticleVelocity_void_Real_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setParticleVelocity_void_Real_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMinParticleVelocity_void_Real(EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMinParticleVelocity_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMinParticleVelocity_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMaxParticleVelocity_void_Real(EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMaxParticleVelocity_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMaxParticleVelocity_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getParticleVelocity_Real(EarthView_World_Plugin_ParticleFX_CBoxEmitter_getParticleVelocity_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getParticleVelocity_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMinParticleVelocity_Real(EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMinParticleVelocity_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMinParticleVelocity_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMaxParticleVelocity_Real(EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMaxParticleVelocity_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMaxParticleVelocity_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setEmissionRate_void_Real(EarthView_World_Plugin_ParticleFX_CBoxEmitter_setEmissionRate_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setEmissionRate_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getEmissionRate_Real(EarthView_World_Plugin_ParticleFX_CBoxEmitter_getEmissionRate_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getEmissionRate_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setTimeToLive_void_Real(EarthView_World_Plugin_ParticleFX_CBoxEmitter_setTimeToLive_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setTimeToLive_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setTimeToLive_void_Real_Real(EarthView_World_Plugin_ParticleFX_CBoxEmitter_setTimeToLive_void_Real_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setTimeToLive_void_Real_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMinTimeToLive_void_Real(EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMinTimeToLive_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMinTimeToLive_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMaxTimeToLive_void_Real(EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMaxTimeToLive_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMaxTimeToLive_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getTimeToLive_Real(EarthView_World_Plugin_ParticleFX_CBoxEmitter_getTimeToLive_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getTimeToLive_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMinTimeToLive_Real(EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMinTimeToLive_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMinTimeToLive_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMaxTimeToLive_Real(EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMaxTimeToLive_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMaxTimeToLive_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setColour_void_CColourValue(EarthView_World_Plugin_ParticleFX_CBoxEmitter_setColour_void_CColourValue_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setColour_void_CColourValue_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setColour_void_CColourValue_CColourValue(EarthView_World_Plugin_ParticleFX_CBoxEmitter_setColour_void_CColourValue_CColourValue_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setColour_void_CColourValue_CColourValue_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setColourRangeStart_void_CColourValue(EarthView_World_Plugin_ParticleFX_CBoxEmitter_setColourRangeStart_void_CColourValue_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setColourRangeStart_void_CColourValue_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setColourRangeEnd_void_CColourValue(EarthView_World_Plugin_ParticleFX_CBoxEmitter_setColourRangeEnd_void_CColourValue_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setColourRangeEnd_void_CColourValue_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getColour_CColourValue(EarthView_World_Plugin_ParticleFX_CBoxEmitter_getColour_CColourValue_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getColour_CColourValue_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getColourRangeStart_CColourValue(EarthView_World_Plugin_ParticleFX_CBoxEmitter_getColourRangeStart_CColourValue_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getColourRangeStart_CColourValue_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getColourRangeEnd_CColourValue(EarthView_World_Plugin_ParticleFX_CBoxEmitter_getColourRangeEnd_CColourValue_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getColourRangeEnd_CColourValue_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter__getEmissionCount_ev_uint16_Real(EarthView_World_Plugin_ParticleFX_CBoxEmitter__getEmissionCount_ev_uint16_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter__getEmissionCount_ev_uint16_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter__initParticle_void_CParticle(EarthView_World_Plugin_ParticleFX_CBoxEmitter__initParticle_void_CParticle_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter__initParticle_void_CParticle_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setEnabled_void_ev_bool(EarthView_World_Plugin_ParticleFX_CBoxEmitter_setEnabled_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setEnabled_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getEnabled_ev_bool(EarthView_World_Plugin_ParticleFX_CBoxEmitter_getEnabled_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getEnabled_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setStartTime_void_Real(EarthView_World_Plugin_ParticleFX_CBoxEmitter_setStartTime_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setStartTime_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getStartTime_Real(EarthView_World_Plugin_ParticleFX_CBoxEmitter_getStartTime_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getStartTime_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setDuration_void_Real(EarthView_World_Plugin_ParticleFX_CBoxEmitter_setDuration_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setDuration_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getDuration_Real(EarthView_World_Plugin_ParticleFX_CBoxEmitter_getDuration_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getDuration_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setDuration_void_Real_Real(EarthView_World_Plugin_ParticleFX_CBoxEmitter_setDuration_void_Real_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setDuration_void_Real_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMinDuration_void_Real(EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMinDuration_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMinDuration_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMaxDuration_void_Real(EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMaxDuration_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMaxDuration_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMinDuration_Real(EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMinDuration_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMinDuration_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMaxDuration_Real(EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMaxDuration_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMaxDuration_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setRepeatDelay_void_Real(EarthView_World_Plugin_ParticleFX_CBoxEmitter_setRepeatDelay_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setRepeatDelay_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getRepeatDelay_Real(EarthView_World_Plugin_ParticleFX_CBoxEmitter_getRepeatDelay_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getRepeatDelay_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setRepeatDelay_void_Real_Real(EarthView_World_Plugin_ParticleFX_CBoxEmitter_setRepeatDelay_void_Real_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setRepeatDelay_void_Real_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMinRepeatDelay_void_Real(EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMinRepeatDelay_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMinRepeatDelay_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMaxRepeatDelay_void_Real(EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMaxRepeatDelay_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMaxRepeatDelay_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMinRepeatDelay_Real(EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMinRepeatDelay_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMinRepeatDelay_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMaxRepeatDelay_Real(EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMaxRepeatDelay_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMaxRepeatDelay_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setName_void_EVString(EarthView_World_Plugin_ParticleFX_CBoxEmitter_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setEmittedEmitter_void_EVString(EarthView_World_Plugin_ParticleFX_CBoxEmitter_setEmittedEmitter_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setEmittedEmitter_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_isEmitted_ev_bool(EarthView_World_Plugin_ParticleFX_CBoxEmitter_isEmitted_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_isEmitted_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setEmitted_void_ev_bool(EarthView_World_Plugin_ParticleFX_CBoxEmitter_setEmitted_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setEmitted_void_ev_bool_Callback = pCallback;
					}
					virtual void _initParticle(_in EarthView::World::Graphic::CParticle* pParticle)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter__initParticle_void_CParticle_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CBoxEmitter__initParticle_void_CParticle_Callback(pParticle);
						}
						else
							return this->CBoxEmitter::_initParticle(pParticle);
					}
					virtual ev_uint16 _getEmissionCount(_in Real timeElapsed)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter__getEmissionCount_ev_uint16_Real_Callback != NULL && this->isCustomExtend())
						{
							ev_uint16 returnValue = m_EarthView_World_Plugin_ParticleFX_CBoxEmitter__getEmissionCount_ev_uint16_Real_Callback(timeElapsed);
							return returnValue;
						}
						else
							return this->CBoxEmitter::_getEmissionCount(timeElapsed);
					}
					virtual void setDirection(_in const EarthView::World::Spatial::Math::CVector3& direction)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setDirection_void_CVector3_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setDirection_void_CVector3_Callback(&direction);
						}
						else
							return this->CBoxEmitter::setDirection(direction);
					}
					virtual EarthView::World::Graphic::CParticleEmitter::CParticleEmitterInternalStringInterface* getStringInterfacePtr()
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getStringInterfacePtr_CParticleEmitterInternalStringInterface_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CParticleEmitter::CParticleEmitterInternalStringInterface* returnValue = m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getStringInterfacePtr_CParticleEmitterInternalStringInterface_Callback();
							return returnValue;
						}
						else
							return this->CBoxEmitter::getStringInterfacePtr();
					}
					virtual void genEmissionDirectionNoRandom(_inout EarthView::World::Spatial::Math::CVector3& destVector)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionDirectionNoRandom_void_CVector3_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionDirectionNoRandom_void_CVector3_Callback(&destVector);
						}
						else
							return this->CBoxEmitter::genEmissionDirectionNoRandom(destVector);
					}
					virtual void genEmissionDirection(_inout EarthView::World::Spatial::Math::CVector3& destVector)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionDirection_void_CVector3_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionDirection_void_CVector3_Callback(&destVector);
						}
						else
							return this->CBoxEmitter::genEmissionDirection(destVector);
					}
					virtual void genEmissionVelocity(_inout EarthView::World::Spatial::Math::CVector3& destVector)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionVelocity_void_CVector3_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionVelocity_void_CVector3_Callback(&destVector);
						}
						else
							return this->CBoxEmitter::genEmissionVelocity(destVector);
					}
					virtual Real genEmissionTTL()
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionTTL_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionTTL_Real_Callback();
							return returnValue;
						}
						else
							return this->CBoxEmitter::genEmissionTTL();
					}
					virtual void genEmissionColour(_inout EarthView::World::Graphic::CColourValue& destColour)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionColour_void_CColourValue_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionColour_void_CColourValue_Callback(&destColour);
						}
						else
							return this->CBoxEmitter::genEmissionColour(destColour);
					}
					virtual ev_uint16 genConstantEmissionCount(_in Real timeElapsed)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_genConstantEmissionCount_ev_uint16_Real_Callback != NULL && this->isCustomExtend())
						{
							ev_uint16 returnValue = m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_genConstantEmissionCount_ev_uint16_Real_Callback(timeElapsed);
							return returnValue;
						}
						else
							return this->CBoxEmitter::genConstantEmissionCount(timeElapsed);
					}
					virtual void setPosition(_in const EarthView::World::Spatial::Math::CVector3& pos)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setPosition_void_CVector3_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setPosition_void_CVector3_Callback(&pos);
						}
						else
							return this->CBoxEmitter::setPosition(pos);
					}
					virtual const EarthView::World::Spatial::Math::CVector3& getPosition() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getPosition_CVector3_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Math::CVector3& returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getPosition_CVector3_Callback();
							return returnValue;
						}
						else
							return this->CBoxEmitter::getPosition();
					}
					virtual const EarthView::World::Spatial::Math::CVector3& getDirection() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getDirection_CVector3_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Math::CVector3& returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getDirection_CVector3_Callback();
							return returnValue;
						}
						else
							return this->CBoxEmitter::getDirection();
					}
					virtual void setUp(_in const EarthView::World::Spatial::Math::CVector3& up)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setUp_void_CVector3_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setUp_void_CVector3_Callback(&up);
						}
						else
							return this->CBoxEmitter::setUp(up);
					}
					virtual const EarthView::World::Spatial::Math::CVector3& getUp() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getUp_CVector3_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Math::CVector3& returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getUp_CVector3_Callback();
							return returnValue;
						}
						else
							return this->CBoxEmitter::getUp();
					}
					virtual void setAngle(_in const EarthView::World::Spatial::Math::CRadian& angle)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setAngle_void_CRadian_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setAngle_void_CRadian_Callback(&angle);
						}
						else
							return this->CBoxEmitter::setAngle(angle);
					}
					virtual const EarthView::World::Spatial::Math::CRadian& getAngle() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getAngle_CRadian_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Math::CRadian& returnValue = *(EarthView::World::Spatial::Math::CRadian*)m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getAngle_CRadian_Callback();
							return returnValue;
						}
						else
							return this->CBoxEmitter::getAngle();
					}
					virtual void setParticleVelocity(_in Real speed)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setParticleVelocity_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setParticleVelocity_void_Real_Callback(speed);
						}
						else
							return this->CBoxEmitter::setParticleVelocity(speed);
					}
					virtual void setParticleVelocity(_in Real min, _in Real max)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setParticleVelocity_void_Real_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setParticleVelocity_void_Real_Real_Callback(min, max);
						}
						else
							return this->CBoxEmitter::setParticleVelocity(min, max);
					}
					virtual void setMinParticleVelocity(_in Real min)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMinParticleVelocity_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMinParticleVelocity_void_Real_Callback(min);
						}
						else
							return this->CBoxEmitter::setMinParticleVelocity(min);
					}
					virtual void setMaxParticleVelocity(_in Real max)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMaxParticleVelocity_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMaxParticleVelocity_void_Real_Callback(max);
						}
						else
							return this->CBoxEmitter::setMaxParticleVelocity(max);
					}
					virtual Real getParticleVelocity() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getParticleVelocity_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getParticleVelocity_Real_Callback();
							return returnValue;
						}
						else
							return this->CBoxEmitter::getParticleVelocity();
					}
					virtual Real getMinParticleVelocity() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMinParticleVelocity_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMinParticleVelocity_Real_Callback();
							return returnValue;
						}
						else
							return this->CBoxEmitter::getMinParticleVelocity();
					}
					virtual Real getMaxParticleVelocity() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMaxParticleVelocity_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMaxParticleVelocity_Real_Callback();
							return returnValue;
						}
						else
							return this->CBoxEmitter::getMaxParticleVelocity();
					}
					virtual void setEmissionRate(_in Real particlesPerSecond)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setEmissionRate_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setEmissionRate_void_Real_Callback(particlesPerSecond);
						}
						else
							return this->CBoxEmitter::setEmissionRate(particlesPerSecond);
					}
					virtual Real getEmissionRate() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getEmissionRate_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getEmissionRate_Real_Callback();
							return returnValue;
						}
						else
							return this->CBoxEmitter::getEmissionRate();
					}
					virtual void setTimeToLive(_in Real ttl)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setTimeToLive_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setTimeToLive_void_Real_Callback(ttl);
						}
						else
							return this->CBoxEmitter::setTimeToLive(ttl);
					}
					virtual void setTimeToLive(_in Real minTtl, _in Real maxTtl)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setTimeToLive_void_Real_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setTimeToLive_void_Real_Real_Callback(minTtl, maxTtl);
						}
						else
							return this->CBoxEmitter::setTimeToLive(minTtl, maxTtl);
					}
					virtual void setMinTimeToLive(_in Real min)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMinTimeToLive_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMinTimeToLive_void_Real_Callback(min);
						}
						else
							return this->CBoxEmitter::setMinTimeToLive(min);
					}
					virtual void setMaxTimeToLive(_in Real max)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMaxTimeToLive_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMaxTimeToLive_void_Real_Callback(max);
						}
						else
							return this->CBoxEmitter::setMaxTimeToLive(max);
					}
					virtual Real getTimeToLive() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getTimeToLive_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getTimeToLive_Real_Callback();
							return returnValue;
						}
						else
							return this->CBoxEmitter::getTimeToLive();
					}
					virtual Real getMinTimeToLive() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMinTimeToLive_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMinTimeToLive_Real_Callback();
							return returnValue;
						}
						else
							return this->CBoxEmitter::getMinTimeToLive();
					}
					virtual Real getMaxTimeToLive() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMaxTimeToLive_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMaxTimeToLive_Real_Callback();
							return returnValue;
						}
						else
							return this->CBoxEmitter::getMaxTimeToLive();
					}
					virtual void setColour(_in const EarthView::World::Graphic::CColourValue& colour)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setColour_void_CColourValue_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setColour_void_CColourValue_Callback(&colour);
						}
						else
							return this->CBoxEmitter::setColour(colour);
					}
					virtual void setColour(_in const EarthView::World::Graphic::CColourValue& colourStart, _in const EarthView::World::Graphic::CColourValue& colourEnd)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setColour_void_CColourValue_CColourValue_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setColour_void_CColourValue_CColourValue_Callback(&colourStart, &colourEnd);
						}
						else
							return this->CBoxEmitter::setColour(colourStart, colourEnd);
					}
					virtual void setColourRangeStart(_in const EarthView::World::Graphic::CColourValue& colour)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setColourRangeStart_void_CColourValue_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setColourRangeStart_void_CColourValue_Callback(&colour);
						}
						else
							return this->CBoxEmitter::setColourRangeStart(colour);
					}
					virtual void setColourRangeEnd(_in const EarthView::World::Graphic::CColourValue& colour)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setColourRangeEnd_void_CColourValue_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setColourRangeEnd_void_CColourValue_Callback(&colour);
						}
						else
							return this->CBoxEmitter::setColourRangeEnd(colour);
					}
					virtual const EarthView::World::Graphic::CColourValue& getColour() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getColour_CColourValue_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Graphic::CColourValue& returnValue = *(EarthView::World::Graphic::CColourValue*)m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getColour_CColourValue_Callback();
							return returnValue;
						}
						else
							return this->CBoxEmitter::getColour();
					}
					virtual const EarthView::World::Graphic::CColourValue& getColourRangeStart() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getColourRangeStart_CColourValue_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Graphic::CColourValue& returnValue = *(EarthView::World::Graphic::CColourValue*)m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getColourRangeStart_CColourValue_Callback();
							return returnValue;
						}
						else
							return this->CBoxEmitter::getColourRangeStart();
					}
					virtual const EarthView::World::Graphic::CColourValue& getColourRangeEnd() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getColourRangeEnd_CColourValue_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Graphic::CColourValue& returnValue = *(EarthView::World::Graphic::CColourValue*)m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getColourRangeEnd_CColourValue_Callback();
							return returnValue;
						}
						else
							return this->CBoxEmitter::getColourRangeEnd();
					}
					virtual void setEnabled(_in ev_bool enabled)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setEnabled_void_ev_bool_Callback(enabled);
						}
						else
							return this->CBoxEmitter::setEnabled(enabled);
					}
					virtual ev_bool getEnabled() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getEnabled_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CBoxEmitter::getEnabled();
					}
					virtual void setStartTime(_in Real startTime)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setStartTime_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setStartTime_void_Real_Callback(startTime);
						}
						else
							return this->CBoxEmitter::setStartTime(startTime);
					}
					virtual Real getStartTime() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getStartTime_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getStartTime_Real_Callback();
							return returnValue;
						}
						else
							return this->CBoxEmitter::getStartTime();
					}
					virtual void setDuration(_in Real duration)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setDuration_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setDuration_void_Real_Callback(duration);
						}
						else
							return this->CBoxEmitter::setDuration(duration);
					}
					virtual Real getDuration() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getDuration_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getDuration_Real_Callback();
							return returnValue;
						}
						else
							return this->CBoxEmitter::getDuration();
					}
					virtual void setDuration(_in Real min, _in Real max)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setDuration_void_Real_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setDuration_void_Real_Real_Callback(min, max);
						}
						else
							return this->CBoxEmitter::setDuration(min, max);
					}
					virtual void setMinDuration(_in Real min)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMinDuration_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMinDuration_void_Real_Callback(min);
						}
						else
							return this->CBoxEmitter::setMinDuration(min);
					}
					virtual void setMaxDuration(_in Real max)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMaxDuration_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMaxDuration_void_Real_Callback(max);
						}
						else
							return this->CBoxEmitter::setMaxDuration(max);
					}
					virtual Real getMinDuration() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMinDuration_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMinDuration_Real_Callback();
							return returnValue;
						}
						else
							return this->CBoxEmitter::getMinDuration();
					}
					virtual Real getMaxDuration() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMaxDuration_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMaxDuration_Real_Callback();
							return returnValue;
						}
						else
							return this->CBoxEmitter::getMaxDuration();
					}
					virtual void setRepeatDelay(_in Real duration)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setRepeatDelay_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setRepeatDelay_void_Real_Callback(duration);
						}
						else
							return this->CBoxEmitter::setRepeatDelay(duration);
					}
					virtual Real getRepeatDelay() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getRepeatDelay_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getRepeatDelay_Real_Callback();
							return returnValue;
						}
						else
							return this->CBoxEmitter::getRepeatDelay();
					}
					virtual void setRepeatDelay(_in Real min, _in Real max)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setRepeatDelay_void_Real_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setRepeatDelay_void_Real_Real_Callback(min, max);
						}
						else
							return this->CBoxEmitter::setRepeatDelay(min, max);
					}
					virtual void setMinRepeatDelay(_in Real min)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMinRepeatDelay_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMinRepeatDelay_void_Real_Callback(min);
						}
						else
							return this->CBoxEmitter::setMinRepeatDelay(min);
					}
					virtual void setMaxRepeatDelay(_in Real max)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMaxRepeatDelay_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMaxRepeatDelay_void_Real_Callback(max);
						}
						else
							return this->CBoxEmitter::setMaxRepeatDelay(max);
					}
					virtual Real getMinRepeatDelay() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMinRepeatDelay_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMinRepeatDelay_Real_Callback();
							return returnValue;
						}
						else
							return this->CBoxEmitter::getMinRepeatDelay();
					}
					virtual Real getMaxRepeatDelay() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMaxRepeatDelay_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMaxRepeatDelay_Real_Callback();
							return returnValue;
						}
						else
							return this->CBoxEmitter::getMaxRepeatDelay();
					}
					virtual void setName(_in const EVString& newName)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* newName_Char = newName.makeBuffer();
							m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setName_void_EVString_Callback(newName_Char);
						}
						else
							return this->CBoxEmitter::setName(newName);
					}
					virtual void setEmittedEmitter(_in const EVString& emittedEmitter)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setEmittedEmitter_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* emittedEmitter_Char = emittedEmitter.makeBuffer();
							m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setEmittedEmitter_void_EVString_Callback(emittedEmitter_Char);
						}
						else
							return this->CBoxEmitter::setEmittedEmitter(emittedEmitter);
					}
					virtual ev_bool isEmitted() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_isEmitted_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_isEmitted_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CBoxEmitter::isEmitted();
					}
					virtual void setEmitted(_in ev_bool emitted)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setEmitted_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setEmitted_void_ev_bool_Callback(emitted);
						}
						else
							return this->CBoxEmitter::setEmitted(emitted);
					}
				};
				REGISTER_FACTORY_CLASS(CBoxEmitterProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter__initParticle_void_CParticle(void *pObjectXXXX, _in EarthView::World::Graphic::CParticle* pParticle )
				{
					EarthView::World::Plugin::ParticleFX::CBoxEmitter* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX;
					if (dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Plugin::ParticleFX::CBoxEmitter::_initParticle(pParticle);
					else
						ptrNativeObject->_initParticle(pParticle);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter__initParticle_void_CParticle( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter__initParticle_void_CParticle_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter__initParticle_void_CParticle(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CBoxEmitter__initParticle_void_CParticle_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CParticle* pParticle )
				{
					EarthView::World::Plugin::ParticleFX::CBoxEmitter* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Plugin::ParticleFX::CBoxEmitter::_initParticle(pParticle);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getStringInterfacePtr_CParticleEmitterInternalStringInterface( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_getStringInterfacePtr_CParticleEmitterInternalStringInterface_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getStringInterfacePtr_CParticleEmitterInternalStringInterface(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionDirectionNoRandom_void_CVector3( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionDirectionNoRandom_void_CVector3_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionDirectionNoRandom_void_CVector3(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionDirection_void_CVector3( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionDirection_void_CVector3_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionDirection_void_CVector3(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionVelocity_void_CVector3( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionVelocity_void_CVector3_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionVelocity_void_CVector3(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionTTL_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionTTL_Real_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionTTL_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionColour_void_CColourValue( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionColour_void_CColourValue_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_genEmissionColour_void_CColourValue(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_genConstantEmissionCount_ev_uint16_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_genConstantEmissionCount_ev_uint16_Real_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_genConstantEmissionCount_ev_uint16_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setPosition_void_CVector3( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_setPosition_void_CVector3_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setPosition_void_CVector3(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getPosition_CVector3( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_getPosition_CVector3_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getPosition_CVector3(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setDirection_void_CVector3( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_setDirection_void_CVector3_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setDirection_void_CVector3(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getDirection_CVector3( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_getDirection_CVector3_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getDirection_CVector3(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setUp_void_CVector3( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_setUp_void_CVector3_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setUp_void_CVector3(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getUp_CVector3( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_getUp_CVector3_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getUp_CVector3(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setAngle_void_CRadian( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_setAngle_void_CRadian_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setAngle_void_CRadian(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getAngle_CRadian( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_getAngle_CRadian_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getAngle_CRadian(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setParticleVelocity_void_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_setParticleVelocity_void_Real_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setParticleVelocity_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setParticleVelocity_void_Real_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_setParticleVelocity_void_Real_Real_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setParticleVelocity_void_Real_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMinParticleVelocity_void_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMinParticleVelocity_void_Real_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMinParticleVelocity_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMaxParticleVelocity_void_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMaxParticleVelocity_void_Real_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMaxParticleVelocity_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getParticleVelocity_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_getParticleVelocity_Real_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getParticleVelocity_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMinParticleVelocity_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMinParticleVelocity_Real_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMinParticleVelocity_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMaxParticleVelocity_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMaxParticleVelocity_Real_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMaxParticleVelocity_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setEmissionRate_void_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_setEmissionRate_void_Real_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setEmissionRate_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getEmissionRate_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_getEmissionRate_Real_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getEmissionRate_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setTimeToLive_void_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_setTimeToLive_void_Real_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setTimeToLive_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setTimeToLive_void_Real_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_setTimeToLive_void_Real_Real_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setTimeToLive_void_Real_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMinTimeToLive_void_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMinTimeToLive_void_Real_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMinTimeToLive_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMaxTimeToLive_void_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMaxTimeToLive_void_Real_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMaxTimeToLive_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getTimeToLive_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_getTimeToLive_Real_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getTimeToLive_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMinTimeToLive_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMinTimeToLive_Real_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMinTimeToLive_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMaxTimeToLive_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMaxTimeToLive_Real_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMaxTimeToLive_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setColour_void_CColourValue( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_setColour_void_CColourValue_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setColour_void_CColourValue(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setColour_void_CColourValue_CColourValue( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_setColour_void_CColourValue_CColourValue_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setColour_void_CColourValue_CColourValue(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setColourRangeStart_void_CColourValue( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_setColourRangeStart_void_CColourValue_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setColourRangeStart_void_CColourValue(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setColourRangeEnd_void_CColourValue( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_setColourRangeEnd_void_CColourValue_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setColourRangeEnd_void_CColourValue(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getColour_CColourValue( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_getColour_CColourValue_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getColour_CColourValue(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getColourRangeStart_CColourValue( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_getColourRangeStart_CColourValue_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getColourRangeStart_CColourValue(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getColourRangeEnd_CColourValue( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_getColourRangeEnd_CColourValue_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getColourRangeEnd_CColourValue(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter__getEmissionCount_ev_uint16_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter__getEmissionCount_ev_uint16_Real_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter__getEmissionCount_ev_uint16_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_setEnabled_void_ev_bool_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setEnabled_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_getEnabled_ev_bool_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getEnabled_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setStartTime_void_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_setStartTime_void_Real_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setStartTime_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getStartTime_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_getStartTime_Real_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getStartTime_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setDuration_void_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_setDuration_void_Real_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setDuration_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getDuration_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_getDuration_Real_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getDuration_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setDuration_void_Real_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_setDuration_void_Real_Real_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setDuration_void_Real_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMinDuration_void_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMinDuration_void_Real_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMinDuration_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMaxDuration_void_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMaxDuration_void_Real_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMaxDuration_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMinDuration_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMinDuration_Real_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMinDuration_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMaxDuration_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMaxDuration_Real_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMaxDuration_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setRepeatDelay_void_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_setRepeatDelay_void_Real_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setRepeatDelay_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getRepeatDelay_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_getRepeatDelay_Real_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getRepeatDelay_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setRepeatDelay_void_Real_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_setRepeatDelay_void_Real_Real_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setRepeatDelay_void_Real_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMinRepeatDelay_void_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMinRepeatDelay_void_Real_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMinRepeatDelay_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMaxRepeatDelay_void_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMaxRepeatDelay_void_Real_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setMaxRepeatDelay_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMinRepeatDelay_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMinRepeatDelay_Real_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMinRepeatDelay_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMaxRepeatDelay_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMaxRepeatDelay_Real_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_getMaxRepeatDelay_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setName_void_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_setName_void_EVString_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setEmittedEmitter_void_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_setEmittedEmitter_void_EVString_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setEmittedEmitter_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_isEmitted_ev_bool( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_isEmitted_ev_bool_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_isEmitted_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setEmitted_void_ev_bool( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CBoxEmitter_setEmitted_void_ev_bool_Callback* pCallback )
				{
					CBoxEmitterProxy* ptr = dynamic_cast<CBoxEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CBoxEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CBoxEmitter_setEmitted_void_ev_bool(pCallback);
					}
				}
			}
		}
	}
}
