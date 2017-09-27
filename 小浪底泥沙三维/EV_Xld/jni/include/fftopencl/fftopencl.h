#ifndef __FFT_OPENCL_H__
#define __FFT_OPENCL_H__

#include "fftopencl/fftopenclconfig.h"
#include "graphic/fft.h"
#include "graphic/texture.h"
#include "cuda/CL/cl_gl.h"
#if DIRECTX9_FOUND==1
#include "cuda/CL/cl_dx9_media_sharing.h"
#endif
#include "cuda/CL/cl.h"
#include "cuda/CL/clAmdFft.h"

struct FFT2DSpec_R_32f;
struct _cl_context;
struct _cl_command_queue;
struct _cl_mem;
struct _cl_kernel;
struct cudaGraphicsResource;
struct float2;
struct uint2;

namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {         
			class Allocator;

			class EV_FFTOPENCL_DLL IFFTOpenCL
			{
			public:
				IFFTOpenCL(){}

				virtual ~IFFTOpenCL() {}

				virtual void Release() 
				{

				}

				virtual bool Setup(unsigned int Nx, unsigned int Ny, unsigned int batchSize, const EarthView::World::Graphic::FFTSettings& settings)
				{
					return false;
				}

				virtual bool UploadTextures() 
				{
					return false;
				}

				virtual bool SetOutputTextures(EarthView::World::Graphic::CTexturePtr displacement, EarthView::World::Graphic::CTexturePtr slopeFoam,int n,int m)
				{
					return false;
				}

				virtual float GetHeight(float s, float t, bool hiRes)
				{
					return 0.0;
				}

				virtual void GetChoppinessDisplacement(float s, float t, float& chopX, float& chopZ, bool hiRes) 
				{

				}

				virtual const vector<EarthView::World::Spatial::Math::CVector3>& GetSprays(bool enableOpenMP)
				{
					vector<EarthView::World::Spatial::Math::CVector3> ss;
					return ss;
				}

				virtual void EnableSpray(bool enabled) 
				{

				}
ev_private:
				virtual bool TransformEndToEnd(EarthView::World::Graphic::ComplexNumber *H0, float t, float dt, float choppiness, float depth, float loopingPeriod, bool H0changed)
				{
					return false;
				}
			};
			
			class EV_FFTOPENCL_DLL FFTOpenCL : public EarthView::World::Graphic::FFT
			{
			public:
				FFTOpenCL() : iFFTOpenCL(0) {}

				virtual ~FFTOpenCL();

				static bool LoadDLL();

				static void UnLoadDll();

				static bool IsCompatible();

				virtual bool Setup(unsigned int Nx, unsigned int Ny, unsigned int batchSize, ev_real32 worldUnits, bool enableHeightReads);

				virtual bool TransformsEndToEnd() const 
				{
					return true;
				}

				virtual bool UploadTextures();

				virtual float GetHeight(float s, float t, bool hiRes);

				virtual void GetChoppinessDisplacement(float s, float t, float& chopX, float& chopZ, bool hiRes);

				virtual const vector<EarthView::World::Spatial::Math::CVector3>& GetSprays(bool enableOpenMP) const;

				virtual void EnableSpray(bool enabled);

				virtual bool ExploitsConjugate() const 
				{
					return false;
				}

				virtual const char *GetName() const
				{
					return "OpenCL clAMDFFT";
				}

				virtual bool SetOutputTextures(EarthView::World::Graphic::CTexturePtr displacement, EarthView::World::Graphic::CTexturePtr slopeFoam,int n,int m);

ev_private:
				virtual bool InverseTransform2D(EarthView::World::Graphic::ComplexNumber **inputArray, float **outputArray, unsigned int batchSize)
				{
					return false;
				}

				virtual bool TransformEndToEnd(EarthView::World::Graphic::ComplexNumber *H0, float t, float dt, float choppiness, float depth, float loopingPeriod, bool H0changed);

			private:
				IFFTOpenCL* GetIFFtOpenCL(Allocator *a);
				static bool IsCompatibleProc();

				IFFTOpenCL *iFFTOpenCL;
				EarthView::World::Graphic::FFTSettings settings;
			};

			class EV_FFTOPENCL_DLL FFTOpenCLImpl : public IFFTOpenCL
			{
			public:
				FFTOpenCLImpl() :in(0), out(0), H0(0), displacement(0), slopeFoam(0), queue(0), planHandle(0), realOutput(0),
					flipSignsKernel(0), createTexturesKernel(0), processWaterKernel(0), foamBuffer(0), context(0), omega(0),
					omegaCPU(0), lastDepth(-1), readHeights(false), foamOutput(0), fftTmpBuf(0), lastLoopingPeriod(-1),
					sprayEnabled(true) {
						m_sReferenceNum++;
				}

				virtual void Release();

				virtual bool Setup(unsigned int Nx, unsigned int Ny, unsigned int batchSize, const EarthView::World::Graphic::FFTSettings& settings);

				virtual bool UploadTextures();

				virtual bool SetOutputTextures(unsigned int displacement, unsigned int slopeFoam);

				virtual bool SetOutputTextures(EarthView::World::Graphic::CTexturePtr displacement, EarthView::World::Graphic::CTexturePtr slopeFoam,int n,int m);

				virtual float GetHeight(float s, float t, bool hiRes);

				virtual void GetChoppinessDisplacement(float s, float t, float& chopX, float& chopZ, bool hiRes);

				virtual const vector<EarthView::World::Spatial::Math::CVector3>& GetSprays(bool enableOpenMP);

				virtual void EnableSpray(bool enabled) 
				{
					sprayEnabled = enabled;
				}
ev_private:
				virtual bool TransformEndToEnd(EarthView::World::Graphic::ComplexNumber *H0, float t, float dt, float choppiness, float depth, float loopingPeriod, bool H0changed);

			private:
				void ComputeOmega(float depth, float loopingPeriod);
				bool LoadResource(const char *pathName, char*& data, unsigned int& dataLen, bool text);
				void FreeResource(char *data);

				unsigned int dimX, dimY;
				float sizeX, sizeY;
				float *realOutput, *omegaCPU, *foamOutput;
				float g, sprayThreshold;

				bool readHeights, readFoam, sprayEnabled;

				_cl_context * context;
				_cl_command_queue * queue;
				_cl_mem* in, *out, *H0, *omega, *foamBuffer, *displacement, *slopeFoam, *fftTmpBuf;
				unsigned int planHandle;
				_cl_kernel * flipSignsKernel, *processWaterKernel, *createTexturesKernel;
				bool isDX9;

				vector<EarthView::World::Spatial::Math::CVector3> sprays;

				float lastDepth, lastLoopingPeriod;

				ev_uint32 displacementGLTexID,slopeFoamGLTexID;

				static unsigned int m_sReferenceNum;
			};
        }
    }
}

#endif

