#ifndef __SCRIPTTRANSLATOR_H_
#define __SCRIPTTRANSLATOR_H_
#include "scriptcompiler.h"
#include "rendersystem_def.h"
#include "blendmode.h"
#include "graphic/graphic_config.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            ///enum SceneBlendFactor;
            class CTechnique;
            class CPass;
            class CTextureUnitState;
            class CParticleSystem;
            class CParticleEmitter;
            class CParticleAffector;
            class CCompositor;
            class CCompositionTechnique;
            class CCompositionTargetPass;
            class CCompositionPass;

            class EV_GRAPHIC_DLL CScriptTranslator : public EarthView::World::Core::CAllocatedObject
            {
            ev_private:
                CScriptTranslator(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                CScriptTranslator();
                /**
                 * @param compiler The compiler invoking this translator
                 * @param node The current AST node to be translated
                 */
                virtual void translate( EarthView::World::Graphic::CScriptCompiler *compiler, _in const EarthView::World::Graphic::AbstractNodePtr &node);
                /// needs virtual destructor
                virtual ~CScriptTranslator();
				virtual CScriptTranslator *clone(){return NULL;}
            protected:
                //// Retrieves a new translator from the factories and uses it to process the give node
                void processNode( EarthView::World::Graphic::CScriptCompiler *compiler, _in const EarthView::World::Graphic::AbstractNodePtr &node);
                //// Retrieves the node iterator at the given index
                static AbstractNodeList::const_iterator getNodeAt( _in const AbstractNodeList &nodes, _in ev_int32 index);
                //// Converts the node to a boolean and returns true if successful
                static ev_bool getBoolean( _in const EarthView::World::Graphic::AbstractNodePtr &node,  _out ev_bool *result);
                //// Converts the node to a string and returns true if successful
                static ev_bool getString( _in const EarthView::World::Graphic::AbstractNodePtr &node, _out EVString *result);
                //// Converts the node to a Real and returns true if successful
                static ev_bool getReal( _in const EarthView::World::Graphic::AbstractNodePtr &node, _out Real *result);
                //// Converts the node to a ev_real32 and returns true if successful
                static ev_bool getFloat( _in const EarthView::World::Graphic::AbstractNodePtr &node, _out ev_real32 *result);
                //// Converts the node to an integer and returns true if successful
                static ev_bool getInt( _in const EarthView::World::Graphic::AbstractNodePtr &node, _out ev_int32 *result);
                //// Converts the node to an unsigned integer and returns true if successful
                static ev_bool getUInt( _in const EarthView::World::Graphic::AbstractNodePtr &node, _out ev_uint32 *result);
                //// Converts the range of nodes to a CColourValue and returns true if successful
                static ev_bool getColour(_inout AbstractNodeList::const_iterator i, _inout AbstractNodeList::const_iterator end,  CColourValue *result, _in ev_int32 maxEntries);
                static ev_bool getColour(_inout AbstractNodeList::const_iterator i, _inout AbstractNodeList::const_iterator end,  CColourValue *result);
                //// Converts the node to a SceneBlendFactor enum and returns true if successful
                static ev_bool getSceneBlendFactor( _in const EarthView::World::Graphic::AbstractNodePtr &node,  SceneBlendFactor *sbf);
                //// Converts the node to a CompareFunction enum and returns true if successful
                static ev_bool getCompareFunction( _in const EarthView::World::Graphic::AbstractNodePtr &node,  CompareFunction *func);
                //// Converts the range of nodes to a EarthView::World::Spatial::Math::CMatrix4 and returns true if successful
                static ev_bool getMatrix4(_inout AbstractNodeList::const_iterator i, _inout AbstractNodeList::const_iterator end,  EarthView::World::Spatial::Math::CMatrix4 *m);
                //// Converts the range of nodes to an array of ints and returns true if successful
                static ev_bool getInts(_inout AbstractNodeList::const_iterator i, _inout AbstractNodeList::const_iterator end, _inout ev_int32 *vals, _in ev_int32 count);
                //// Converts the range of nodes to an array of floats and returns true if successful
                static ev_bool getFloats(_inout AbstractNodeList::const_iterator i, _inout AbstractNodeList::const_iterator end, _inout ev_real32 *vals, _in ev_int32 count);
                //// Converts the node to a StencilOperation enum and returns true if successful
                static ev_bool getStencilOp( _in const EarthView::World::Graphic::AbstractNodePtr &node,  StencilOperation *op);
                //// Converts the node to a GpuConstantType enum and returns true if successful
                static ev_bool getConstantType(_in AbstractNodeList::const_iterator i,  GpuConstantType *op);

            };
            /** The EarthView::World::Graphic::CScriptTranslatorManager manages the lifetime and access to
             *  script translators. You register these managers with the
             *  CScriptCompilerManager tied to specific object types.
             *  Each manager may manage multiple types.
             */
            class EV_GRAPHIC_DLL CScriptTranslatorManager : public EarthView::World::Core::CAllocatedObject
            {
            private:
                static EarthView::World::Graphic::CScriptTranslatorManager *ms_Singleton;
            ev_private:
                CScriptTranslatorManager(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                CScriptTranslatorManager();
                /// required - virtual destructor
                virtual ~CScriptTranslatorManager();

                static EarthView::World::Graphic::CScriptTranslatorManager &getSingleton();
                static EarthView::World::Graphic::CScriptTranslatorManager *getSingletonPtr();
                //// Returns the number of translators being managed
                virtual ev_size_t getNumTranslators() const;
                //// Returns a manager for the given object abstract node, or null if it is not supported
                virtual EarthView::World::Graphic::CScriptTranslator *getTranslator( _in const EarthView::World::Graphic::AbstractNodePtr &nodes);
            };
            /**************************************************************************
             * CMaterial compilation section
             *************************************************************************/
            class EV_GRAPHIC_DLL CMaterialTranslator : public EarthView::World::Graphic::CScriptTranslator
            {
            protected:
                CMaterial *mMaterial;
                EarthView::World::Core::AliasTextureNamePairList mTextureAliases;
            ev_private:
                CMaterialTranslator(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                CMaterialTranslator();
                void translate(_in EarthView::World::Graphic::CScriptCompiler *compiler, _in const EarthView::World::Graphic::AbstractNodePtr &node);
				virtual CScriptTranslator *clone(){return new CMaterialTranslator();}
            };

            class EV_GRAPHIC_DLL CTechniqueTranslator : public EarthView::World::Graphic::CScriptTranslator
            {
            protected:
                CTechnique *mTechnique;
            ev_private:
                CTechniqueTranslator(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                CTechniqueTranslator();
                void translate( EarthView::World::Graphic::CScriptCompiler *compiler, _in const EarthView::World::Graphic::AbstractNodePtr &node);
				virtual CScriptTranslator *clone(){return new CTechniqueTranslator();}
            };

            class EV_GRAPHIC_DLL CPassTranslator : public EarthView::World::Graphic::CScriptTranslator
            {
            protected:
                CPass *mPass;
            ev_private:
                CPassTranslator(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                CPassTranslator();
                void translate( EarthView::World::Graphic::CScriptCompiler *compiler, _in const EarthView::World::Graphic::AbstractNodePtr &node);
				virtual CScriptTranslator *clone(){return new CPassTranslator();}
            protected:
                void translateVertexProgramRef( EarthView::World::Graphic::CScriptCompiler *compiler, EarthView::World::Graphic::CObjectAbstractNode *node);
                void translateGeometryProgramRef( EarthView::World::Graphic::CScriptCompiler *compiler,  EarthView::World::Graphic::CObjectAbstractNode *node);
                void translateFragmentProgramRef( EarthView::World::Graphic::CScriptCompiler *compiler,  EarthView::World::Graphic::CObjectAbstractNode *node);
                void translateShadowCasterVertexProgramRef( EarthView::World::Graphic::CScriptCompiler *compiler, EarthView::World::Graphic::CObjectAbstractNode *node);
                void translateShadowCasterFragmentProgramRef(EarthView::World::Graphic::CScriptCompiler *compiler, EarthView::World::Graphic::CObjectAbstractNode *node);
                void translateShadowReceiverVertexProgramRef( EarthView::World::Graphic::CScriptCompiler *compiler, EarthView::World::Graphic::CObjectAbstractNode *node);
                void translateShadowReceiverFragmentProgramRef( EarthView::World::Graphic::CScriptCompiler *compiler,  EarthView::World::Graphic::CObjectAbstractNode *node);
            };
            class EV_GRAPHIC_DLL CTextureUnitTranslator : public EarthView::World::Graphic::CScriptTranslator
            {
            protected:
                CTextureUnitState *mUnit;
            ev_private:
                CTextureUnitTranslator(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                CTextureUnitTranslator();
                void translate( EarthView::World::Graphic::CScriptCompiler *compiler, _in const EarthView::World::Graphic::AbstractNodePtr &node);
				virtual CScriptTranslator *clone(){return new CTextureUnitTranslator();}
            };
            class EV_GRAPHIC_DLL CTextureSourceTranslator : public EarthView::World::Graphic::CScriptTranslator
            {
            ev_private:
                CTextureSourceTranslator(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                CTextureSourceTranslator();
                void translate( EarthView::World::Graphic::CScriptCompiler *compiler, _in const EarthView::World::Graphic::AbstractNodePtr &node);
				virtual CScriptTranslator *clone(){return new CTextureSourceTranslator();}
            };
            class EV_GRAPHIC_DLL CGpuProgramTranslator : public EarthView::World::Graphic::CScriptTranslator
            {
            ev_private:
                CGpuProgramTranslator(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                CGpuProgramTranslator();
                void translate( EarthView::World::Graphic::CScriptCompiler *compiler, _in const EarthView::World::Graphic::AbstractNodePtr &node);
				virtual CScriptTranslator *clone(){return new CGpuProgramTranslator();}
            protected:
                void translateGpuProgram( EarthView::World::Graphic::CScriptCompiler *compiler,  EarthView::World::Graphic::CObjectAbstractNode *obj);
                void translateHighLevelGpuProgram( EarthView::World::Graphic::CScriptCompiler *compiler,  EarthView::World::Graphic::CObjectAbstractNode *obj);
                void translateUnifiedGpuProgram( EarthView::World::Graphic::CScriptCompiler *compiler, EarthView::World::Graphic::CObjectAbstractNode *obj);
            public:
                static void translateProgramParameters( EarthView::World::Graphic::CScriptCompiler *compiler, EarthView::World::Graphic::GpuProgramParametersSharedPtr parameters,  EarthView::World::Graphic::CObjectAbstractNode *obj);
            };
            class EV_GRAPHIC_DLL CSharedParamsTranslator : public EarthView::World::Graphic::CScriptTranslator
            {
            ev_private:
                CSharedParamsTranslator(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                CSharedParamsTranslator();
                void translate( EarthView::World::Graphic::CScriptCompiler *compiler, _in const EarthView::World::Graphic::AbstractNodePtr &node);
				virtual CScriptTranslator *clone(){return new CSharedParamsTranslator();}
            };
            /**************************************************************************
             * CParticle System section
             *************************************************************************/
            class EV_GRAPHIC_DLL CParticleSystemTranslator : public EarthView::World::Graphic::CScriptTranslator
            {
            protected:
                CParticleSystem *mSystem;
            ev_private:
                CParticleSystemTranslator(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                CParticleSystemTranslator();
                void translate( EarthView::World::Graphic::CScriptCompiler *compiler, _in const EarthView::World::Graphic::AbstractNodePtr &node);
				virtual CScriptTranslator *clone(){return new CParticleSystemTranslator();}
            };
            class EV_GRAPHIC_DLL CParticleEmitterTranslator : public EarthView::World::Graphic::CScriptTranslator
            {
            protected:
                CParticleEmitter *mEmitter;
            ev_private:
                CParticleEmitterTranslator(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                CParticleEmitterTranslator();
                void translate( EarthView::World::Graphic::CScriptCompiler *compiler, _in const EarthView::World::Graphic::AbstractNodePtr &node);
				virtual CScriptTranslator *clone(){return new CParticleEmitterTranslator();}
            };
            class EV_GRAPHIC_DLL CParticleAffectorTranslator : public EarthView::World::Graphic::CScriptTranslator
            {
            protected:
                CParticleAffector *mAffector;
            ev_private:
                CParticleAffectorTranslator(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                CParticleAffectorTranslator();
                void translate( EarthView::World::Graphic::CScriptCompiler *compiler, _in const EarthView::World::Graphic::AbstractNodePtr &node);
				virtual CScriptTranslator *clone(){return new CParticleAffectorTranslator();}
            };
            /**************************************************************************
             * CCompositor section
             *************************************************************************/
            class EV_GRAPHIC_DLL CCompositorTranslator : public EarthView::World::Graphic::CScriptTranslator
            {
            protected:
                CCompositor *mCompositor;
            ev_private:
                CCompositorTranslator(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                CCompositorTranslator();
                void translate( EarthView::World::Graphic::CScriptCompiler *compiler, _in const EarthView::World::Graphic::AbstractNodePtr &node);
				virtual CScriptTranslator *clone(){return new CCompositorTranslator();}
            };
            class EV_GRAPHIC_DLL CCompositionTechniqueTranslator : public EarthView::World::Graphic::CScriptTranslator
            {
            protected:
                CCompositionTechnique *mTechnique;
            ev_private:
                CCompositionTechniqueTranslator(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                CCompositionTechniqueTranslator();
                void translate( EarthView::World::Graphic::CScriptCompiler *compiler, _in const EarthView::World::Graphic::AbstractNodePtr &node);
				virtual CScriptTranslator *clone(){return new CCompositionTechniqueTranslator();}
            };
            class EV_GRAPHIC_DLL CCompositionTargetPassTranslator : public EarthView::World::Graphic::CScriptTranslator
            {
            protected:
                CCompositionTargetPass *mTarget;
            ev_private:
                CCompositionTargetPassTranslator(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                CCompositionTargetPassTranslator();
                void translate( EarthView::World::Graphic::CScriptCompiler *compiler, _in const EarthView::World::Graphic::AbstractNodePtr &node);
				virtual CScriptTranslator *clone(){return new CCompositionTargetPassTranslator();}
            };
            class EV_GRAPHIC_DLL CCompositionPassTranslator : public EarthView::World::Graphic::CScriptTranslator
            {
            protected:
                CCompositionPass *mPass;
            ev_private:
                CCompositionPassTranslator(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                CCompositionPassTranslator();
                void translate( EarthView::World::Graphic::CScriptCompiler *compiler, _in const EarthView::World::Graphic::AbstractNodePtr &node);
				virtual CScriptTranslator *clone(){return new CCompositionPassTranslator();}
            };
            ///zxt updatefor v1.8
            ///	class EV_GRAPHIC_DLL CCompositionPassClearTranslator : public EarthView::World::Graphic::CScriptTranslator
            ///	{
            ///	protected:
            ///		CCompositionPass* mPass;
            ///ev_private:
            ///		CCompositionPassClearTranslator(_in EarthView::World::Core::CNameValuePairList* pList);
            ///	public:
            ///		CCompositionPassClearTranslator();
            ///		void translate( EarthView::World::Graphic::CScriptCompiler* compiler, _in const EarthView::World::Graphic::AbstractNodePtr& node);
            ///	};
            class EV_GRAPHIC_DLL CCompositionPassStencilTranslator : public EarthView::World::Graphic::CScriptTranslator
            {
            protected:
                CCompositionPass *mPass;
            ev_private:
                CCompositionPassStencilTranslator(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                CCompositionPassStencilTranslator();
                void translate( EarthView::World::Graphic::CScriptCompiler *compiler, _in const EarthView::World::Graphic::AbstractNodePtr &node);
				virtual CScriptTranslator *clone(){return new CCompositionPassStencilTranslator();}
            };
            /**************************************************************************
             * CBuiltinScriptTranslatorManager
             *************************************************************************/
            //// This class manages the builtin translators
            class EV_GRAPHIC_DLL CBuiltinScriptTranslatorManager : public EarthView::World::Graphic::CScriptTranslatorManager
            {
            private:
                CMaterialTranslator mMaterialTranslator;
                CTechniqueTranslator mTechniqueTranslator;
                CPassTranslator mPassTranslator;
                CTextureUnitTranslator mTextureUnitTranslator;
                CTextureSourceTranslator mTextureSourceTranslator;
                CGpuProgramTranslator mGpuProgramTranslator;
                CSharedParamsTranslator mSharedParamsTranslator;
                CParticleSystemTranslator mParticleSystemTranslator;
                CParticleEmitterTranslator mParticleEmitterTranslator;
                CParticleAffectorTranslator mParticleAffectorTranslator;
                CCompositorTranslator mCompositorTranslator;
                CCompositionTechniqueTranslator mCompositionTechniqueTranslator;
                CCompositionTargetPassTranslator mCompositionTargetPassTranslator;
                CCompositionPassTranslator mCompositionPassTranslator;
                ///zxt updatefor v1.8
                ///CCompositionPassClearTranslator mCompositionPassClearTranslator;
                ///CCompositionPassStencilTranslator mCompositionPassStencilTranslator;
            ev_private:
                CBuiltinScriptTranslatorManager(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                CBuiltinScriptTranslatorManager();
                //// Returns the number of translators being managed
                virtual ev_size_t getNumTranslators() const;
                //// Returns a manager for the given object abstract node, or null if it is not supported
                virtual EarthView::World::Graphic::CScriptTranslator *getTranslator( _in const EarthView::World::Graphic::AbstractNodePtr &node);
            };
        }
    }
}


#endif

