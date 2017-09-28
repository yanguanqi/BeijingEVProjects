#ifndef __FFT_CUDA_H__
#define __FFT_CUDA_H__

#include "fftcuda/fftcudaconfig.h"
#include "GL/glew.h"
#include "graphic/fft.h"
#include "graphic/texture.h"
#include "cuda/cuda_gl_interop.h"
#include "cuda/cuda_d3d9_interop.h"
#include "cuda/CL/cl_gl.h"
#include "cuda/CL/cl_dx9_media_sharing.h"
#include "cuda_api.h"
#include "cuda/cuda.h"
#include "cuda/cuda_runtime.h"
#include "cuda/cufft.h"
#include "cuda/CL/cl.h"
#include "cuda/CL/clAmdFft.h"

namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {          
			class Allocator;
			class EV_FFTCUDA_DLL IFFTCUDA
			{
			public:
				IFFTCUDA(){}
				virtual ~IFFTCUDA() {}

				virtual void Release() {};

				virtual bool Setup(unsigned int Nx, unsigned int Ny, unsigned int batchSize, const EarthView::World::Graphic::FFTSettings& settings) 
				{
					return false;
				};

				virtual bool SetOutputTextures(EarthView::World::Graphic::CTexturePtr displacement, EarthView::World::Graphic::CTexturePtr slopeFoam,int n,int m)
				{
					return false;
				}

				virtual bool UploadTextures()
				{
					return false;
				}

				virtual void UpdateGridValues(EarthView::World::Graphic::FFTSettings& settings){}

				virtual float GetHeight(float s, float t, bool hiRes)
				{
					return 0.0;
				}

				virtual float GetSpray(float s, float t, bool hiRes)
				{
					return 0.0;
				}

				virtual void GetChoppinessDisplacement(float s, float t, float& chopX, float& chopZ, bool hiRes){}

				virtual const vector<EarthView::World::Spatial::Math::CVector3>& GetSprays(bool enableOpenMP)
				{
					vector<EarthView::World::Spatial::Math::CVector3> ss;
					return ss;
				}

				virtual void EnableSpray(bool enabled){}

				virtual bool D3D9DeviceLost(){return false;}

				virtual bool D3D9DeviceReset(){return false;}

ev_private:

				virtual bool TransformEndToEnd(EarthView::World::Graphic::ComplexNumber *H0, float t, float dt, float choppiness, float depth, float loopingPeriod, bool H0changed)
				{
					return false;
				}
			};

			class EV_FFTCUDA_DLL FFTCUDA : public EarthView::World::Graphic::FFT
			{
			public:
				FFTCUDA() : FFT(), iFFTCUDA(0) {}

				virtual ~FFTCUDA();

				static bool IsCompatible();

				static bool LoadDLL();

				static void UnLoadDll();

				virtual bool Setup(unsigned int Nx, unsigned int Ny, unsigned int batchSize, ev_real32 worldUnits, bool enableHeightReads);

				virtual bool ExploitsConjugate() const 
				{
					return true;
				}

				virtual const char *GetName() const 
				{
					return "CUDA CUFFT";
				}

				virtual bool TransformsEndToEnd() const 
				{
					return true;
				}



				virtual bool SetOutputTextures(EarthView::World::Graphic::CTexturePtr displacement, EarthView::World::Graphic::CTexturePtr slopeFoam,int n,int m);

				virtual bool UploadTextures();

				void UpdateGridValues(ev_real32 worldUnits);

				virtual float GetHeight(float s, float t, bool hiRes);
				virtual float GetSpray(float s, float t, bool hiRes);

				virtual void GetChoppinessDisplacement(float s, float t, float& chopX, float& chopZ, bool hiRes);

				virtual const vector<EarthView::World::Spatial::Math::CVector3>& GetSprays(bool enableOpenMP) const;

				virtual void EnableSpray(bool enabled);		

				virtual bool D3D9DeviceLost();

				virtual bool D3D9DeviceReset();

ev_private:
				virtual bool TransformEndToEnd(EarthView::World::Graphic::ComplexNumber *H0, float t, float dt, float choppiness, float depth, float loopingPeriod, bool H0changed);

				virtual bool InverseTransform2D(EarthView::World::Graphic::ComplexNumber **inputArray, float **outputArray, unsigned int batchSize)
				{
					return false;
				}
			private:

				IFFTCUDA* GetIFFTCUDA(Allocator *a);
				static bool IsCompatibleProc();

				IFFTCUDA * iFFTCUDA;
				EarthView::World::Graphic::FFTSettings settings;
			};

			class EV_FFTCUDA_DLL FFTCUDAImpl : public IFFTCUDA
			{
			public:
				FFTCUDAImpl() : planH(0), HdataIn(0), chopXDataIn(0), H0(0), Hdata(0), chopXData(0),
					chopZData(0), displacementData(0), slopeFoamData(0), displacementResource(0),
					slopeFoamResource(0), displacementGLTexID(0), slopeFoamGLTexID(0),
					displacementPBO(0), slopeFoamPBO(0), omega(0), omegaCPU(0), lastDepth(-1),
					heightTest(false), readFoam(false), heightHost(0), foamHost(0), chopXHost(0),
					chopZHost(0), foam(0), planX(0), planZ(0), chopZDataIn(0), xDeviceComplexBuffer(0),
					zDeviceComplexBuffer(0), multiGPU(false), lastLoopingPeriod(-1), heightCopied(false),
					heightComputed(false), sprayEnabled(true), nextAvailableDevice(0) {
						g_referenceNum++;
				}

				virtual void Release();

				virtual bool Setup(unsigned int Nx, unsigned int Ny, unsigned int batchSize, const EarthView::World::Graphic::FFTSettings& settings);

				virtual bool SetOutputTextures(unsigned int displacement, unsigned int slopeFoam);

				virtual bool SetOutputTextures(EarthView::World::Graphic::CTexturePtr displacement, EarthView::World::Graphic::CTexturePtr slopeFoam,int n,int m);

				virtual bool UploadTextures();

				void UpdateGridValues(EarthView::World::Graphic::FFTSettings& settings);

				virtual float GetHeight(float s, float t, bool hiRes);
				virtual float GetSpray(float s, float t, bool hiRes);

				virtual void GetChoppinessDisplacement(float s, float t, float& chopX, float& chopZ, bool hiRes);

				virtual const vector<EarthView::World::Spatial::Math::CVector3>& GetSprays(bool enableOpenMP);

				virtual void EnableSpray(bool enabled)
				{
					sprayEnabled = enabled;
				}

				virtual bool D3D9DeviceLost();
				virtual bool D3D9DeviceReset();

ev_private:
				virtual bool TransformEndToEnd(EarthView::World::Graphic::ComplexNumber *H0, float t, float dt, float choppiness, float depth, float loopingPeriod, bool H0changed);

			private:
				bool CreateOpenGLTextures();
				bool CreateDirectXTextures();
				void ComputeOmega(float depth,float loopingPeriod);
				bool CreateCUDAResources();
				bool ReleaseCUDAResources();

				unsigned int dimX, dimY;

				int planH, planX, planZ;
				float2 *HdataIn, *chopXDataIn, *chopZDataIn, *H0, *xDeviceComplexBuffer, *zDeviceComplexBuffer;
				float *Hdata, *chopXData, *chopZData, *omega, *foam;
				float *displacementData, *slopeFoamData, *omegaCPU;
				float *heightHost, *chopXHost, *chopZHost, *foamHost;
				cudaGraphicsResource *displacementResource, *slopeFoamResource;
				uint2 *dim;
				float2 *twoCellsSize, *gridSize;
				float chopScale;
				float2 *windDir;
				float dt, breakingSlope, foamFade, foamBlend, foamDecay;
				unsigned int displacementGLTexID, slopeFoamGLTexID, displacementPBO, slopeFoamPBO;
				//Renderers renderer;
				float lastDepth, sizeX, sizeY, g, sprayThreshold, lastLoopingPeriod;
				bool heightTest, readFoam, multiGPU, heightCopied, heightComputed;
				vector<EarthView::World::Spatial::Math::CVector3> sprays;
				bool sprayEnabled;
				size_t num_bytes;
				float *dispOut, *sfOut;

				int hDevice, xDevice, zDevice;
				int N,M;

				int nextAvailableDevice;
				static int g_referenceNum;
			};
        }
    }
}

#endif

