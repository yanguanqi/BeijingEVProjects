#ifndef WAKEGENERATOR_H
#define WAKEGENERATOR_H

#include "spatial3dengine/spatial3dengineconfig.h"

#ifdef USE_FFT_OCEAN
#include "mathengine/vector3.h"
#include "graphic/scenemanager.h"
#include "core/memoryallocatedobject.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			class COceanSurface;
			class WakeGeneratorParameters;

			class EV_Spatial3DEngine_DLL WakeGeneratorParameters :public EarthView::World::Core::CBaseObject 
			{
ev_private:
				WakeGeneratorParameters(_in EarthView::World::Core::CNameValuePairList* pList);

			public:

				WakeGeneratorParameters();

				bool   sprayEffects;           

				double bowSprayOffset;         

				double sprayVelocityScale;      

				double spraySizeScale;         

				double bowWaveOffset;          

				double bowWaveScale;            

				double bowWaveMax;              

				double bowSize;                 

				double sternWaveOffset;        

				double length;                  

				double beamWidth;               

				double draft;                  

				bool   propWash;               

				double propWashOffset;          

				double propWashWidthMultiplier; 

				int    numHullSprays;           

				double hullSprayStartOffset;    

				double hullSprayEndOffset;      

				double hullSprayScale;          

				double hullSpraySizeScale;      

				double hullSprayVerticalOffset;
			};
			class EV_Spatial3DEngine_DLL WakeGenerator: public EarthView::World::Core::CAllocatedObject
			{
ev_private:
				WakeGenerator(_in EarthView::World::Core::CNameValuePairList* pList);

			public:

				WakeGenerator(EarthView::World::Graphic::CSceneManager *sceneManager, const WakeGeneratorParameters& parameters);

				virtual ~WakeGenerator();

				void Update(const EarthView::World::Spatial::Math::CVector3& pPosition,const EarthView::World::Spatial::Math::CVector3& pDir,
					double pVelocity);

				void ClearWakes();

				EarthView::World::Spatial::Math::CVector3 GetPosition() const 
				{
					return position;
				}

				EarthView::World::Spatial::Math::CVector3 GetSternPosition() const
				{
					return sternPosition;
				}

				double GetVelocity() const 
				{
					return velocity;
				}

				bool HasPropWash() const 
				{
					return params.propWash;
				}

				void SetLODDistance(double distance)
				{
					lodDistance = distance;
				}

				double GetLODDistance() const 
				{
					return lodDistance;
				}

				const WakeGeneratorParameters& GetParameters() const;

				void SetParameters(const WakeGeneratorParameters& parameters);

				void OceanDestroyed() 
				{
					ocean = 0;
					registered = false;
				}

				void WakeManagerDestroyed() 
				{
					registeredWakeManager = false;
				}

				int GetMaxWakeNumber() const
				{
					return wakeNumber - 1;
				}

				double GetDistanceTravelled() const 
				{
					return distanceTravelled;
				}

			protected:
				EarthView::World::Spatial::Math::CVector3 position, sternPosition, lastPosition, washPosition, lastEmitPosition, lastLastEmitPosition;
				EarthView::World::Spatial::Math::CVector3 lastEmitSourcePosition, lastWakePosition;
				double velocity;
				double distanceTravelled;
				COceanSurface *ocean;
				double lastSprayEmitTime;
				double lodDistance, hullSpeed;
				double sprayCullDist;
				bool firstEmit, registered, registeredWakeManager;
				int wakeNumber, lastWakeNumber;
				double minPropSegmentLength, decayRate;
				double sprayPositionVariation, curveGenerationFactor;
				double gravity;
				EarthView::World::Spatial::Math::CVector3 lastDir;

				WakeGeneratorParameters params;
			};
		}
	}
}
#endif


#endif