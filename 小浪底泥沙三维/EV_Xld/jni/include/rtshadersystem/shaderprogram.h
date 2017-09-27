#ifndef _ShaderProgram_
#define _ShaderProgram_
#include "shaderprerequisites.h"
#include "shaderparameter.h"
#include "shaderfunction.h"
#include "shaderfunctionatom.h"
#include <stringvector.h>
#include <gpuprogram.h>
#include <singleton.h>

namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {
            namespace RTShaderSystem
            {

                /** A class that represents a shader based program.
                */
                class EV_RTSS_DLL CProgram : public EarthView::World::Core::CAllocatedObject
                {
                    /// Interface.
                public:
                    /** Get the type of this program. */
                    EarthView::World::Graphic::GpuProgramType				getType						() const;
                    /** Resolve uniform auto constant parameter with associated real data of this program.
                    @param autoType The auto type of the desired parameter.
                    @param data The data to associate with the auto parameter.
                    @param size number of elements in the parameter.
                    @size_t size = 0
                    Return parameter instance in case of that resolve operation succeeded.
                    */
                    EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr		resolveAutoParameterReal	(EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType autoType, Real data, size_t size);
                    EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr		resolveAutoParameterReal	(EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType autoType, Real data);
                    /** Resolve uniform auto constant parameter with associated real data of this program.
                    @param autoType The auto type of the desired parameter.
                    @param type The desired data type of the auto parameter.
                    @param data The data to associate with the auto parameter.
                    @param size number of elements in the parameter.
                    @size_t size = 0
                    Return parameter instance in case of that resolve operation succeeded.
                    */
                    EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr		resolveAutoParameterReal	(EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType autoType, EarthView::World::Graphic::GpuConstantType type, Real data, size_t size);
                    EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr		resolveAutoParameterReal	(EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType autoType, EarthView::World::Graphic::GpuConstantType type, Real data);
                    /** Resolve uniform auto constant parameter with associated int data of this program.
                    @param autoType The auto type of the desired parameter.
                    @param data The data to associate with the auto parameter.
                    @param size number of elements in the parameter.
                    @size_t size = 0
                    Return parameter instance in case of that resolve operation succeeded.
                    */
                    EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr		resolveAutoParameterInt		(EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType autoType, size_t data, size_t size);
                    EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr		resolveAutoParameterInt		(EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType autoType, size_t data);
                    /** Resolve uniform auto constant parameter with associated int data of this program.
                    @param autoType The auto type of the desired parameter.
                    @param type The desired data type of the auto parameter.
                    @param data The data to associate with the auto parameter.
                    @param size number of elements in the parameter.
                    Return parameter instance in case of that resolve operation succeeded.
                    */
                    EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr		resolveAutoParameterInt		(EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType autoType, EarthView::World::Graphic::GpuConstantType type, size_t data, size_t size = 0);
                    /** Resolve uniform parameter of this program.
                    @param type The type of the desired parameter.
                    @param index The index of the desired parameter.
                    @param suggestedName The suggested name for the parameter in case new one should be create.
                    @param variability How this parameter varies (bitwise combination of GpuProgramVariability).
                    @param size number of elements in the parameter.
                    @size_ = 0
                    Return parameter instance in case of that resolve operation succeeded.
                    @remarks CPass -1 as index parameter to create a new parameter with the desired type and index.
                    */
                    EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr		resolveParameter			(EarthView::World::Graphic::GpuConstantType type, int index, ev_uint16 variability, const EVString &suggestedName, size_t size);
                    EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr		resolveParameter			(EarthView::World::Graphic::GpuConstantType type, int index, ev_uint16 variability, const EVString &suggestedName);
                    /** Get parameter by a given name.
                    @param name The name of the parameter to search for.
                    @remarks Return NULL if no matching parameter found.
                    */
                    EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr		getParameterByName			(const EVString &name);
                    /** Get parameter by a given auto constant type.
                    @param autoType The auto type of the parameter to search for.
                    @remarks Return NULL if no matching parameter found.
                    */
                    EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr		getParameterByAutoType		(EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType autoType);
                    /** Get parameter by a given type and index.
                    @param type The type of the parameter to search for.
                    @param index The index of the parameter to search for.
                    @remarks Return NULL if no matching parameter found.
                    */
                    EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr		getParameterByType			(EarthView::World::Graphic::GpuConstantType type, int index);
                    /** Get the list of uniform parameters of this program.
                    */
                    const EarthView::World::Graphic::RTShaderSystem::UniformParameterList	&getParameters		() const
                    {
                        return mParameters;
                    };
                    /** Create new function in this program. Return the newly created function instance.
                    @param name The name of the function to create.
                    @param desc The description of the function.
                    */
                    EarthView::World::Graphic::RTShaderSystem::CFunction					*createFunction				(const EVString &name, const EVString &desc, const EarthView::World::Graphic::RTShaderSystem::CFunction::FunctionType functionType);
                    /** Get a function by a given name. Return NULL if no matching function found.
                    @param name The name of the function to search for.
                    */
                    EarthView::World::Graphic::RTShaderSystem::CFunction					*getFunctionByName			(const EVString &name);
                    /** Get the function list of this program.
                    */
                    const EarthView::World::Graphic::RTShaderSystem::ShaderFunctionList	&getFunctions				() const
                    {
                        return mFunctions;
                    };
                    /** Set the entry point function.
                    @param function The function that will use as entry point of this program.
                    */
                    void						setEntryPointFunction		(EarthView::World::Graphic::RTShaderSystem::CFunction *function)
                    {
                        mEntryPointFunction = function;
                    }
                    /** Get the entry point function of this program.*/
                    EarthView::World::Graphic::RTShaderSystem::CFunction					*getEntryPointFunction		()
                    {
                        return mEntryPointFunction;
                    }
                    /** Add dependency for this program. Basically a filename that will be included in this
                    program and provide predefined shader functions code.
                    One should verify that the given library file he provides can be reached by the resource manager.
                    */
                    void						addDependency				(const EVString &libFileName);
                    /** Get the number of external libs this program depends on */
                    size_t						getDependencyCount			() const;
                    /** Get the library name of the given index dependency.
                    @param index The index of the dependecy.
                    */
                    const EVString				&getDependency				(ev_uint32 index) const;


                    /** Sets whether a vertex program includes the required instructions
                        to perform skeletal animation.
                    */
                    void setSkeletalAnimationIncluded(bool value)
                    {
                        mSkeletalAnimation = value;
                    }

                    /** Returns whether a vertex program includes the required instructions
                        to perform skeletal animation.
                    */
                    bool getSkeletalAnimationIncluded() const
                    {
                        return mSkeletalAnimation;
                    }
                    /// Protected methods.
                protected:
                    /** Class constructor.
                    @param type The type of this program.
                    */
                    CProgram			(EarthView::World::Graphic::GpuProgramType type);
                    /** Class destructor */
                    ~CProgram		();
                    /** Destroy all parameters of this program. */
                    void						destroyParameters	();
                    /** Destroy all functions of this program. */
                    void						destroyFunctions	();
                    /** Add parameter to this program. */
                    void						addParameter				(EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr parameter);

                    /** Remove parameter from this program. */
                    void						removeParameter				(EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr parameter);

                    /// Attributes.
                protected:
                    EarthView::World::Graphic::GpuProgramType					mType;										/// Program type. (Vertex, Fragment, Geometry).
                    EarthView::World::Graphic::RTShaderSystem::UniformParameterList			mParameters;								/// Program uniform parameters.
                    EarthView::World::Graphic::RTShaderSystem::ShaderFunctionList				mFunctions;									/// Function list.
                    EarthView::World::Graphic::RTShaderSystem::CFunction						*mEntryPointFunction;						/// Entry point function for this program.
                    EarthView::World::Core::StringVector					mDependencies;								/// Program dependencies.
                    bool							mSkeletalAnimation;							/// Skeletal animation calculation
                private:
                    friend class EarthView::World::Graphic::RTShaderSystem::CProgramManager;
                };
            }
        }
    }
}

#endif

