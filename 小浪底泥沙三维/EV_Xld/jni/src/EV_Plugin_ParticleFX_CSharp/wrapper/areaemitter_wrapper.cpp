/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "plugin_particlefx/areaemitter.h"
namespace EarthView
{
	namespace World
	{
		namespace Plugin
		{
			namespace ParticleFX
			{
				typedef EarthView::World::Graphic::CParticleEmitter::CParticleEmitterInternalStringInterface*  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_getStringInterfacePtr_CParticleEmitterInternalStringInterface_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionDirectionNoRandom_void_CVector3_Callback)(_inout void* destVector);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionDirection_void_CVector3_Callback)(_inout void* destVector);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionVelocity_void_CVector3_Callback)(_inout void* destVector);
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionTTL_Real_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionColour_void_CColourValue_Callback)(_inout void* destColour);
				typedef ev_uint16  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_genConstantEmissionCount_ev_uint16_Real_Callback)(_in Real timeElapsed);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_setPosition_void_CVector3_Callback)(_in const void* pos);
				typedef const void*  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_getPosition_CVector3_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_setDirection_void_CVector3_Callback)(_in const void* direction);
				typedef const void*  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_getDirection_CVector3_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_setUp_void_CVector3_Callback)(_in const void* up);
				typedef const void*  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_getUp_CVector3_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_setAngle_void_CRadian_Callback)(_in const void* angle);
				typedef const void*  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_getAngle_CRadian_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_setParticleVelocity_void_Real_Callback)(_in Real speed);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_setParticleVelocity_void_Real_Real_Callback)(_in Real min, _in Real max);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMinParticleVelocity_void_Real_Callback)(_in Real min);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMaxParticleVelocity_void_Real_Callback)(_in Real max);
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_getParticleVelocity_Real_Callback)();
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMinParticleVelocity_Real_Callback)();
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMaxParticleVelocity_Real_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_setEmissionRate_void_Real_Callback)(_in Real particlesPerSecond);
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_getEmissionRate_Real_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_setTimeToLive_void_Real_Callback)(_in Real ttl);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_setTimeToLive_void_Real_Real_Callback)(_in Real minTtl, _in Real maxTtl);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMinTimeToLive_void_Real_Callback)(_in Real min);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMaxTimeToLive_void_Real_Callback)(_in Real max);
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_getTimeToLive_Real_Callback)();
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMinTimeToLive_Real_Callback)();
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMaxTimeToLive_Real_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_setColour_void_CColourValue_Callback)(_in const void* colour);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_setColour_void_CColourValue_CColourValue_Callback)(_in const void* colourStart, _in const void* colourEnd);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_setColourRangeStart_void_CColourValue_Callback)(_in const void* colour);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_setColourRangeEnd_void_CColourValue_Callback)(_in const void* colour);
				typedef const void*  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_getColour_CColourValue_Callback)();
				typedef const void*  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_getColourRangeStart_CColourValue_Callback)();
				typedef const void*  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_getColourRangeEnd_CColourValue_Callback)();
				typedef ev_uint16  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter__getEmissionCount_ev_uint16_Real_Callback)(_in Real timeElapsed);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter__initParticle_void_CParticle_Callback)(_in EarthView::World::Graphic::CParticle* pParticle);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_setEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
				typedef ev_bool  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_getEnabled_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_setStartTime_void_Real_Callback)(_in Real startTime);
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_getStartTime_Real_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_setDuration_void_Real_Callback)(_in Real duration);
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_getDuration_Real_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_setDuration_void_Real_Real_Callback)(_in Real min, _in Real max);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMinDuration_void_Real_Callback)(_in Real min);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMaxDuration_void_Real_Callback)(_in Real max);
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMinDuration_Real_Callback)();
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMaxDuration_Real_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_setRepeatDelay_void_Real_Callback)(_in Real duration);
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_getRepeatDelay_Real_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_setRepeatDelay_void_Real_Real_Callback)(_in Real min, _in Real max);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMinRepeatDelay_void_Real_Callback)(_in Real min);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMaxRepeatDelay_void_Real_Callback)(_in Real max);
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMinRepeatDelay_Real_Callback)();
				typedef Real  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMaxRepeatDelay_Real_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_setName_void_EVString_Callback)(_in char*& newName);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_setEmittedEmitter_void_EVString_Callback)(_in char*& emittedEmitter);
				typedef ev_bool  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_isEmitted_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_setEmitted_void_ev_bool_Callback)(_in ev_bool emitted);
				class CAreaEmitterProxy : public EarthView::World::Plugin::ParticleFX::CAreaEmitter
				{
				private:
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_getStringInterfacePtr_CParticleEmitterInternalStringInterface_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getStringInterfacePtr_CParticleEmitterInternalStringInterface_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionDirectionNoRandom_void_CVector3_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionDirectionNoRandom_void_CVector3_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionDirection_void_CVector3_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionDirection_void_CVector3_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionVelocity_void_CVector3_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionVelocity_void_CVector3_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionTTL_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionTTL_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionColour_void_CColourValue_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionColour_void_CColourValue_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_genConstantEmissionCount_ev_uint16_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_genConstantEmissionCount_ev_uint16_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_setPosition_void_CVector3_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setPosition_void_CVector3_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_getPosition_CVector3_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getPosition_CVector3_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_setDirection_void_CVector3_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setDirection_void_CVector3_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_getDirection_CVector3_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getDirection_CVector3_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_setUp_void_CVector3_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setUp_void_CVector3_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_getUp_CVector3_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getUp_CVector3_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_setAngle_void_CRadian_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setAngle_void_CRadian_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_getAngle_CRadian_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getAngle_CRadian_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_setParticleVelocity_void_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setParticleVelocity_void_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_setParticleVelocity_void_Real_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setParticleVelocity_void_Real_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMinParticleVelocity_void_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMinParticleVelocity_void_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMaxParticleVelocity_void_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMaxParticleVelocity_void_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_getParticleVelocity_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getParticleVelocity_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMinParticleVelocity_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMinParticleVelocity_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMaxParticleVelocity_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMaxParticleVelocity_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_setEmissionRate_void_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setEmissionRate_void_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_getEmissionRate_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getEmissionRate_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_setTimeToLive_void_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setTimeToLive_void_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_setTimeToLive_void_Real_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setTimeToLive_void_Real_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMinTimeToLive_void_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMinTimeToLive_void_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMaxTimeToLive_void_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMaxTimeToLive_void_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_getTimeToLive_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getTimeToLive_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMinTimeToLive_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMinTimeToLive_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMaxTimeToLive_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMaxTimeToLive_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_setColour_void_CColourValue_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setColour_void_CColourValue_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_setColour_void_CColourValue_CColourValue_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setColour_void_CColourValue_CColourValue_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_setColourRangeStart_void_CColourValue_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setColourRangeStart_void_CColourValue_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_setColourRangeEnd_void_CColourValue_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setColourRangeEnd_void_CColourValue_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_getColour_CColourValue_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getColour_CColourValue_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_getColourRangeStart_CColourValue_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getColourRangeStart_CColourValue_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_getColourRangeEnd_CColourValue_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getColourRangeEnd_CColourValue_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter__getEmissionCount_ev_uint16_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter__getEmissionCount_ev_uint16_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter__initParticle_void_CParticle_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter__initParticle_void_CParticle_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_setEnabled_void_ev_bool_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setEnabled_void_ev_bool_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_getEnabled_ev_bool_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getEnabled_ev_bool_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_setStartTime_void_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setStartTime_void_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_getStartTime_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getStartTime_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_setDuration_void_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setDuration_void_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_getDuration_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getDuration_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_setDuration_void_Real_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setDuration_void_Real_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMinDuration_void_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMinDuration_void_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMaxDuration_void_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMaxDuration_void_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMinDuration_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMinDuration_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMaxDuration_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMaxDuration_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_setRepeatDelay_void_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setRepeatDelay_void_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_getRepeatDelay_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getRepeatDelay_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_setRepeatDelay_void_Real_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setRepeatDelay_void_Real_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMinRepeatDelay_void_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMinRepeatDelay_void_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMaxRepeatDelay_void_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMaxRepeatDelay_void_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMinRepeatDelay_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMinRepeatDelay_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMaxRepeatDelay_Real_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMaxRepeatDelay_Real_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_setName_void_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setName_void_EVString_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_setEmittedEmitter_void_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setEmittedEmitter_void_EVString_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_isEmitted_ev_bool_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_isEmitted_ev_bool_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_setEmitted_void_ev_bool_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setEmitted_void_ev_bool_Callback;
				public:
					CAreaEmitterProxy(EarthView::World::Core::CNameValuePairList *pList) : CAreaEmitter(pList)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getStringInterfacePtr_CParticleEmitterInternalStringInterface_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionDirectionNoRandom_void_CVector3_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionDirection_void_CVector3_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionVelocity_void_CVector3_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionTTL_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionColour_void_CColourValue_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_genConstantEmissionCount_ev_uint16_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setPosition_void_CVector3_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getPosition_CVector3_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setDirection_void_CVector3_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getDirection_CVector3_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setUp_void_CVector3_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getUp_CVector3_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setAngle_void_CRadian_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getAngle_CRadian_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setParticleVelocity_void_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setParticleVelocity_void_Real_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMinParticleVelocity_void_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMaxParticleVelocity_void_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getParticleVelocity_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMinParticleVelocity_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMaxParticleVelocity_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setEmissionRate_void_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getEmissionRate_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setTimeToLive_void_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setTimeToLive_void_Real_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMinTimeToLive_void_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMaxTimeToLive_void_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getTimeToLive_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMinTimeToLive_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMaxTimeToLive_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setColour_void_CColourValue_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setColour_void_CColourValue_CColourValue_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setColourRangeStart_void_CColourValue_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setColourRangeEnd_void_CColourValue_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getColour_CColourValue_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getColourRangeStart_CColourValue_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getColourRangeEnd_CColourValue_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter__getEmissionCount_ev_uint16_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter__initParticle_void_CParticle_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setEnabled_void_ev_bool_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getEnabled_ev_bool_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setStartTime_void_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getStartTime_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setDuration_void_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getDuration_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setDuration_void_Real_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMinDuration_void_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMaxDuration_void_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMinDuration_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMaxDuration_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setRepeatDelay_void_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getRepeatDelay_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setRepeatDelay_void_Real_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMinRepeatDelay_void_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMaxRepeatDelay_void_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMinRepeatDelay_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMaxRepeatDelay_Real_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setEmittedEmitter_void_EVString_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_isEmitted_ev_bool_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setEmitted_void_ev_bool_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getStringInterfacePtr_CParticleEmitterInternalStringInterface(EarthView_World_Plugin_ParticleFX_CAreaEmitter_getStringInterfacePtr_CParticleEmitterInternalStringInterface_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getStringInterfacePtr_CParticleEmitterInternalStringInterface_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionDirectionNoRandom_void_CVector3(EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionDirectionNoRandom_void_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionDirectionNoRandom_void_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionDirection_void_CVector3(EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionDirection_void_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionDirection_void_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionVelocity_void_CVector3(EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionVelocity_void_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionVelocity_void_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionTTL_Real(EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionTTL_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionTTL_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionColour_void_CColourValue(EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionColour_void_CColourValue_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionColour_void_CColourValue_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_genConstantEmissionCount_ev_uint16_Real(EarthView_World_Plugin_ParticleFX_CAreaEmitter_genConstantEmissionCount_ev_uint16_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_genConstantEmissionCount_ev_uint16_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setPosition_void_CVector3(EarthView_World_Plugin_ParticleFX_CAreaEmitter_setPosition_void_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setPosition_void_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getPosition_CVector3(EarthView_World_Plugin_ParticleFX_CAreaEmitter_getPosition_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getPosition_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setDirection_void_CVector3(EarthView_World_Plugin_ParticleFX_CAreaEmitter_setDirection_void_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setDirection_void_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getDirection_CVector3(EarthView_World_Plugin_ParticleFX_CAreaEmitter_getDirection_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getDirection_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setUp_void_CVector3(EarthView_World_Plugin_ParticleFX_CAreaEmitter_setUp_void_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setUp_void_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getUp_CVector3(EarthView_World_Plugin_ParticleFX_CAreaEmitter_getUp_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getUp_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setAngle_void_CRadian(EarthView_World_Plugin_ParticleFX_CAreaEmitter_setAngle_void_CRadian_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setAngle_void_CRadian_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getAngle_CRadian(EarthView_World_Plugin_ParticleFX_CAreaEmitter_getAngle_CRadian_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getAngle_CRadian_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setParticleVelocity_void_Real(EarthView_World_Plugin_ParticleFX_CAreaEmitter_setParticleVelocity_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setParticleVelocity_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setParticleVelocity_void_Real_Real(EarthView_World_Plugin_ParticleFX_CAreaEmitter_setParticleVelocity_void_Real_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setParticleVelocity_void_Real_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMinParticleVelocity_void_Real(EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMinParticleVelocity_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMinParticleVelocity_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMaxParticleVelocity_void_Real(EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMaxParticleVelocity_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMaxParticleVelocity_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getParticleVelocity_Real(EarthView_World_Plugin_ParticleFX_CAreaEmitter_getParticleVelocity_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getParticleVelocity_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMinParticleVelocity_Real(EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMinParticleVelocity_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMinParticleVelocity_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMaxParticleVelocity_Real(EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMaxParticleVelocity_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMaxParticleVelocity_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setEmissionRate_void_Real(EarthView_World_Plugin_ParticleFX_CAreaEmitter_setEmissionRate_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setEmissionRate_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getEmissionRate_Real(EarthView_World_Plugin_ParticleFX_CAreaEmitter_getEmissionRate_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getEmissionRate_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setTimeToLive_void_Real(EarthView_World_Plugin_ParticleFX_CAreaEmitter_setTimeToLive_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setTimeToLive_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setTimeToLive_void_Real_Real(EarthView_World_Plugin_ParticleFX_CAreaEmitter_setTimeToLive_void_Real_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setTimeToLive_void_Real_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMinTimeToLive_void_Real(EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMinTimeToLive_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMinTimeToLive_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMaxTimeToLive_void_Real(EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMaxTimeToLive_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMaxTimeToLive_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getTimeToLive_Real(EarthView_World_Plugin_ParticleFX_CAreaEmitter_getTimeToLive_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getTimeToLive_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMinTimeToLive_Real(EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMinTimeToLive_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMinTimeToLive_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMaxTimeToLive_Real(EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMaxTimeToLive_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMaxTimeToLive_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setColour_void_CColourValue(EarthView_World_Plugin_ParticleFX_CAreaEmitter_setColour_void_CColourValue_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setColour_void_CColourValue_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setColour_void_CColourValue_CColourValue(EarthView_World_Plugin_ParticleFX_CAreaEmitter_setColour_void_CColourValue_CColourValue_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setColour_void_CColourValue_CColourValue_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setColourRangeStart_void_CColourValue(EarthView_World_Plugin_ParticleFX_CAreaEmitter_setColourRangeStart_void_CColourValue_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setColourRangeStart_void_CColourValue_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setColourRangeEnd_void_CColourValue(EarthView_World_Plugin_ParticleFX_CAreaEmitter_setColourRangeEnd_void_CColourValue_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setColourRangeEnd_void_CColourValue_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getColour_CColourValue(EarthView_World_Plugin_ParticleFX_CAreaEmitter_getColour_CColourValue_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getColour_CColourValue_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getColourRangeStart_CColourValue(EarthView_World_Plugin_ParticleFX_CAreaEmitter_getColourRangeStart_CColourValue_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getColourRangeStart_CColourValue_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getColourRangeEnd_CColourValue(EarthView_World_Plugin_ParticleFX_CAreaEmitter_getColourRangeEnd_CColourValue_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getColourRangeEnd_CColourValue_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter__getEmissionCount_ev_uint16_Real(EarthView_World_Plugin_ParticleFX_CAreaEmitter__getEmissionCount_ev_uint16_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter__getEmissionCount_ev_uint16_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter__initParticle_void_CParticle(EarthView_World_Plugin_ParticleFX_CAreaEmitter__initParticle_void_CParticle_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter__initParticle_void_CParticle_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setEnabled_void_ev_bool(EarthView_World_Plugin_ParticleFX_CAreaEmitter_setEnabled_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setEnabled_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getEnabled_ev_bool(EarthView_World_Plugin_ParticleFX_CAreaEmitter_getEnabled_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getEnabled_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setStartTime_void_Real(EarthView_World_Plugin_ParticleFX_CAreaEmitter_setStartTime_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setStartTime_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getStartTime_Real(EarthView_World_Plugin_ParticleFX_CAreaEmitter_getStartTime_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getStartTime_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setDuration_void_Real(EarthView_World_Plugin_ParticleFX_CAreaEmitter_setDuration_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setDuration_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getDuration_Real(EarthView_World_Plugin_ParticleFX_CAreaEmitter_getDuration_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getDuration_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setDuration_void_Real_Real(EarthView_World_Plugin_ParticleFX_CAreaEmitter_setDuration_void_Real_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setDuration_void_Real_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMinDuration_void_Real(EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMinDuration_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMinDuration_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMaxDuration_void_Real(EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMaxDuration_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMaxDuration_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMinDuration_Real(EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMinDuration_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMinDuration_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMaxDuration_Real(EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMaxDuration_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMaxDuration_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setRepeatDelay_void_Real(EarthView_World_Plugin_ParticleFX_CAreaEmitter_setRepeatDelay_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setRepeatDelay_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getRepeatDelay_Real(EarthView_World_Plugin_ParticleFX_CAreaEmitter_getRepeatDelay_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getRepeatDelay_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setRepeatDelay_void_Real_Real(EarthView_World_Plugin_ParticleFX_CAreaEmitter_setRepeatDelay_void_Real_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setRepeatDelay_void_Real_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMinRepeatDelay_void_Real(EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMinRepeatDelay_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMinRepeatDelay_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMaxRepeatDelay_void_Real(EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMaxRepeatDelay_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMaxRepeatDelay_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMinRepeatDelay_Real(EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMinRepeatDelay_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMinRepeatDelay_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMaxRepeatDelay_Real(EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMaxRepeatDelay_Real_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMaxRepeatDelay_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setName_void_EVString(EarthView_World_Plugin_ParticleFX_CAreaEmitter_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setEmittedEmitter_void_EVString(EarthView_World_Plugin_ParticleFX_CAreaEmitter_setEmittedEmitter_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setEmittedEmitter_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_isEmitted_ev_bool(EarthView_World_Plugin_ParticleFX_CAreaEmitter_isEmitted_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_isEmitted_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setEmitted_void_ev_bool(EarthView_World_Plugin_ParticleFX_CAreaEmitter_setEmitted_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setEmitted_void_ev_bool_Callback = pCallback;
					}
					virtual ev_uint16 _getEmissionCount(_in Real timeElapsed)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter__getEmissionCount_ev_uint16_Real_Callback != NULL && this->isCustomExtend())
						{
							ev_uint16 returnValue = m_EarthView_World_Plugin_ParticleFX_CAreaEmitter__getEmissionCount_ev_uint16_Real_Callback(timeElapsed);
							return returnValue;
						}
						else
							return this->CAreaEmitter::_getEmissionCount(timeElapsed);
					}
					virtual void setDirection(_in const EarthView::World::Spatial::Math::CVector3& direction)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setDirection_void_CVector3_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setDirection_void_CVector3_Callback(&direction);
						}
						else
							return this->CAreaEmitter::setDirection(direction);
					}
					virtual EarthView::World::Graphic::CParticleEmitter::CParticleEmitterInternalStringInterface* getStringInterfacePtr()
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getStringInterfacePtr_CParticleEmitterInternalStringInterface_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CParticleEmitter::CParticleEmitterInternalStringInterface* returnValue = m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getStringInterfacePtr_CParticleEmitterInternalStringInterface_Callback();
							return returnValue;
						}
						else
							return this->CAreaEmitter::getStringInterfacePtr();
					}
					virtual void genEmissionDirectionNoRandom(_inout EarthView::World::Spatial::Math::CVector3& destVector)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionDirectionNoRandom_void_CVector3_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionDirectionNoRandom_void_CVector3_Callback(&destVector);
						}
						else
							return this->CAreaEmitter::genEmissionDirectionNoRandom(destVector);
					}
					virtual void genEmissionDirection(_inout EarthView::World::Spatial::Math::CVector3& destVector)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionDirection_void_CVector3_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionDirection_void_CVector3_Callback(&destVector);
						}
						else
							return this->CAreaEmitter::genEmissionDirection(destVector);
					}
					virtual void genEmissionVelocity(_inout EarthView::World::Spatial::Math::CVector3& destVector)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionVelocity_void_CVector3_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionVelocity_void_CVector3_Callback(&destVector);
						}
						else
							return this->CAreaEmitter::genEmissionVelocity(destVector);
					}
					virtual Real genEmissionTTL()
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionTTL_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionTTL_Real_Callback();
							return returnValue;
						}
						else
							return this->CAreaEmitter::genEmissionTTL();
					}
					virtual void genEmissionColour(_inout EarthView::World::Graphic::CColourValue& destColour)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionColour_void_CColourValue_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionColour_void_CColourValue_Callback(&destColour);
						}
						else
							return this->CAreaEmitter::genEmissionColour(destColour);
					}
					virtual ev_uint16 genConstantEmissionCount(_in Real timeElapsed)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_genConstantEmissionCount_ev_uint16_Real_Callback != NULL && this->isCustomExtend())
						{
							ev_uint16 returnValue = m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_genConstantEmissionCount_ev_uint16_Real_Callback(timeElapsed);
							return returnValue;
						}
						else
							return this->CAreaEmitter::genConstantEmissionCount(timeElapsed);
					}
					virtual void setPosition(_in const EarthView::World::Spatial::Math::CVector3& pos)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setPosition_void_CVector3_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setPosition_void_CVector3_Callback(&pos);
						}
						else
							return this->CAreaEmitter::setPosition(pos);
					}
					virtual const EarthView::World::Spatial::Math::CVector3& getPosition() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getPosition_CVector3_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Math::CVector3& returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getPosition_CVector3_Callback();
							return returnValue;
						}
						else
							return this->CAreaEmitter::getPosition();
					}
					virtual const EarthView::World::Spatial::Math::CVector3& getDirection() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getDirection_CVector3_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Math::CVector3& returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getDirection_CVector3_Callback();
							return returnValue;
						}
						else
							return this->CAreaEmitter::getDirection();
					}
					virtual void setUp(_in const EarthView::World::Spatial::Math::CVector3& up)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setUp_void_CVector3_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setUp_void_CVector3_Callback(&up);
						}
						else
							return this->CAreaEmitter::setUp(up);
					}
					virtual const EarthView::World::Spatial::Math::CVector3& getUp() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getUp_CVector3_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Math::CVector3& returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getUp_CVector3_Callback();
							return returnValue;
						}
						else
							return this->CAreaEmitter::getUp();
					}
					virtual void setAngle(_in const EarthView::World::Spatial::Math::CRadian& angle)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setAngle_void_CRadian_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setAngle_void_CRadian_Callback(&angle);
						}
						else
							return this->CAreaEmitter::setAngle(angle);
					}
					virtual const EarthView::World::Spatial::Math::CRadian& getAngle() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getAngle_CRadian_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Math::CRadian& returnValue = *(EarthView::World::Spatial::Math::CRadian*)m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getAngle_CRadian_Callback();
							return returnValue;
						}
						else
							return this->CAreaEmitter::getAngle();
					}
					virtual void setParticleVelocity(_in Real speed)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setParticleVelocity_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setParticleVelocity_void_Real_Callback(speed);
						}
						else
							return this->CAreaEmitter::setParticleVelocity(speed);
					}
					virtual void setParticleVelocity(_in Real min, _in Real max)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setParticleVelocity_void_Real_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setParticleVelocity_void_Real_Real_Callback(min, max);
						}
						else
							return this->CAreaEmitter::setParticleVelocity(min, max);
					}
					virtual void setMinParticleVelocity(_in Real min)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMinParticleVelocity_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMinParticleVelocity_void_Real_Callback(min);
						}
						else
							return this->CAreaEmitter::setMinParticleVelocity(min);
					}
					virtual void setMaxParticleVelocity(_in Real max)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMaxParticleVelocity_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMaxParticleVelocity_void_Real_Callback(max);
						}
						else
							return this->CAreaEmitter::setMaxParticleVelocity(max);
					}
					virtual Real getParticleVelocity() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getParticleVelocity_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getParticleVelocity_Real_Callback();
							return returnValue;
						}
						else
							return this->CAreaEmitter::getParticleVelocity();
					}
					virtual Real getMinParticleVelocity() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMinParticleVelocity_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMinParticleVelocity_Real_Callback();
							return returnValue;
						}
						else
							return this->CAreaEmitter::getMinParticleVelocity();
					}
					virtual Real getMaxParticleVelocity() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMaxParticleVelocity_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMaxParticleVelocity_Real_Callback();
							return returnValue;
						}
						else
							return this->CAreaEmitter::getMaxParticleVelocity();
					}
					virtual void setEmissionRate(_in Real particlesPerSecond)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setEmissionRate_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setEmissionRate_void_Real_Callback(particlesPerSecond);
						}
						else
							return this->CAreaEmitter::setEmissionRate(particlesPerSecond);
					}
					virtual Real getEmissionRate() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getEmissionRate_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getEmissionRate_Real_Callback();
							return returnValue;
						}
						else
							return this->CAreaEmitter::getEmissionRate();
					}
					virtual void setTimeToLive(_in Real ttl)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setTimeToLive_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setTimeToLive_void_Real_Callback(ttl);
						}
						else
							return this->CAreaEmitter::setTimeToLive(ttl);
					}
					virtual void setTimeToLive(_in Real minTtl, _in Real maxTtl)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setTimeToLive_void_Real_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setTimeToLive_void_Real_Real_Callback(minTtl, maxTtl);
						}
						else
							return this->CAreaEmitter::setTimeToLive(minTtl, maxTtl);
					}
					virtual void setMinTimeToLive(_in Real min)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMinTimeToLive_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMinTimeToLive_void_Real_Callback(min);
						}
						else
							return this->CAreaEmitter::setMinTimeToLive(min);
					}
					virtual void setMaxTimeToLive(_in Real max)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMaxTimeToLive_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMaxTimeToLive_void_Real_Callback(max);
						}
						else
							return this->CAreaEmitter::setMaxTimeToLive(max);
					}
					virtual Real getTimeToLive() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getTimeToLive_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getTimeToLive_Real_Callback();
							return returnValue;
						}
						else
							return this->CAreaEmitter::getTimeToLive();
					}
					virtual Real getMinTimeToLive() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMinTimeToLive_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMinTimeToLive_Real_Callback();
							return returnValue;
						}
						else
							return this->CAreaEmitter::getMinTimeToLive();
					}
					virtual Real getMaxTimeToLive() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMaxTimeToLive_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMaxTimeToLive_Real_Callback();
							return returnValue;
						}
						else
							return this->CAreaEmitter::getMaxTimeToLive();
					}
					virtual void setColour(_in const EarthView::World::Graphic::CColourValue& colour)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setColour_void_CColourValue_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setColour_void_CColourValue_Callback(&colour);
						}
						else
							return this->CAreaEmitter::setColour(colour);
					}
					virtual void setColour(_in const EarthView::World::Graphic::CColourValue& colourStart, _in const EarthView::World::Graphic::CColourValue& colourEnd)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setColour_void_CColourValue_CColourValue_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setColour_void_CColourValue_CColourValue_Callback(&colourStart, &colourEnd);
						}
						else
							return this->CAreaEmitter::setColour(colourStart, colourEnd);
					}
					virtual void setColourRangeStart(_in const EarthView::World::Graphic::CColourValue& colour)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setColourRangeStart_void_CColourValue_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setColourRangeStart_void_CColourValue_Callback(&colour);
						}
						else
							return this->CAreaEmitter::setColourRangeStart(colour);
					}
					virtual void setColourRangeEnd(_in const EarthView::World::Graphic::CColourValue& colour)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setColourRangeEnd_void_CColourValue_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setColourRangeEnd_void_CColourValue_Callback(&colour);
						}
						else
							return this->CAreaEmitter::setColourRangeEnd(colour);
					}
					virtual const EarthView::World::Graphic::CColourValue& getColour() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getColour_CColourValue_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Graphic::CColourValue& returnValue = *(EarthView::World::Graphic::CColourValue*)m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getColour_CColourValue_Callback();
							return returnValue;
						}
						else
							return this->CAreaEmitter::getColour();
					}
					virtual const EarthView::World::Graphic::CColourValue& getColourRangeStart() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getColourRangeStart_CColourValue_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Graphic::CColourValue& returnValue = *(EarthView::World::Graphic::CColourValue*)m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getColourRangeStart_CColourValue_Callback();
							return returnValue;
						}
						else
							return this->CAreaEmitter::getColourRangeStart();
					}
					virtual const EarthView::World::Graphic::CColourValue& getColourRangeEnd() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getColourRangeEnd_CColourValue_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Graphic::CColourValue& returnValue = *(EarthView::World::Graphic::CColourValue*)m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getColourRangeEnd_CColourValue_Callback();
							return returnValue;
						}
						else
							return this->CAreaEmitter::getColourRangeEnd();
					}
					virtual void _initParticle(_in EarthView::World::Graphic::CParticle* pParticle)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter__initParticle_void_CParticle_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CAreaEmitter__initParticle_void_CParticle_Callback(pParticle);
						}
						else
							return this->CAreaEmitter::_initParticle(pParticle);
					}
					virtual void setEnabled(_in ev_bool enabled)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setEnabled_void_ev_bool_Callback(enabled);
						}
						else
							return this->CAreaEmitter::setEnabled(enabled);
					}
					virtual ev_bool getEnabled() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getEnabled_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CAreaEmitter::getEnabled();
					}
					virtual void setStartTime(_in Real startTime)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setStartTime_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setStartTime_void_Real_Callback(startTime);
						}
						else
							return this->CAreaEmitter::setStartTime(startTime);
					}
					virtual Real getStartTime() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getStartTime_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getStartTime_Real_Callback();
							return returnValue;
						}
						else
							return this->CAreaEmitter::getStartTime();
					}
					virtual void setDuration(_in Real duration)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setDuration_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setDuration_void_Real_Callback(duration);
						}
						else
							return this->CAreaEmitter::setDuration(duration);
					}
					virtual Real getDuration() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getDuration_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getDuration_Real_Callback();
							return returnValue;
						}
						else
							return this->CAreaEmitter::getDuration();
					}
					virtual void setDuration(_in Real min, _in Real max)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setDuration_void_Real_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setDuration_void_Real_Real_Callback(min, max);
						}
						else
							return this->CAreaEmitter::setDuration(min, max);
					}
					virtual void setMinDuration(_in Real min)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMinDuration_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMinDuration_void_Real_Callback(min);
						}
						else
							return this->CAreaEmitter::setMinDuration(min);
					}
					virtual void setMaxDuration(_in Real max)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMaxDuration_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMaxDuration_void_Real_Callback(max);
						}
						else
							return this->CAreaEmitter::setMaxDuration(max);
					}
					virtual Real getMinDuration() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMinDuration_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMinDuration_Real_Callback();
							return returnValue;
						}
						else
							return this->CAreaEmitter::getMinDuration();
					}
					virtual Real getMaxDuration() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMaxDuration_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMaxDuration_Real_Callback();
							return returnValue;
						}
						else
							return this->CAreaEmitter::getMaxDuration();
					}
					virtual void setRepeatDelay(_in Real duration)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setRepeatDelay_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setRepeatDelay_void_Real_Callback(duration);
						}
						else
							return this->CAreaEmitter::setRepeatDelay(duration);
					}
					virtual Real getRepeatDelay() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getRepeatDelay_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getRepeatDelay_Real_Callback();
							return returnValue;
						}
						else
							return this->CAreaEmitter::getRepeatDelay();
					}
					virtual void setRepeatDelay(_in Real min, _in Real max)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setRepeatDelay_void_Real_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setRepeatDelay_void_Real_Real_Callback(min, max);
						}
						else
							return this->CAreaEmitter::setRepeatDelay(min, max);
					}
					virtual void setMinRepeatDelay(_in Real min)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMinRepeatDelay_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMinRepeatDelay_void_Real_Callback(min);
						}
						else
							return this->CAreaEmitter::setMinRepeatDelay(min);
					}
					virtual void setMaxRepeatDelay(_in Real max)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMaxRepeatDelay_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMaxRepeatDelay_void_Real_Callback(max);
						}
						else
							return this->CAreaEmitter::setMaxRepeatDelay(max);
					}
					virtual Real getMinRepeatDelay() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMinRepeatDelay_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMinRepeatDelay_Real_Callback();
							return returnValue;
						}
						else
							return this->CAreaEmitter::getMinRepeatDelay();
					}
					virtual Real getMaxRepeatDelay() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMaxRepeatDelay_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMaxRepeatDelay_Real_Callback();
							return returnValue;
						}
						else
							return this->CAreaEmitter::getMaxRepeatDelay();
					}
					virtual void setName(_in const EVString& newName)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* newName_Char = newName.makeBuffer();
							m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setName_void_EVString_Callback(newName_Char);
						}
						else
							return this->CAreaEmitter::setName(newName);
					}
					virtual void setEmittedEmitter(_in const EVString& emittedEmitter)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setEmittedEmitter_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* emittedEmitter_Char = emittedEmitter.makeBuffer();
							m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setEmittedEmitter_void_EVString_Callback(emittedEmitter_Char);
						}
						else
							return this->CAreaEmitter::setEmittedEmitter(emittedEmitter);
					}
					virtual ev_bool isEmitted() const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_isEmitted_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_isEmitted_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CAreaEmitter::isEmitted();
					}
					virtual void setEmitted(_in ev_bool emitted)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setEmitted_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setEmitted_void_ev_bool_Callback(emitted);
						}
						else
							return this->CAreaEmitter::setEmitted(emitted);
					}
				};
				REGISTER_FACTORY_CLASS(CAreaEmitterProxy);
				typedef char*  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdWidth_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdWidth_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdWidth_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CAreaEmitterCmdWidthProxy : public EarthView::World::Plugin::ParticleFX::CAreaEmitter::CAreaEmitterCmdWidth
				{
				private:
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdWidth_doGet_EVString_void_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdWidth_doGet_EVString_void_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdWidth_doSet_void_void_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdWidth_doSet_void_void_EVString_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdWidth_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdWidth_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CAreaEmitterCmdWidthProxy(EarthView::World::Core::CNameValuePairList *pList) : CAreaEmitterCmdWidth(pList)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdWidth_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdWidth_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdWidth_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdWidth_doGet_EVString_void(EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdWidth_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdWidth_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdWidth_doSet_void_void_EVString(EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdWidth_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdWidth_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdWidth_trySet_ev_bool_void_EVString_EVString(EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdWidth_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdWidth_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdWidth_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdWidth_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CAreaEmitterCmdWidth::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdWidth_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdWidth_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CAreaEmitterCmdWidth::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdWidth_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdWidth_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CAreaEmitterCmdWidth::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CAreaEmitterCmdWidthProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdWidth_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CAreaEmitter::CAreaEmitterCmdWidth* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CAreaEmitter::CAreaEmitterCmdWidth*) pObjectXXXX;
					if (dynamic_cast<CAreaEmitterCmdWidthProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter::CAreaEmitterCmdWidth*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CAreaEmitter::CAreaEmitterCmdWidth::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdWidth_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdWidth_doGet_EVString_void_Callback* pCallback )
				{
					CAreaEmitterCmdWidthProxy* ptr = dynamic_cast<CAreaEmitterCmdWidthProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter::CAreaEmitterCmdWidth*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdWidth_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdWidth_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CAreaEmitter::CAreaEmitterCmdWidth* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CAreaEmitter::CAreaEmitterCmdWidth*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CAreaEmitter::CAreaEmitterCmdWidth::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdWidth_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CAreaEmitter::CAreaEmitterCmdWidth* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CAreaEmitter::CAreaEmitterCmdWidth*) pObjectXXXX;
					if (dynamic_cast<CAreaEmitterCmdWidthProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter::CAreaEmitterCmdWidth*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Plugin::ParticleFX::CAreaEmitter::CAreaEmitterCmdWidth::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdWidth_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdWidth_doSet_void_void_EVString_Callback* pCallback )
				{
					CAreaEmitterCmdWidthProxy* ptr = dynamic_cast<CAreaEmitterCmdWidthProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter::CAreaEmitterCmdWidth*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdWidth_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdWidth_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CAreaEmitter::CAreaEmitterCmdWidth* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CAreaEmitter::CAreaEmitterCmdWidth*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Plugin::ParticleFX::CAreaEmitter::CAreaEmitterCmdWidth::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdWidth_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdWidth_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CAreaEmitterCmdWidthProxy* ptr = dynamic_cast<CAreaEmitterCmdWidthProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter::CAreaEmitterCmdWidth*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdWidth_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				typedef char*  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdHeight_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdHeight_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdHeight_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CAreaEmitterCmdHeightProxy : public EarthView::World::Plugin::ParticleFX::CAreaEmitter::CAreaEmitterCmdHeight
				{
				private:
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdHeight_doGet_EVString_void_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdHeight_doGet_EVString_void_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdHeight_doSet_void_void_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdHeight_doSet_void_void_EVString_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdHeight_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdHeight_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CAreaEmitterCmdHeightProxy(EarthView::World::Core::CNameValuePairList *pList) : CAreaEmitterCmdHeight(pList)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdHeight_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdHeight_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdHeight_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdHeight_doGet_EVString_void(EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdHeight_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdHeight_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdHeight_doSet_void_void_EVString(EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdHeight_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdHeight_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdHeight_trySet_ev_bool_void_EVString_EVString(EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdHeight_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdHeight_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdHeight_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdHeight_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CAreaEmitterCmdHeight::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdHeight_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdHeight_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CAreaEmitterCmdHeight::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdHeight_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdHeight_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CAreaEmitterCmdHeight::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CAreaEmitterCmdHeightProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdHeight_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CAreaEmitter::CAreaEmitterCmdHeight* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CAreaEmitter::CAreaEmitterCmdHeight*) pObjectXXXX;
					if (dynamic_cast<CAreaEmitterCmdHeightProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter::CAreaEmitterCmdHeight*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CAreaEmitter::CAreaEmitterCmdHeight::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdHeight_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdHeight_doGet_EVString_void_Callback* pCallback )
				{
					CAreaEmitterCmdHeightProxy* ptr = dynamic_cast<CAreaEmitterCmdHeightProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter::CAreaEmitterCmdHeight*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdHeight_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdHeight_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CAreaEmitter::CAreaEmitterCmdHeight* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CAreaEmitter::CAreaEmitterCmdHeight*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CAreaEmitter::CAreaEmitterCmdHeight::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdHeight_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CAreaEmitter::CAreaEmitterCmdHeight* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CAreaEmitter::CAreaEmitterCmdHeight*) pObjectXXXX;
					if (dynamic_cast<CAreaEmitterCmdHeightProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter::CAreaEmitterCmdHeight*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Plugin::ParticleFX::CAreaEmitter::CAreaEmitterCmdHeight::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdHeight_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdHeight_doSet_void_void_EVString_Callback* pCallback )
				{
					CAreaEmitterCmdHeightProxy* ptr = dynamic_cast<CAreaEmitterCmdHeightProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter::CAreaEmitterCmdHeight*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdHeight_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdHeight_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CAreaEmitter::CAreaEmitterCmdHeight* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CAreaEmitter::CAreaEmitterCmdHeight*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Plugin::ParticleFX::CAreaEmitter::CAreaEmitterCmdHeight::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdHeight_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdHeight_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CAreaEmitterCmdHeightProxy* ptr = dynamic_cast<CAreaEmitterCmdHeightProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter::CAreaEmitterCmdHeight*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CAreaEmitterCmdHeight_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				typedef char*  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_CCmdDepth_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_CCmdDepth_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_CCmdDepth_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdDepthProxy : public EarthView::World::Plugin::ParticleFX::CAreaEmitter::CCmdDepth
				{
				private:
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_CCmdDepth_doGet_EVString_void_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CCmdDepth_doGet_EVString_void_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_CCmdDepth_doSet_void_void_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CCmdDepth_doSet_void_void_EVString_Callback;
					EarthView_World_Plugin_ParticleFX_CAreaEmitter_CCmdDepth_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CCmdDepth_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdDepthProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdDepth(pList)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CCmdDepth_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CCmdDepth_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CCmdDepth_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CCmdDepth_doGet_EVString_void(EarthView_World_Plugin_ParticleFX_CAreaEmitter_CCmdDepth_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CCmdDepth_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CCmdDepth_doSet_void_void_EVString(EarthView_World_Plugin_ParticleFX_CAreaEmitter_CCmdDepth_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CCmdDepth_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CCmdDepth_trySet_ev_bool_void_EVString_EVString(EarthView_World_Plugin_ParticleFX_CAreaEmitter_CCmdDepth_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CCmdDepth_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CCmdDepth_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CCmdDepth_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdDepth::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CCmdDepth_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CCmdDepth_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdDepth::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CCmdDepth_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CCmdDepth_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdDepth::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdDepthProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_CCmdDepth_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CAreaEmitter::CCmdDepth* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CAreaEmitter::CCmdDepth*) pObjectXXXX;
					if (dynamic_cast<CCmdDepthProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter::CCmdDepth*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CAreaEmitter::CCmdDepth::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CCmdDepth_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_CCmdDepth_doGet_EVString_void_Callback* pCallback )
				{
					CCmdDepthProxy* ptr = dynamic_cast<CCmdDepthProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter::CCmdDepth*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CCmdDepth_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_CCmdDepth_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Plugin::ParticleFX::CAreaEmitter::CCmdDepth* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CAreaEmitter::CCmdDepth*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CAreaEmitter::CCmdDepth::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_CCmdDepth_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CAreaEmitter::CCmdDepth* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CAreaEmitter::CCmdDepth*) pObjectXXXX;
					if (dynamic_cast<CCmdDepthProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter::CCmdDepth*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Plugin::ParticleFX::CAreaEmitter::CCmdDepth::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CCmdDepth_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_CCmdDepth_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdDepthProxy* ptr = dynamic_cast<CCmdDepthProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter::CCmdDepth*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CCmdDepth_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_CCmdDepth_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Plugin::ParticleFX::CAreaEmitter::CCmdDepth* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CAreaEmitter::CCmdDepth*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Plugin::ParticleFX::CAreaEmitter::CCmdDepth::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CCmdDepth_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_CCmdDepth_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdDepthProxy* ptr = dynamic_cast<CCmdDepthProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter::CCmdDepth*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_CCmdDepth_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter__getEmissionCount_ev_uint16_Real(void *pObjectXXXX, _in Real timeElapsed )
				{
					EarthView::World::Plugin::ParticleFX::CAreaEmitter* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX;
					if (dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*)ptrNativeObject) != NULL)
					{
						ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CAreaEmitter::_getEmissionCount(timeElapsed);
						return objXXXX;
					}
					else
					{
						ev_uint16 objXXXX = ptrNativeObject->_getEmissionCount(timeElapsed);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter__getEmissionCount_ev_uint16_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter__getEmissionCount_ev_uint16_Real_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter__getEmissionCount_ev_uint16_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter__getEmissionCount_ev_uint16_Real_NoVirtual(void *pObjectXXXX, _in Real timeElapsed )
				{
					EarthView::World::Plugin::ParticleFX::CAreaEmitter* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX;
					ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Plugin::ParticleFX::CAreaEmitter::_getEmissionCount(timeElapsed);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_setDirection_void_CVector3(void *pObjectXXXX, _in const void* direction )
				{
					EarthView::World::Plugin::ParticleFX::CAreaEmitter* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX;
					if (dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Plugin::ParticleFX::CAreaEmitter::setDirection(*(EarthView::World::Spatial::Math::CVector3*)direction);
					else
						ptrNativeObject->setDirection(*(EarthView::World::Spatial::Math::CVector3*)direction);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setDirection_void_CVector3( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_setDirection_void_CVector3_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setDirection_void_CVector3(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_setDirection_void_CVector3_NoVirtual(void *pObjectXXXX, _in const void* direction )
				{
					EarthView::World::Plugin::ParticleFX::CAreaEmitter* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Plugin::ParticleFX::CAreaEmitter::setDirection(*(EarthView::World::Spatial::Math::CVector3*)direction);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_setSize_void_CVector3(void *pObjectXXXX, _in const void* size )
				{
					EarthView::World::Plugin::ParticleFX::CAreaEmitter* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX;
					ptrNativeObject->setSize(*(EarthView::World::Spatial::Math::CVector3*)size);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_setSize_void_Real_Real_Real(void *pObjectXXXX, _in Real x, _in Real y, _in Real z )
				{
					EarthView::World::Plugin::ParticleFX::CAreaEmitter* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX;
					ptrNativeObject->setSize(x, y, z);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_setWidth_void_Real(void *pObjectXXXX, _in Real width )
				{
					EarthView::World::Plugin::ParticleFX::CAreaEmitter* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX;
					ptrNativeObject->setWidth(width);
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_getWidth_Real(void *pObjectXXXX )
				{
					const EarthView::World::Plugin::ParticleFX::CAreaEmitter* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->getWidth();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_setHeight_void_Real(void *pObjectXXXX, _in Real Height )
				{
					EarthView::World::Plugin::ParticleFX::CAreaEmitter* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX;
					ptrNativeObject->setHeight(Height);
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_getHeight_Real(void *pObjectXXXX )
				{
					const EarthView::World::Plugin::ParticleFX::CAreaEmitter* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->getHeight();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_setDepth_void_Real(void *pObjectXXXX, _in Real Depth )
				{
					EarthView::World::Plugin::ParticleFX::CAreaEmitter* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX;
					ptrNativeObject->setDepth(Depth);
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Plugin_ParticleFX_CAreaEmitter_getDepth_Real(void *pObjectXXXX )
				{
					const EarthView::World::Plugin::ParticleFX::CAreaEmitter* ptrNativeObject = (EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->getDepth();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getStringInterfacePtr_CParticleEmitterInternalStringInterface( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_getStringInterfacePtr_CParticleEmitterInternalStringInterface_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getStringInterfacePtr_CParticleEmitterInternalStringInterface(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionDirectionNoRandom_void_CVector3( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionDirectionNoRandom_void_CVector3_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionDirectionNoRandom_void_CVector3(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionDirection_void_CVector3( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionDirection_void_CVector3_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionDirection_void_CVector3(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionVelocity_void_CVector3( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionVelocity_void_CVector3_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionVelocity_void_CVector3(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionTTL_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionTTL_Real_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionTTL_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionColour_void_CColourValue( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionColour_void_CColourValue_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_genEmissionColour_void_CColourValue(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_genConstantEmissionCount_ev_uint16_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_genConstantEmissionCount_ev_uint16_Real_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_genConstantEmissionCount_ev_uint16_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setPosition_void_CVector3( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_setPosition_void_CVector3_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setPosition_void_CVector3(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getPosition_CVector3( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_getPosition_CVector3_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getPosition_CVector3(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getDirection_CVector3( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_getDirection_CVector3_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getDirection_CVector3(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setUp_void_CVector3( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_setUp_void_CVector3_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setUp_void_CVector3(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getUp_CVector3( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_getUp_CVector3_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getUp_CVector3(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setAngle_void_CRadian( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_setAngle_void_CRadian_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setAngle_void_CRadian(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getAngle_CRadian( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_getAngle_CRadian_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getAngle_CRadian(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setParticleVelocity_void_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_setParticleVelocity_void_Real_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setParticleVelocity_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setParticleVelocity_void_Real_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_setParticleVelocity_void_Real_Real_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setParticleVelocity_void_Real_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMinParticleVelocity_void_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMinParticleVelocity_void_Real_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMinParticleVelocity_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMaxParticleVelocity_void_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMaxParticleVelocity_void_Real_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMaxParticleVelocity_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getParticleVelocity_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_getParticleVelocity_Real_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getParticleVelocity_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMinParticleVelocity_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMinParticleVelocity_Real_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMinParticleVelocity_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMaxParticleVelocity_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMaxParticleVelocity_Real_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMaxParticleVelocity_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setEmissionRate_void_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_setEmissionRate_void_Real_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setEmissionRate_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getEmissionRate_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_getEmissionRate_Real_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getEmissionRate_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setTimeToLive_void_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_setTimeToLive_void_Real_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setTimeToLive_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setTimeToLive_void_Real_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_setTimeToLive_void_Real_Real_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setTimeToLive_void_Real_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMinTimeToLive_void_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMinTimeToLive_void_Real_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMinTimeToLive_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMaxTimeToLive_void_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMaxTimeToLive_void_Real_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMaxTimeToLive_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getTimeToLive_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_getTimeToLive_Real_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getTimeToLive_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMinTimeToLive_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMinTimeToLive_Real_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMinTimeToLive_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMaxTimeToLive_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMaxTimeToLive_Real_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMaxTimeToLive_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setColour_void_CColourValue( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_setColour_void_CColourValue_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setColour_void_CColourValue(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setColour_void_CColourValue_CColourValue( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_setColour_void_CColourValue_CColourValue_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setColour_void_CColourValue_CColourValue(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setColourRangeStart_void_CColourValue( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_setColourRangeStart_void_CColourValue_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setColourRangeStart_void_CColourValue(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setColourRangeEnd_void_CColourValue( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_setColourRangeEnd_void_CColourValue_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setColourRangeEnd_void_CColourValue(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getColour_CColourValue( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_getColour_CColourValue_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getColour_CColourValue(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getColourRangeStart_CColourValue( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_getColourRangeStart_CColourValue_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getColourRangeStart_CColourValue(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getColourRangeEnd_CColourValue( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_getColourRangeEnd_CColourValue_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getColourRangeEnd_CColourValue(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter__initParticle_void_CParticle( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter__initParticle_void_CParticle_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter__initParticle_void_CParticle(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_setEnabled_void_ev_bool_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setEnabled_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_getEnabled_ev_bool_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getEnabled_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setStartTime_void_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_setStartTime_void_Real_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setStartTime_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getStartTime_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_getStartTime_Real_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getStartTime_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setDuration_void_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_setDuration_void_Real_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setDuration_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getDuration_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_getDuration_Real_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getDuration_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setDuration_void_Real_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_setDuration_void_Real_Real_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setDuration_void_Real_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMinDuration_void_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMinDuration_void_Real_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMinDuration_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMaxDuration_void_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMaxDuration_void_Real_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMaxDuration_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMinDuration_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMinDuration_Real_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMinDuration_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMaxDuration_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMaxDuration_Real_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMaxDuration_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setRepeatDelay_void_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_setRepeatDelay_void_Real_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setRepeatDelay_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getRepeatDelay_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_getRepeatDelay_Real_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getRepeatDelay_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setRepeatDelay_void_Real_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_setRepeatDelay_void_Real_Real_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setRepeatDelay_void_Real_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMinRepeatDelay_void_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMinRepeatDelay_void_Real_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMinRepeatDelay_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMaxRepeatDelay_void_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMaxRepeatDelay_void_Real_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setMaxRepeatDelay_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMinRepeatDelay_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMinRepeatDelay_Real_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMinRepeatDelay_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMaxRepeatDelay_Real( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMaxRepeatDelay_Real_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_getMaxRepeatDelay_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setName_void_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_setName_void_EVString_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setEmittedEmitter_void_EVString( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_setEmittedEmitter_void_EVString_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setEmittedEmitter_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_isEmitted_ev_bool( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_isEmitted_ev_bool_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_isEmitted_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setEmitted_void_ev_bool( void *pObjectXXXX, EarthView_World_Plugin_ParticleFX_CAreaEmitter_setEmitted_void_ev_bool_Callback* pCallback )
				{
					CAreaEmitterProxy* ptr = dynamic_cast<CAreaEmitterProxy*>((EarthView::World::Plugin::ParticleFX::CAreaEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Plugin_ParticleFX_CAreaEmitter_setEmitted_void_ev_bool(pCallback);
					}
				}
			}
		}
	}
}
