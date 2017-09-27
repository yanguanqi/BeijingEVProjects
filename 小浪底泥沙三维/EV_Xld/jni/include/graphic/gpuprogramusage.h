#ifndef __GpuProgramUsage_H__
#define __GpuProgramUsage_H__
#include "graphic/graphic_config.h"
#include "gpuprogram.h"

namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class CPass;

            /***** This class makes the usage of a vertex and fragment programs (low-level or high-level),
                with a given set of parameters, explicit.
            @remarks
                Using a vertex or fragment program can get fairly complex; besides the fairly rudimentary
                process of binding a program to the GPU for rendering, managing usage has few
                complications, such as:
                <ul>
                <li>Programs can be high level (e.g. Cg, RenderMonkey) or low level (assembler). Using
                either should be relatively seamless, although high-level programs give you the advantage
                of being able to use named parameters, instead of just indexed registers</li>
                <li>Programs and parameters can be shared between multiple usages, in order to save
                memory</li>
                <li>When you define a user of a program, such as a material, you often want to be able to
                set up the definition but not load / compile / assemble the program at that stage, because
                it is not needed just yet. The program should be loaded when it is first needed, or
                earlier if specifically requested. The program may not be defined at this time, you
                may want to have scripts that can set up the definitions independent of the order in which
                those scripts are loaded.</li>
                </ul>
                This class packages up those details so you don't have to worry about them. For example,
                this class lets you define a high-level program and set up the parameters for it, without
                having loaded the program (which you normally could not do). When the program is loaded and
                compiled, this class will then validate the parameters you supplied earlier and turn them
                into runtime parameters.
            @par
                Just incase it wasn't clear from the above, this class provides linkage to both
                CGpuProgram and CHighLevelGpuProgram, despite its name.
            ****/
            class EV_GRAPHIC_DLL CGpuProgramUsage : public EarthView::World::Core::CAllocatedObject
            {
                friend class CGpuProgramUsageListener;
            public:
                class EV_GRAPHIC_DLL CGpuProgramUsageListener : public EarthView::World::Graphic::CResource::CResourceListener
                {
                ev_private:
                    CGpuProgramUsageListener(_in EarthView::World::Core::CNameValuePairList *pList);
                private:
                    EarthView::World::Graphic::CGpuProgramUsage *mParent;
                public:
                    CGpuProgramUsageListener(CGpuProgramUsage *ref_parent);
                    ~CGpuProgramUsageListener() {}
                    //// CResourceListener
                    void unloadingComplete(EarthView::World::Graphic::CResource *prog);
                    void loadingComplete(EarthView::World::Graphic::CResource *prog);
                };
                const EarthView::World::Graphic::CGpuProgramUsage::CGpuProgramUsageListener *getListenerPtr();
                const EarthView::World::Graphic::CGpuProgramUsage::CGpuProgramUsageListener &getListener();
            private:
                EarthView::World::Graphic::CGpuProgramUsage::CGpuProgramUsageListener *mpListener;
            protected:
                EarthView::World::Graphic::GpuProgramType mType;
                EarthView::World::Graphic::CPass *mParent;
                //// The program link
                EarthView::World::Graphic::CGpuProgramPtr mProgram;
                ///// program parameters
                EarthView::World::Graphic::GpuProgramParametersSharedPtr mParameters;

                //// Whether to recreate parameters next load
                ev_bool mRecreateParams;
                void recreateParameters();
            ev_private:
                CGpuProgramUsage(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /***** Default constructor.
                @param gptype The type of program to link to
                ****/

                CGpuProgramUsage(EarthView::World::Graphic::GpuProgramType gptype, EarthView::World::Graphic::CPass *ref_parent);
                /***** Copy constructor ****/
                CGpuProgramUsage(const CGpuProgramUsage &rhs, EarthView::World::Graphic::CPass *ref_newparent);
                ~CGpuProgramUsage();
                /***** Gets the type of program we're trying to link to. ****/
                EarthView::World::Graphic::GpuProgramType getType() const
                {
                    return mType;
                }
                /***** Sets the name of the program to use.
                @param name The name of the program to use
                @param resetParams
                    If true, this will create a fresh set of parameters from the
                    new program being linked, so if you had previously set parameters
                    you will have to set them again. If you set this to false, you must
                    be absolutely sure that the parameters match perfectly, and in the
                    case of named parameters refers to the indexes underlying them,
                    not just the names.
                ****/
                void setProgramName(const EVString &name, ev_bool resetParams);
                void setProgramName(const EVString &name);
                /***** Sets the program to use.
                @remarks
                    Note that this will create a fresh set of parameters from the
                    new program being linked, so if you had previously set parameters
                    you will have to set them again.
                ****/
                void setProgram(EarthView::World::Graphic::CGpuProgramPtr &prog);
                /***** Gets the program being used. ****/
                const EarthView::World::Graphic::CGpuProgramPtr &getProgram() const
                {
                    return mProgram;
                }
                /***** Gets the program being used. ****/
                EVString getProgramName() const
                {
                    return mProgram->getName();
                }
                /***** Sets the program parameters that should be used; because parameters can be
                    shared between multiple usages for efficiency, this method is here for you
                    to register externally created parameter objects. Otherwise, the parameters
                    will be created for you when a program is linked.
                ****/
                void setParameters(EarthView::World::Graphic::GpuProgramParametersSharedPtr parameters);
                /***** Gets the parameters being used here.
                ****/
                EarthView::World::Graphic::GpuProgramParametersSharedPtr getParameters();
                //// Load this usage (and ensure program is loaded)
                void _load();
                //// Unload this usage
                void _unload();
            };
        }
    }
}

#endif

