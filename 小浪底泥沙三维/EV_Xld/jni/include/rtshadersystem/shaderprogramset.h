#ifndef _ShaderProgramSet_
#define _ShaderProgramSet_
#include "shaderprerequisites.h"
#include <gpuprogram.h>

namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {
            namespace RTShaderSystem
            {

                /** Container class for shader based programs.
                Holds both a CPU representation and GPU representation of vertex and fragment program.
                */
                class EV_RTSS_DLL CProgramSet : public EarthView::World::Core::CAllocatedObject
                {
                ev_private:
                    CProgramSet(_in EarthView::World::Core::CNameValuePairList *pList);
                    /// Interface.
                public:
                    /** Class default constructor */
                    CProgramSet	();
                    /** Class destructor */
                    ~CProgramSet	();
                    /** Get the vertex shader CPU program. */
                    EarthView::World::Graphic::RTShaderSystem::CProgram		*getCpuVertexProgram		();
                    /** Get the fragment shader CPU program. */
                    EarthView::World::Graphic::RTShaderSystem::CProgram		*getCpuFragmentProgram	();
                    /** Get the vertex shader GPU program. */
                    EarthView::World::Graphic::CGpuProgramPtr	getGpuVertexProgram		();
                    /** Get the fragment shader GPU program. */
                    EarthView::World::Graphic::CGpuProgramPtr	getGpuFragmentProgram	();
                    /// Protected methods.
                protected:
                    void			setCpuVertexProgram		(EarthView::World::Graphic::RTShaderSystem::CProgram *vsCpuProgram);
                    void			setCpuFragmentProgram	(EarthView::World::Graphic::RTShaderSystem::CProgram *psCpuProgram);
                    void			setGpuVertexProgram		(EarthView::World::Graphic::CGpuProgramPtr vsGpuProgram);
                    void			setGpuFragmentProgram	(EarthView::World::Graphic::CGpuProgramPtr psGpuProgram);

                    /// Attributes.
                protected:
                    EarthView::World::Graphic::RTShaderSystem::CProgram		*mVSCpuProgram;						/// Vertex shader CPU program.
                    EarthView::World::Graphic::RTShaderSystem::CProgram		*mPSCpuProgram;						/// Fragment shader CPU program.
                    EarthView::World::Graphic::CGpuProgramPtr	mVSGpuProgram;						/// Vertex shader GPU program.
                    EarthView::World::Graphic::CGpuProgramPtr	mPSGpuProgram;						/// Fragment shader CPU program.
                private:
                    friend class EarthView::World::Graphic::RTShaderSystem::CProgramManager;
                    friend class EarthView::World::Graphic::RTShaderSystem::CTargetRenderState;
                };
            }
        }
    }
}

#endif

