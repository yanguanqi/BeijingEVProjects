#ifndef __FFT_IPP_H__
#define __FFT_IPP_H__

#include "fftipp/fftippconfig.h"
#include "graphic/fft.h"
#include "ippi.h"

namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {    
			class Allocator;

			class EV_FFTIPP_DLL IFFTIPP
			{
			public:
				IFFTIPP(){}

				virtual ~IFFTIPP() 
				{

				}

				virtual void Release()
				{

				}

				virtual bool Setup(unsigned int Nx, unsigned int Ny, unsigned int batchSize)
				{
					return false;
				}
ev_private:
				virtual bool InverseTransform2D(EarthView::World::Graphic::ComplexNumber **inputArray, float **outputArray, unsigned int batchSize)
				{
					return false;
				}
			};

			class EV_FFTIPP_DLL FFTIPP : public EarthView::World::Graphic::FFT
			{
			public:
				FFTIPP() : iFFTIPP(0) 
				{

				}

				virtual ~FFTIPP();

				static bool LoadDLL();

				static void UnLoadDll();

				static bool IsCompatible();

				virtual bool Setup(unsigned int Nx, unsigned int Ny, unsigned int batchSize, ev_real32 worldUnits, bool);

				virtual bool ExploitsConjugate() const 
				{
					return true;
				}

				virtual const char *GetName() const
				{
					return "Intel Integrated Performance Primitives";
				}

ev_private:
				virtual bool InverseTransform2D(EarthView::World::Graphic::ComplexNumber **inputArray, float **outputArray, unsigned int batchSize);

			private:
				IFFTIPP* GetIFFTIPP(Allocator *allocator);
				static bool IsCompatibleProc();

				IFFTIPP *iFFTIPP;
			};

			class EV_FFTIPP_DLL FFTIPPImpl : public IFFTIPP
			{
			public:
				FFTIPPImpl() : pBuffer(0) {}

				virtual void Release();

				virtual bool Setup(unsigned int Nx, unsigned int Ny, unsigned int batchSize);
ev_private:
				virtual bool InverseTransform2D(EarthView::World::Graphic::ComplexNumber **inputArray, float **outputArray, unsigned int batchSize);

			private:
				FFT2DSpec_R_32f *pFFTSpec;
				unsigned char *pBuffer;
				float *packedIn;
				unsigned int dimX, dimY, batchSize;
			};
        }
    }
}

#endif

