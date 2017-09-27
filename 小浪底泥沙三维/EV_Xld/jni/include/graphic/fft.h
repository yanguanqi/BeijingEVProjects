#ifndef __FFT_H__
#define __FFT_H__
#pragma once
#include "graphic/graphic_config.h"
#include <core/sharedptr.h>
#include <core/stringdefines.h>
#include "stringconverter.h"
#include "graphic/texture.h"


namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {         
			#define TRITON_MTD_DLL
			#define USE_SHARED_MEM
			#define TESSENDORF_FFT
			#define USE_PBO

			#if defined(EV_OS_WIN32) || defined(EV_OS_WIN64)
			#if !defined(DIRECTX9_FOUND)
			#define DIRECTX9_FOUND 1
			#endif
			#else
			#define DIRECTX9_FOUND 0
			#endif

			#define MaxVisibleDistance 60000
			#define MinValidTileNum    5
			#define MIN_DEPTH 1.0f
			#define TRITON_SQRT2 1.414213562373095


			class EV_GRAPHIC_DLL FFTSettings  
			{
			public:
				FFTSettings(){}

				virtual ~FFTSettings(){}

				float fftGridSizeX, fftGridSizeY;
				float worldUnits;
				bool enableHeightTests;
				bool enableSpray;
				bool enableMultiGPU;
				float sprayThreshold;
				float gravity;
			};

			class EV_GRAPHIC_DLL ComplexNumber 
			{
			public:

				ComplexNumber() : real(0), img(0) {}

				ComplexNumber(float r, float i) : real(r), img(i) {}

				ComplexNumber operator + (const ComplexNumber& c) const
				{
					ComplexNumber tmp;
					tmp.real = real + c.real;
					tmp.img = img + c.img;
					return tmp;
				}

				ComplexNumber operator - (const ComplexNumber& c) const
				{
					ComplexNumber tmp;
					tmp.real = real - c.real;
					tmp.img = img - c.img;
					return tmp;
				}

				ComplexNumber operator * (const ComplexNumber& c) const 
				{
					ComplexNumber tmp;
					tmp.real = (real * c.real) - (img * c.img);
					tmp.img = (real * c.img) + (img * c.real);
					return tmp;
				}

				ComplexNumber operator / (const ComplexNumber& c) const 
				{
					float div = (c.real * c.real) + (c.img * c.img);
					ComplexNumber tmp;
					tmp.real = (real * c.real) + (img * c.img);
					tmp.real /= div;
					tmp.img = (img * c.real) - (real * c.img);
					tmp.img /= div;
					return tmp;
				}

				ComplexNumber getConjugate() const 
				{
					ComplexNumber tmp;
					tmp.real = real;
					tmp.img = -img;
					return tmp;
				}

				float real, img;
			};	

            class EV_GRAPHIC_DLL FFT 
			{
			public:

				FFT() : dimX(0), dimY(0), batchSize(0), computedSlopeSteps(false),
					sInc(0), tInc(0), gridSizeX2(0), gridSizeY2(0) 
				{
			
				}

				virtual ~FFT() 
				{

				}

				virtual bool Setup(ev_uint32 Nx, ev_uint32 Ny, ev_uint32 batchSize, ev_real32 worldUnits, bool enableHeightReads)
				{
					return false;
				}

				virtual bool InverseTransform2D(ComplexNumber **inputArray, float ** outputArray, unsigned int batchSize) 
				{
					return false;
				}

				virtual bool ExploitsConjugate() const
				{
					return false;
				}

				virtual const char *GetName() const
				{
					return "";
				}

				virtual bool TransformEndToEnd(ComplexNumber *H0, float t, float dt, float choppiness, float depth, float loopingPeriod, bool H0changed) 
				{
					return false;
				}

				virtual bool UploadTextures() 
				{
					return true;
				}

				virtual bool TransformsEndToEnd() const
				{
					return false;
				}

				virtual float GetHeight(float s, float t, bool highResolution) 
				{
					return 0.0f;
				}

				virtual float GetSpray(float s, float t, bool highResolution) 
				{
					return 0.0f;
				}

				virtual void GetChoppinessDisplacement(float s, float t, float& chopX, float& chopZ, bool hiRes)
				{
					chopX = chopZ = 0.0f;
				}

				virtual const vector<EarthView::World::Spatial::Math::CVector3>& GetSprays() const
				{
					static vector<EarthView::World::Spatial::Math::CVector3> empty;
					return empty;
				}

				virtual void EnableSpray(bool enabled) 
				{

				}

				virtual void GetSlope(float s, float t, float& sx, float &sy, ev_real32 worldUnits, bool hiRes);

				virtual bool SetOutputTextures(ev_uint32 displacement, ev_uint32 slopeFoam)
				{
					return true;
				}

				virtual bool SetOutputTextures(CTexturePtr displacement, CTexturePtr slopeFoam,int n,int m)
				{
					return true;
				}

				virtual bool D3D9DeviceLost()
				{
					return true;
				}

				virtual bool D3D9DeviceReset() 
				{
					return true;
				}

				virtual void UpdateGridValues(ev_real32 worldUnits) 
				{

				}

				void GetGridDimensions(ev_uint32& xDim, ev_uint32& yDim)
				{
					xDim = dimX;
					yDim = dimY;
				}

			protected:
				ev_uint32 dimX, dimY, batchSize;

				bool computedSlopeSteps;

				float sInc, tInc, gridSizeX2, gridSizeY2;
			};

			class EV_GRAPHIC_DLL FFTPluginManager 
			{
			private:
				static EarthView::World::Graphic::FFTPluginManager* mpSingletonPtr;
				protected:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>

					FFTPluginManager();
				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>

					virtual ~FFTPluginManager();

					/// <summary>
					/// 返回单例的数据源工厂句柄
					/// </summary>
					/// <returns>失败则返回NULL</returns>
					static EarthView::World::Graphic::FFTPluginManager* getSingletonPtr();

					/// <summary>
					/// 释放单例的数据源工厂句柄
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					static void releaseSingleton();

					/// <summary>
					/// 加载可用的插件
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool loadPlugin();
					ev_bool isLoadPluginSuc(){return mbLoadSuc;}

					/// <summary>
					/// 加载dll
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool loadOpenclDLL(EVString& currentDir);
					ev_bool loadCudaDLL(EVString& currentDir);
					ev_bool loadIppDLL(EVString& currentDir);

					/// <summary>
					/// 卸载可用的插件
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void unloadPlugin();
					
					/// <summary>
					/// 创建最合适的技术，如果返回NULL，则没有合适的
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					FFT* createFFT();

			protected:
				vector<FFT*> mFFTVec;
				ev_bool mbLoadSuc;
			};
			
        }
    }
}

#endif

