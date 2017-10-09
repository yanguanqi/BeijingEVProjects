#ifndef _CGLOBECONTROLMANAGER_H_
#define _CGLOBECONTROLMANAGER_H_

#include "globecontrol/evglobecontrol_config.h"
#include "globecontrol/globecontrol.h"

#include "core/stdheaders.h"
#include "core/commonstringpairlist.h"
#include "spatialgui/itool.h"

#ifdef EV_STATIC_LIB
#include "graphic/staticpluginloader.h"
#endif

#ifdef EV_OS_ANDROID
namespace EarthView{namespace World{namespace RenderSystem{namespace GLES2{
	class GLES2Plugin;
}}}}
namespace EarthView{namespace World{namespace Plugin{namespace ParticleFX{
	class  CParticleFXPlugin;
}}}}
#endif

#include "rtshadersystem/shadergenerator.h"
#include "graphic/technique.h"


namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			class CRoot;
		}
		namespace Spatial3D
		{

			class CGeoSceneManagerFactory;
		}
	}
}

namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			class CCommonSceneManagerFactory;

			namespace Controls
			{
				class CGUIEventQueue;
				class CCameraManipulator;
				class CToolHandler;
				class CCommonSceneControl;
			}
		}
	}
}

namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			class CDefaultWorkQueue;
			class CBackgroundQueueManager;
		}}}

namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Controls
			{
				class CFileSystemLayer;

				class ShaderGeneratorTechniqueResolverListener : public EarthView::World::Graphic::CMaterialManager::CMaterialListener
				{
				public:
					ShaderGeneratorTechniqueResolverListener(EarthView::World::Graphic::RTShaderSystem::CShaderGenerator* pShaderGenerator)
					{
						mShaderGenerator = pShaderGenerator;			
					}
                    
					/** This is the hook point where shader based technique will be created.
                     It will be called whenever the material manager won't find appropriate technique
                     that satisfy the target scheme name. If the scheme name is out target RT Shader System
                     scheme name we will try to create shader generated technique for it. 
                     */
					virtual EarthView::World::Graphic::CTechnique* handleSchemeNotFound(unsigned short schemeIndex, 
                                                             const EVString& schemeName, EarthView::World::Graphic::CMaterial* originalMaterial, unsigned short lodIndex, 
                                                             const EarthView::World::Graphic::CRenderable* rend)
					{	
                        //CMutexLocker locker(&mMtx);
						EarthView::World::Graphic::CTechnique* generatedTech = NULL;
                        
						// Case this is the default shader generator scheme.
						if (schemeName == EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::DEFAULT_SCHEME_NAME)
						{
							bool techniqueCreated;
                            
							// Create shader generated technique for this material.
							techniqueCreated = mShaderGenerator->createShaderBasedTechnique(
                                                                                            originalMaterial->getName(), 
                                                                                            EarthView::World::Graphic::CMaterialManager::DEFAULT_SCHEME_NAME, 
                                                                                            schemeName);	
                            
							// Case technique registration succeeded.
							if (techniqueCreated)
							{
								// Force creating the shaders for the generated technique.
								mShaderGenerator->validateMaterial(schemeName, originalMaterial->getName());
                                
								// Grab the generated technique.
								EarthView::World::Graphic::CMaterial::TechniqueIterator itTech = originalMaterial->getTechniqueIterator();
                                
								while (itTech.hasMoreElements())
								{
									EarthView::World::Graphic::CTechnique* curTech = itTech.getNext();
                                    
									if (curTech->getSchemeName() == schemeName)
									{
										generatedTech = curTech;
										break;
									}
								}				
							}
						}
                        
						return generatedTech;
					}
                    
				protected:	
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*	mShaderGenerator;			// The shader generator instance.	
#ifndef EV_OS_ANDROID
					EarthView::World::Core::CRecursiveMutex mMtx;
#endif
                    
				};



				class EV_GLOBECONTROL_DLL CGlobeControlMap : public EarthView::World::Core::CBaseObject
				{
ev_private:
					CGlobeControlMap(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					CGlobeControlMap();
					ev_bool push(const EVString &key, EarthView::World::Spatial3D::Controls::C3DControl* const &val);
					ev_bool exist(const EVString &key);
					EarthView::World::Spatial3D::Controls::C3DControl*& operator[](const EVString &key);
					EarthView::World::Spatial3D::Controls::C3DControl*& get(const EVString &key);
					ev_void erase(const EVString &key);
					ev_size_t size() const;
					ev_void clear();
					ev_bool empty() const;
ev_private:
					typedef map<EVString,EarthView::World::Spatial3D::Controls::C3DControl*> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::mapped_type mapped_type;
					typedef InternalList::key_type key_type;
					typedef InternalList::value_type value_type;
					typedef pair<iterator, bool> _Pairib;
					RESERVE_CONTAINER_FUNCTION_MAP(mList);

					CGlobeControlMap::_Pairib insert(const value_type &val);
					CGlobeControlMap::iterator find(const EVString &key);
					CGlobeControlMap::const_iterator find(const EVString &key) const;
				private:
					InternalList mList;
				};

				/// <summary>
				/// 抽象场景控件管理器
				/// </summary>
				class EV_GLOBECONTROL_DLL CGlobeControlManager:public EarthView::World::Core::CAllocatedObject
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CGlobeControlManager();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~CGlobeControlManager();
					/// <summary>
					/// 获取单例对象
					/// </summary>
					/// <returns></returns>
					static EarthView::World::Spatial3D::Controls::CGlobeControlManager& getSingleton();
					/// <summary>
					/// 获取单例指针
					/// </summary>
					/// <returns></returns>
					static EarthView::World::Spatial3D::Controls::CGlobeControlManager* getSingletonPtr();
					/// <summary>
					/// 初始化设置
					/// </summary>
					/// <returns>初始化成功返回true，失败返回false</returns>
					bool setup()
					{
						return setup(true);
					}
					/// <summary>
					/// 获取单例指针
					/// </summary>
					/// <param name="externalWindowHandle">是否由外部创建句柄</param>
					/// <returns>初始化成功返回true，失败返回false</returns>
				    bool setup(_in bool externalWindowHandle);
					/// <summary>
					/// 创建抽象场景控件
					/// </summary>
					/// <param name="windowName">窗体名</param>
					/// <param name="windowWidth">窗体宽</param>
					/// <param name="windowHeight">窗体高</param>
					/// <param name="miscParams">参数列表</param>
					/// <returns>抽象场景控件</returns>
					EarthView::World::Spatial3D::Controls::CGlobeControl* createGlobeControl(_in const EVString& windowName,_in int windowWidth,_in int windowHeight,_in EarthView::World::Core::NameValuePairList* miscParams);
					/// <summary>
					/// 移除globeControl
					/// </summary>
					/// <param name="globeGlobeName">控件的名称</param>
					/// <returns></returns>
					void removeGlobeControl(_in const EVString& globeGlobeName);
					/// <summary>
					/// 创建通用场景控件
					/// </summary>
					/// <param name="windowName">窗体名</param>
					/// <param name="windowWidth">窗体宽</param>
					/// <param name="windowHeight">窗体高</param>
					/// <returns>通用场景控件</returns>
					EarthView::World::Spatial3D::Controls::CCommonSceneControl* createCommonSceneControl(_in ev_int32 windowName,_in int windowWidth,_in int windowHeight);

					/// <summary>
					/// 创建通用场景控件
					/// </summary>
					/// <param name="windowName">窗体名</param>
					/// <param name="windowWidth">窗体宽</param>
					/// <param name="windowHeight">窗体高</param>
					/// <returns>通用场景控件</returns>
					EarthView::World::Spatial3D::Controls::CCommonSceneControl* createCommonSceneControl(_in const EVString& windowName,_in int windowWidth,_in int windowHeight);

					/// <summary>
					/// 移除3DControl
					/// </summary>
					/// <param name="DControlName">控件的名称</param>
					/// <returns></returns>
					void remove3Dcontrol(_in const EVString& DControlName);
					/// <summary>
					/// 根据名称取得globeControl
					/// </summary>
					/// <param name="globeControlName">控件名</param>
					/// <returns></returns>
					EarthView::World::Spatial3D::Controls::CGlobeControl* getGlobeControl(_in const EVString& globeControlName)const;
					/// <summary>
					/// 根据名称判断抽象数字地球场景控件是否存在
					/// </summary>
					/// <param name="globeControlName">控件名</param>
					/// <returns>存在返回true，不存在返回false</returns>
					ev_bool existGlobeControl(const EVString& globeControlName)const;
					/// <summary>
					/// 根据名称判断抽象数字地球场景控件是否存在
					/// </summary>
					/// <param name="globeControl">控件对象</param>
					/// <returns>存在返回true，不存在返回false</returns>
					ev_bool existGlobeControl(EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl) const;
					/// <summary>
					/// 渲染一帧，系统的主要工作接口
					/// </summary>
					/// <returns>需要继续渲染返回true，结束渲染返回false</returns>
					bool frame();

				ev_private:
					CGlobeControlManager(_in EarthView::World::Core::CNameValuePairList* pList);
				private:
					friend class CGlobeControl;
					/// <summary>
					/// 获取Root对象
					/// </summary>
					/// <returns>Root对象</returns>
					EarthView::World::Graphic::CRoot* getRoot()
					{
						return mRoot;
					}
					/// <summary>
					/// 获取着色器程序生成器对象
					/// </summary>
					/// <returns></returns>
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator* getShaderGenerator(){return mShaderGenerator;}
					/// <summary>
					/// 初始化运行时着色系统，OpenGL-ES2.0及以上版本渲染系统需要初始化运行时着色系统
					/// </summary>
					/// <param name="sceneMgr">场景管理器</param>
					/// <returns>成功返回true，失败返回false</returns>
					ev_bool initializeRTShaderSystem(EarthView::World::Graphic::CSceneManager* sceneMgr);
					ev_bool finalizeShaderSystem();
					/// <summary>
					/// 添加资源
					/// </summary>
					/// <param name="arch">资源路径</param>
					/// <param name="type">资源类型</param>
					/// <param name="sec">资源组名</param>
					/// <returns></returns>
					void locateResources(EVString arch,EVString type,EVString sec);

					/// <summary>
					/// 创建Root对象
					/// </summary>
					/// <returns></returns>
					void createRoot();
					/// <summary>
					/// 保存配置
					/// </summary>
					/// <returns></returns>
					bool oneTimeConfig();
					/// <summary>
					/// 定位资源
					/// </summary>
					/// <returns></returns>
					void locateResources();

					

				private:
					EarthView::World::Spatial3D::Controls::CFileSystemLayer* mFSLayer; 

#ifdef EV_STATIC_LIB
					EarthView::World::Graphic::StaticPluginLoader mStaticPluginLoader;
#endif
#ifdef EV_OS_ANDROID
					EarthView::World::RenderSystem::GLES2::GLES2Plugin* mGles2;
					EarthView::World::Plugin::ParticleFX::CParticleFXPlugin* mParticeFX;
#endif
				
					EarthView::World::Graphic::CRoot* mRoot;

					EarthView::World::Spatial3D::CGeoSceneManagerFactory* mgeoSceneManagerFactory;
					

					
					EarthView::World::Spatial3D::CCommonSceneManagerFactory* mCommonSceneManagerFactory;

					bool mfirstCreatWindow;

					CGlobeControlMap mGlobeControls;

					//EVString mNextRenderer; 

					bool mautoCreateWindow;

					EV_MUTEX(mMutex);

				protected:
					ShaderGeneratorTechniqueResolverListener* mMaterialMgrListener;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator* mShaderGenerator;
					static EarthView::World::Spatial3D::Controls::CGlobeControlManager* ms_Singleton;
					
				};
			}
		}
	}
}

#endif





