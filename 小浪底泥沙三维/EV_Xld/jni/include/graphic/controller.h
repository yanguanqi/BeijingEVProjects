#ifndef __Controller_H__
#define __Controller_H__
#include "graphic/graphic_config.h"
#include <mathengine/ev_math.h>
#include <core/sharedptr.h>
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {



            /***** Subclasses of this class are responsible for performing a function on an input value for a CController.
                @remarks
                    This abstract class provides the interface that needs to be supported for a custom function which
                    can be 'plugged in' to a CController instance, which controls some object value based on an input value.
                    For example, the WaveControllerFunction class provided by EV_World allows you to use various waveforms to
                    translate an input value to an output value.
                @par
                    You are free to create your own subclasses in order to define any function you wish.
            ****/
            ////template <typename T>
            class EV_GRAPHIC_DLL CControllerFunction : public EarthView::World::Core::CAllocatedObject
            {
            protected:
                ///// If true, function will add input values together and wrap at 1.0 before evaluating
                ev_bool mDeltaInput;
                Real mDeltaCount;
                /***** Gets the input value as adjusted by any delta.
                ****/
                Real getAdjustedInput(Real input);
            ev_private:
                CControllerFunction(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /***** Constructor.
                    @param
                        deltaInput If true, signifies that the input will be a delta value such that the function should
                        add it to an internal counter before calculating the output.
                ****/
                CControllerFunction(ev_bool deltaInput);
                virtual ~CControllerFunction() {}
                virtual Real calculate(Real sourceValue);
            };
            class EV_GRAPHIC_DLL ControllerFunctionRealPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CControllerFunction>
            {
            ev_private:
                ControllerFunctionRealPtr(_in EarthView::World::Core::CNameValuePairList *pList): EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CControllerFunction>(
                        pList && pList->Exist("ref_rep") ? (EarthView::World::Graphic::CControllerFunction *)pList->GetAt("ref_rep") : (EarthView::World::Graphic::CControllerFunction *) NULL
                        , pList && pList->Exist("inFreeMethod") ? *(EarthView::World::Core::SharedPtrFreeMethod *)(pList->GetAt("inFreeMethod")) : EarthView::World::Core::SPFM_DELETE)
                {
                    if(pList && pList->Exist("r"))
                    {
                        EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CControllerFunction> r = *(EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CControllerFunction>*)pList->GetAt("r");
                        EV_SET_AUTO_SHARED_MUTEX_NULL
                        EV_MUTEX_CONDITIONAL(r.EV_AUTO_MUTEX_NAME)
                        {
                            EV_LOCK_MUTEX(*r.EV_AUTO_MUTEX_NAME)
                            EV_COPY_AUTO_SHARED_MUTEX(r.EV_AUTO_MUTEX_NAME)
                            pRep = r.pRep;
                            pUseCount = r.pUseCount;
                            useFreeMethod = r.useFreeMethod;
                            //// Handle zero pointer gracefully to manage STL containers
                            if(pUseCount)
                            {
                                ++(*pUseCount);
                            }
                        }
                    }
                }
            public:
                ControllerFunctionRealPtr() : EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CControllerFunction>() {}
                explicit ControllerFunctionRealPtr(EarthView::World::Graphic::CControllerFunction *ref_rep) : EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CControllerFunction>(ref_rep) {}
                explicit ControllerFunctionRealPtr(EarthView::World::Graphic::CControllerFunction *ref_rep, EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CControllerFunction>(ref_rep, inFreeMethod) {}
                ControllerFunctionRealPtr(const ControllerFunctionRealPtr &r) : EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CControllerFunction>(r) {}

                EarthView::World::Graphic::CControllerFunction *get() const
                {
                    return EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CControllerFunction>::get();
                }
            };
            /***** Can either be used as an input or output value.
            ****/
            ////template <typename T>
            class EV_GRAPHIC_DLL CControllerValue : public EarthView::World::Core::CAllocatedObject
            {
            ev_private:
                CControllerValue(_in EarthView::World::Core::CNameValuePairList *pList) {}
            public:
                CControllerValue() {}
                virtual ~CControllerValue() { }
                virtual Real getValue() const ;
                virtual void setValue(Real value) ;
            };
            class EV_GRAPHIC_DLL ControllerValueRealPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CControllerValue>
            {
            ev_private:
                ControllerValueRealPtr(_in EarthView::World::Core::CNameValuePairList *pList): EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CControllerValue>(
                        pList && pList->Exist("ref_rep") ? (EarthView::World::Graphic::CControllerValue *)pList->GetAt("ref_rep") : (EarthView::World::Graphic::CControllerValue *) NULL
                        , pList && pList->Exist("inFreeMethod") ? *(EarthView::World::Core::SharedPtrFreeMethod *)(pList->GetAt("inFreeMethod")) : EarthView::World::Core::SPFM_DELETE)
                {
                    if(pList && pList->Exist("r"))
                    {
                        EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CControllerValue> r = *(EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CControllerValue>*)pList->GetAt("r");
                        EV_SET_AUTO_SHARED_MUTEX_NULL
                        EV_MUTEX_CONDITIONAL(r.EV_AUTO_MUTEX_NAME)
                        {
                            EV_LOCK_MUTEX(*r.EV_AUTO_MUTEX_NAME)
                            EV_COPY_AUTO_SHARED_MUTEX(r.EV_AUTO_MUTEX_NAME)
                            pRep = r.pRep;
                            pUseCount = r.pUseCount;
                            useFreeMethod = r.useFreeMethod;
                            //// Handle zero pointer gracefully to manage STL containers
                            if(pUseCount)
                            {
                                ++(*pUseCount);
                            }
                        }
                    }
                }
            public:
                ControllerValueRealPtr() : EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CControllerValue>() {}
                explicit ControllerValueRealPtr(EarthView::World::Graphic::CControllerValue *ref_rep) : EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CControllerValue>(ref_rep) {}
                explicit ControllerValueRealPtr(EarthView::World::Graphic::CControllerValue *ref_rep, EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CControllerValue>(ref_rep, inFreeMethod) {}
                ControllerValueRealPtr(const ControllerValueRealPtr &r) : EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CControllerValue>(r) {}

                EarthView::World::Graphic::CControllerValue *get() const
                {
                    return EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CControllerValue>::get();
                }
            };

            /***** Instances of this class 'control' the value of another object in the system.
                @remarks
                    CController classes are used to manage the values of object automatically based
                    on the value of some input. For example, a CController could animate a texture
                    by controlling the current frame of the texture based on time, or a different CController
                    could change the colour of a material used for a spaceship shield mesh based on the remaining
                    shield power level of the ship.
                @par
                    The CController is an intentionally abstract concept - it can generate values
                    based on input and a function, which can either be one of the standard ones
                    supplied, or a function can be 'plugged in' for custom behaviour - see the CControllerFunction class for details.
                    Both the input and output values are via EarthView::World::Graphic::CControllerValue objects, meaning that any value can be both
                    input and output of the controller.
                @par
                    controller setups are available by calling methods on the CControllerManager object.
                @see
                    EarthView::World::Graphic::CControllerFunction

            ****/
            ////template <typename T>
            class EV_GRAPHIC_DLL CController : public EarthView::World::Core::CAllocatedObject
            {
            protected:
                //// Source value
                EarthView::World::Graphic::ControllerValueRealPtr /*EarthView::World::Graphic::ControllerValueRealPtr*/ mSource;
                //// Destination value
                EarthView::World::Graphic::ControllerValueRealPtr/*EarthView::World::Graphic::ControllerValueRealPtr*/ mDest;
                //// CFunction
                EarthView::World::Graphic::ControllerFunctionRealPtr mFunc;
                //// CController is enabled or not
                ev_bool mEnabled;
            ev_private:
                CController(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /***** Usual constructor.
                    @remarks
                        Requires source and destination values, and a function object. None of these are destroyed
                        with the CController when it is deleted (they can be shared) so you must delete these as appropriate.
                ****/
                CController(const EarthView::World::Graphic::ControllerValueRealPtr &src,
                            const EarthView::World::Graphic::ControllerValueRealPtr &dest, const EarthView::World::Graphic::ControllerFunctionRealPtr &func);
                /***** Default d-tor.
                ****/
                virtual ~CController();

                //// Sets the input controller value
                void setSource(const EarthView::World::Graphic::ControllerValueRealPtr &src);
                //// Gets the input controller value
                const EarthView::World::Graphic::ControllerValueRealPtr &getSource() const;
                //// Sets the output controller value
                void setDestination(const EarthView::World::Graphic::ControllerValueRealPtr &dest);
                //// Gets the output controller value
                const EarthView::World::Graphic::ControllerValueRealPtr &getDestination() const;
                //// Returns true if this controller is currently enabled
                ev_bool getEnabled() const;
                //// Sets whether this controller is enabled
                void setEnabled(ev_bool enabled);
                /***** Sets the function object to be used by this controller.
                ****/
                void setFunction(const EarthView::World::Graphic::ControllerFunctionRealPtr &func);
                /***** Returns a pointer to the function object used by this controller.
                ****/
                const EarthView::World::Graphic::ControllerFunctionRealPtr &getFunction() const;
                /***** Tells this controller to map it's input controller value
                    to it's output controller value, via the controller function.
                @remarks
                	This method is called automatically every frame by CControllerManager.
                ****/
                void update();
            };
        }
    }
}

#endif

