#ifndef ROTORWASH_H
#define ROTORWASH_H

#include "spatial3dengine/spatial3dengineconfig.h"

#ifdef USE_FFT_OCEAN

#include "mathengine/vector3.h"
#include "graphic/scenemanager.h"
#include "core/memoryallocatedobject.h"

#define NUM_DECALS 3

namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			class COceanSurface;
			class Decal;

			class EV_Spatial3DEngine_DLL RotorWash:public EarthView::World::Core::CBaseObject
			{
ev_private:
				RotorWash(_in EarthView::World::Core::CNameValuePairList* pList);

			public:

				RotorWash(EarthView::World::Graphic::CSceneManager *sceneManager, double pRotorDiameter, bool pUseDecals);

				virtual ~RotorWash();

				void Update(const EarthView::World::Spatial::Math::CVector3& pPosition, 
					double pVelocity);

				EarthView::World::Spatial::Math::CVector3 GetPosition() const 
				{
					return position;
				}				
				double GetVelocity() const
				{
					return velocity;
				}
				void OceanDestroyed() 
				{
					ocean = 0;
				}

			protected:
				void UpdateDecals(double time, const EarthView::World::Spatial::Math::CVector3& position, double distanceDampening);

				EarthView::World::Spatial::Math::CVector3 position, lastEmitPosition, lastLastEmitPosition, lastEmitSourcePosition;
				double velocity, rotorDiameter;
				COceanSurface *ocean;
				double lastWaveEmitTime, lastSprayEmitTime;
				double waveGenerationPeriod, sprayGenerationPeriod;
				double washDiameter;
				double windScale;
				double maxVelocity;
				double particleSize;
				double decayRate;
				double decalIntensity;
				float transparency;
				bool sprayEffects, firstEmit;
				int wakeNumber, lastWakeNumber;
				Decal *decals[NUM_DECALS];
				float decalPeriod;
				double decalStartTimes[NUM_DECALS];
				int currentDecal;
				float decalMinScale, decalMaxScale;
				double phaseOffset, phaseRandomness;
				bool useDecal;
				bool registered;
				EarthView::World::Spatial::Math::CVector3 lastPosition;
				double lastTime, rotorDecalSpeedLimit;
			};
		}
	}
}
#endif

#endif