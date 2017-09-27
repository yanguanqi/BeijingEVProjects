/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/particleanalyse.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace EffectManager
			{
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_EffectManager_CParticleAnalyse_findParticles_void_EVString_CStringArray_CStringArray(void *pObjectXXXX, _in char* folder, _out void* partilceFileNames, _out void* particleNames )
				{
					EarthView::World::Core::ev_string folder1 = folder;
					EarthView::World::Spatial3D::EffectManager::CParticleAnalyse* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CParticleAnalyse*) pObjectXXXX;
					ptrNativeObject->findParticles(folder1, *(EarthView::World::Core::CStringArray*)partilceFileNames, *(EarthView::World::Core::CStringArray*)particleNames);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_EffectManager_CParticleAnalyse_analyseParticle_void_EVString_EVString_EVString_EVString_CStringArray_CStringArray_CStringArray_CStringArray(void *pObjectXXXX, _in char* folder, _in char* particleFileName, _in char* particleName, _out char*& materilname, _out void* textures, _out void* gpus, _out void* progs, _out void* errors )
				{
					EarthView::World::Core::ev_string folder1 = folder;
					EarthView::World::Core::ev_string particleFileName1 = particleFileName;
					EarthView::World::Core::ev_string particleName1 = particleName;
					EarthView::World::Core::ev_string materilname1 = materilname;
					EarthView::World::Spatial3D::EffectManager::CParticleAnalyse* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CParticleAnalyse*) pObjectXXXX;
					ptrNativeObject->analyseParticle(folder1, particleFileName1, particleName1, materilname1, *(EarthView::World::Core::CStringArray*)textures, *(EarthView::World::Core::CStringArray*)gpus, *(EarthView::World::Core::CStringArray*)progs, *(EarthView::World::Core::CStringArray*)errors);
					materilname=materilname1.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_EffectManager_CParticleAnalyse_getFilename_EVString_EVString(void *pObjectXXXX, _in const char* file )
				{
					EarthView::World::Core::ev_string file1 = file;
					EarthView::World::Spatial3D::EffectManager::CParticleAnalyse* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CParticleAnalyse*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getFilename(file1);
					return objXXXX.makeBuffer();
				}
			}
		}
	}
}
