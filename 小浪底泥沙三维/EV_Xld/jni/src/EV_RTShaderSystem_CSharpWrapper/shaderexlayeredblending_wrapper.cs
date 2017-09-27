/********* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc *********/
using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;
using EarthView.World.Core;

namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			namespace Rtshadersystem
			{
				public class LayeredBlending : EarthView.World.Graphic.Rtshadersystem.Ffptexturing
				{
					public enum BLENDMODE
					{
										LB_Invalid = 1,
										LB_FFPBlend,
										LB_BlendNormal,
										LB_BlendLighten,
										LB_BlendDarken,
										LB_BlendMultiply,
										LB_BlendAverage,
										LB_BlendAdd,
										LB_BlendSubtract,
										LB_BlendDifference,
										LB_BlendNegation,
										LB_BlendExclusion,
										LB_BlendScreen,
										LB_BlendOverlay,
										LB_BlendSoftLight,
										LB_BlendHardLight,
										LB_BlendColorDodge,
										LB_BlendColorBurn,
										LB_BlendLinearDodge,
										LB_BlendLinearBurn,
										LB_BlendLinearLight,
										LB_BlendVividLight,
										LB_BlendPinLight,
										LB_BlendHardMix,
										LB_BlendReflect,
										LB_BlendGlow,
										LB_BlendPhoenix,
										LB_BlendSaturation,
										LB_BlendColor,
										LB_BlendLuminosity,
										LB_MaxBlendModes
					
					}

					public enum SOURCEMODIFIER
					{
										SM_Invalid = 1,
										SM_None,
										SM_Source1Modulate,
										SM_Source2Modulate,
										SM_Source1InvModulate,
										SM_Source2InvModulate,
										SM_MaxSourceModifiers
					
					}

					public class TextureBlend : EarthView.World.Core.BaseObject
					{
						public TextureBlend() : base(CreatedWhenConstruct.CWC_NotToCreate)
						{
							Create("TextureBlend",  null);
							RegisterCallBack();
							this.needDispose = true;
							GlobalTraceInfoMap.Put(this);
						}
						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern int Get_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_TextureBlend_blendMode(IntPtr pObject);

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void Set_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_TextureBlend_blendMode( IntPtr pObject, int value );

						public 						int BlendMode
						{
							get
							{
								int ret=Get_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_TextureBlend_blendMode(this.NativeObject);
								
								return ret;
								
							}

							set
							{
								Set_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_TextureBlend_blendMode(this.NativeObject,value);
							}
						}

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern int Get_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_TextureBlend_sourceModifier(IntPtr pObject);

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void Set_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_TextureBlend_sourceModifier( IntPtr pObject, int value );

						public 						int SourceModifier
						{
							get
							{
								int ret=Get_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_TextureBlend_sourceModifier(this.NativeObject);
								
								return ret;
								
							}

							set
							{
								Set_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_TextureBlend_sourceModifier(this.NativeObject,value);
							}
						}

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern int Get_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_TextureBlend_customNum(IntPtr pObject);

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void Set_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_TextureBlend_customNum( IntPtr pObject, int value );

						public 						int CustomNum
						{
							get
							{
								int ret=Get_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_TextureBlend_customNum(this.NativeObject);
								
								return ret;
								
							}

							set
							{
								Set_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_TextureBlend_customNum(this.NativeObject,value);
							}
						}

						private EarthView.World.Graphic.Rtshadersystem.ParameterPtr modControlParamField;
						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern IntPtr Get_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_TextureBlend_modControlParam(IntPtr pObject);

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void Set_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_TextureBlend_modControlParam( IntPtr pObject, IntPtr value );

						public 						EarthView.World.Graphic.Rtshadersystem.ParameterPtr ModControlParam
						{
							get
							{
								IntPtr __ptr = Get_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_TextureBlend_modControlParam(this.NativeObject);
								
								if(__ptr==IntPtr.Zero)
								{
								return null;
								}
								if(!object.Equals(modControlParamField, null)){
									modControlParamField.NativeObject = __ptr;
									return modControlParamField;
								}
								EarthView.World.Graphic.Rtshadersystem.ParameterPtr csObj = new EarthView.World.Graphic.Rtshadersystem.ParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
								csObj.BindNativeObject(__ptr, "ParameterPtr");
								csObj.Delegate = true;
								IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
								if (csObjClassFactory != null)
								{
									csObj.Delegate = true;
									csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.ParameterPtr;
									csObj.BindNativeObject(__ptr, "ParameterPtr");
									csObj.Delegate = true;
								}
								return csObj;
								
							}

							set
							{
								modControlParamField = value;
								Set_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_TextureBlend_modControlParam( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
							}
						}

						#if DEBUG 
							#if Windows 
								private static bool bLoadTextureBlend = LoadDll.Load("EV_RTShaderSystem_d.dll");
								private static bool csbLoadTextureBlend = LoadDll.Load("EV_RTShaderSystem_CSharp_d.dll");

							#elif Linux 
								private static bool bLoadTextureBlend = LoadDll.Load("EV_RTShaderSystem_d.so");
								private static bool csbLoadTextureBlend = LoadDll.Load("EV_RTShaderSystem_CSharp_d.so");

							#else 
								private static bool bLoadTextureBlend = LoadDll.Load("EV_RTShaderSystem_d.dll");
								private static bool csbLoadTextureBlend = LoadDll.Load("EV_RTShaderSystem_CSharp_d.dll");

							#endif 
						#else 
							#if Windows 
								private static bool bLoadTextureBlend = LoadDll.Load("EV_RTShaderSystem.dll");
								private static bool csbLoadTextureBlend = LoadDll.Load("EV_RTShaderSystem_CSharp.dll");

							#elif Linux 
								private static bool bLoadTextureBlend = LoadDll.Load("EV_RTShaderSystem.so");
								private static bool csbLoadTextureBlend = LoadDll.Load("EV_RTShaderSystem_CSharp.so");

							#else 
								private static bool bLoadTextureBlend = LoadDll.Load("EV_RTShaderSystem.dll");
								private static bool csbLoadTextureBlend = LoadDll.Load("EV_RTShaderSystem_CSharp.dll");

							#endif 
						#endif 

						private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::TextureBlend", new TextureBlendClassFactory());

						public TextureBlend(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
						{
						}

						public override void RegisterCallBack()
						{
							if (this.NativeObject != IntPtr.Zero)
							{
							}
						}
						public static TextureBlend FromBaseObject(BaseObject baseObj)
						{
							if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
								return null;
							TextureBlend obj = baseObj as  TextureBlend;
							if (object.Equals(obj, null))
							{
								obj = new TextureBlend(CreatedWhenConstruct.CWC_NotToCreate);
								obj.BindNativeObject(baseObj.NativeObject, "TextureBlend");
								obj.IncreaseCast();
							}

							return obj;
						}
					}

					public class TextureBlendClassFactory : IClassFactory
					{
						public BaseObject Create()
						{
							TextureBlend emptyInstance = new TextureBlend(CreatedWhenConstruct.CWC_NotToCreate);
							return emptyInstance;
						}
					}

					public LayeredBlending() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CLayeredBlendingProxy", null);
						if (!"EarthView.World.Graphic.Rtshadersystem.LayeredBlending".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_getType_EVString_NoVirtual(IntPtr pNativeObject);

					public new string GetType_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_getType_EVString_NoVirtual(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_getType_EVString(IntPtr pNativeObject);

					public override string GetType()
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_getType_EVString(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_setBlendMode_void_ev_uint16_BlendMode(IntPtr pNativeObject, ushort index, EarthView.World.Graphic.Rtshadersystem.LayeredBlending.BLENDMODE mode);

					public void SetBlendMode(ushort index, EarthView.World.Graphic.Rtshadersystem.LayeredBlending.BLENDMODE mode)
					{
						EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_setBlendMode_void_ev_uint16_BlendMode(this.NativeObject, index, mode);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_getBlendMode_BlendMode_ev_uint16(IntPtr pNativeObject, ushort index);

					public EarthView.World.Graphic.Rtshadersystem.LayeredBlending.BLENDMODE GetBlendMode(ushort index)
					{
						int ret=EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_getBlendMode_BlendMode_ev_uint16(this.NativeObject, index);
						
						return (EarthView.World.Graphic.Rtshadersystem.LayeredBlending.BLENDMODE)ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_setSourceModifier_void_ev_uint16_SourceModifier_int(IntPtr pNativeObject, ushort index, EarthView.World.Graphic.Rtshadersystem.LayeredBlending.SOURCEMODIFIER modType, int customNum);

					public void SetSourceModifier(ushort index, EarthView.World.Graphic.Rtshadersystem.LayeredBlending.SOURCEMODIFIER modType, int customNum)
					{
						EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_setSourceModifier_void_ev_uint16_SourceModifier_int(this.NativeObject, index, modType, customNum);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_getSourceModifier_bool_ev_uint16_SourceModifier_int(IntPtr pNativeObject, ushort index, ref EarthView.World.Graphic.Rtshadersystem.LayeredBlending.SOURCEMODIFIER modType, ref int customNum);

					public bool GetSourceModifier(ushort index, ref EarthView.World.Graphic.Rtshadersystem.LayeredBlending.SOURCEMODIFIER modType, ref int customNum)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_getSourceModifier_bool_ev_uint16_SourceModifier_int(this.NativeObject, index, ref modType, ref customNum);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_copyFrom_void_CSubRenderState_NoVirtual(IntPtr pNativeObject, IntPtr rhs);

					public new void CopyFrom_NoVirtual(EarthView.World.Graphic.Rtshadersystem.SubRenderState rhs)
					{
						EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_copyFrom_void_CSubRenderState_NoVirtual(this.NativeObject, object.Equals(rhs, null) ? IntPtr.Zero : rhs.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_copyFrom_void_CSubRenderState(IntPtr pNativeObject, IntPtr rhs);

					public override void CopyFrom(EarthView.World.Graphic.Rtshadersystem.SubRenderState rhs)
					{
						EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_copyFrom_void_CSubRenderState(this.NativeObject, object.Equals(rhs, null) ? IntPtr.Zero : rhs.NativeObject);
						
					}

					private static string TypeField;
					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr Get_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_Type( );

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void Set_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_Type( string value );

					public 					static string EVType
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_Type();
							
							string ret = Marshal.PtrToStringAnsi(__ptr);
							ClassFactory.FreeString(ref __ptr);
							return ret;
							
						}

						set
						{
							TypeField = value;
							Set_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_Type( value );
						}
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_resolveParameters_bool_CProgramSet_NoVirtual(IntPtr pNativeObject, IntPtr programSet);

					protected new bool ResolveParameters_NoVirtual(EarthView.World.Graphic.Rtshadersystem.ProgramSet programSet)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_resolveParameters_bool_CProgramSet_NoVirtual(this.NativeObject, object.Equals(programSet, null) ? IntPtr.Zero : programSet.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_resolveParameters_bool_CProgramSet(IntPtr pNativeObject, IntPtr programSet);

					protected override bool ResolveParameters(EarthView.World.Graphic.Rtshadersystem.ProgramSet programSet)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_resolveParameters_bool_CProgramSet(this.NativeObject, object.Equals(programSet, null) ? IntPtr.Zero : programSet.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_resolveDependencies_bool_CProgramSet_NoVirtual(IntPtr pNativeObject, IntPtr programSet);

					protected new bool ResolveDependencies_NoVirtual(EarthView.World.Graphic.Rtshadersystem.ProgramSet programSet)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_resolveDependencies_bool_CProgramSet_NoVirtual(this.NativeObject, object.Equals(programSet, null) ? IntPtr.Zero : programSet.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_resolveDependencies_bool_CProgramSet(IntPtr pNativeObject, IntPtr programSet);

					protected override bool ResolveDependencies(EarthView.World.Graphic.Rtshadersystem.ProgramSet programSet)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_resolveDependencies_bool_CProgramSet(this.NativeObject, object.Equals(programSet, null) ? IntPtr.Zero : programSet.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addPSBlendInvocations_void_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int_NoVirtual(IntPtr pNativeObject, IntPtr psMain, IntPtr arg1, IntPtr arg2, IntPtr texel, int samplerIndex, IntPtr blendMode, int groupOrder, ref int internalCounter, int targetChannels);

					protected new void AddPSBlendInvocations_NoVirtual(EarthView.World.Graphic.Rtshadersystem.Function psMain, EarthView.World.Graphic.Rtshadersystem.ParameterPtr arg1, EarthView.World.Graphic.Rtshadersystem.ParameterPtr arg2, EarthView.World.Graphic.Rtshadersystem.ParameterPtr texel, int samplerIndex, EarthView.World.Graphic.LayerBlendModeEx blendMode, int groupOrder, ref int internalCounter, int targetChannels)
					{
						EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addPSBlendInvocations_void_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int_NoVirtual(this.NativeObject, object.Equals(psMain, null) ? IntPtr.Zero : psMain.NativeObject, object.Equals(arg1, null) ? IntPtr.Zero : arg1.NativeObject, object.Equals(arg2, null) ? IntPtr.Zero : arg2.NativeObject, object.Equals(texel, null) ? IntPtr.Zero : texel.NativeObject, samplerIndex, object.Equals(blendMode, null) ? IntPtr.Zero : blendMode.NativeObject, groupOrder, ref internalCounter, targetChannels);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addPSBlendInvocations_void_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int(IntPtr pNativeObject, IntPtr psMain, IntPtr arg1, IntPtr arg2, IntPtr texel, int samplerIndex, IntPtr blendMode, int groupOrder, ref int internalCounter, int targetChannels);

					protected override void AddPSBlendInvocations(EarthView.World.Graphic.Rtshadersystem.Function psMain, EarthView.World.Graphic.Rtshadersystem.ParameterPtr arg1, EarthView.World.Graphic.Rtshadersystem.ParameterPtr arg2, EarthView.World.Graphic.Rtshadersystem.ParameterPtr texel, int samplerIndex, EarthView.World.Graphic.LayerBlendModeEx blendMode, int groupOrder, ref int internalCounter, int targetChannels)
					{
						EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addPSBlendInvocations_void_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int(this.NativeObject, object.Equals(psMain, null) ? IntPtr.Zero : psMain.NativeObject, object.Equals(arg1, null) ? IntPtr.Zero : arg1.NativeObject, object.Equals(arg2, null) ? IntPtr.Zero : arg2.NativeObject, object.Equals(texel, null) ? IntPtr.Zero : texel.NativeObject, samplerIndex, object.Equals(blendMode, null) ? IntPtr.Zero : blendMode.NativeObject, groupOrder, ref internalCounter, targetChannels);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadLayeredBlending = LoadDll.Load("EV_RTShaderSystem_d.dll");
							private static bool csbLoadLayeredBlending = LoadDll.Load("EV_RTShaderSystem_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadLayeredBlending = LoadDll.Load("EV_RTShaderSystem_d.so");
							private static bool csbLoadLayeredBlending = LoadDll.Load("EV_RTShaderSystem_CSharp_d.so");

						#else 
							private static bool bLoadLayeredBlending = LoadDll.Load("EV_RTShaderSystem_d.dll");
							private static bool csbLoadLayeredBlending = LoadDll.Load("EV_RTShaderSystem_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadLayeredBlending = LoadDll.Load("EV_RTShaderSystem.dll");
							private static bool csbLoadLayeredBlending = LoadDll.Load("EV_RTShaderSystem_CSharp.dll");

						#elif Linux 
							private static bool bLoadLayeredBlending = LoadDll.Load("EV_RTShaderSystem.so");
							private static bool csbLoadLayeredBlending = LoadDll.Load("EV_RTShaderSystem_CSharp.so");

						#else 
							private static bool bLoadLayeredBlending = LoadDll.Load("EV_RTShaderSystem.dll");
							private static bool csbLoadLayeredBlending = LoadDll.Load("EV_RTShaderSystem_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::RTShaderSystem::CLayeredBlending", new LayeredBlendingClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::RTShaderSystem::CLayeredBlendingProxy", new LayeredBlendingClassFactory());

					public LayeredBlending(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addPSSampleTexelInvocation_void_TextureUnitParams_CFunction_ParameterPtr_int_int(IntPtr pObject, addPSSampleTexelInvocation_CallBack_void_TextureUnitParams_CFunction_ParameterPtr_int_int pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addPSArgumentInvocations_void_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int(IntPtr pObject, addPSArgumentInvocations_CallBack_void_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addPSBlendInvocations_void_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int(IntPtr pObject, addPSBlendInvocations_CallBack_void_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_isProcessingNeeded_bool_CTextureUnitState(IntPtr pObject, isProcessingNeeded_CallBack_bool_CTextureUnitState pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_getType_EVString(IntPtr pObject, getType_CallBack_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_getExecutionOrder_int(IntPtr pObject, getExecutionOrder_CallBack_int pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_copyFrom_void_CSubRenderState(IntPtr pObject, copyFrom_CallBack_void_CSubRenderState pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_createCpuSubPrograms_bool_CProgramSet(IntPtr pObject, createCpuSubPrograms_CallBack_bool_CProgramSet pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList(IntPtr pObject, updateGpuProgramsParams_CallBack_void_CRenderable_CPass_CAutoParamDataSource_LightList pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_preAddToRenderState_bool_CRenderState_CPass_CPass(IntPtr pObject, preAddToRenderState_CallBack_bool_CRenderState_CPass_CPass pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_resolveParameters_bool_CProgramSet(IntPtr pObject, resolveParameters_CallBack_bool_CProgramSet pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_resolveDependencies_bool_CProgramSet(IntPtr pObject, resolveDependencies_CallBack_bool_CProgramSet pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addFunctionInvocations_bool_CProgramSet(IntPtr pObject, addFunctionInvocations_CallBack_bool_CProgramSet pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_addPSSampleTexelInvocation_CallBack_void_TextureUnitParams_CFunction_ParameterPtr_int_int = EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSSampleTexelInvocation_void_TextureUnitParams_CFunction_ParameterPtr_int_int_Function;
							GC.KeepAlive(m_addPSSampleTexelInvocation_CallBack_void_TextureUnitParams_CFunction_ParameterPtr_int_int);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addPSSampleTexelInvocation_void_TextureUnitParams_CFunction_ParameterPtr_int_int(this.NativeObject, m_addPSSampleTexelInvocation_CallBack_void_TextureUnitParams_CFunction_ParameterPtr_int_int);
							m_addPSArgumentInvocations_CallBack_void_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int = EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSArgumentInvocations_void_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int_Function;
							GC.KeepAlive(m_addPSArgumentInvocations_CallBack_void_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addPSArgumentInvocations_void_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int(this.NativeObject, m_addPSArgumentInvocations_CallBack_void_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int);
							m_addPSBlendInvocations_CallBack_void_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int = EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSBlendInvocations_void_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int_Function;
							GC.KeepAlive(m_addPSBlendInvocations_CallBack_void_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addPSBlendInvocations_void_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int(this.NativeObject, m_addPSBlendInvocations_CallBack_void_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int);
							m_isProcessingNeeded_CallBack_bool_CTextureUnitState = EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_isProcessingNeeded_bool_CTextureUnitState_Function;
							GC.KeepAlive(m_isProcessingNeeded_CallBack_bool_CTextureUnitState);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_isProcessingNeeded_bool_CTextureUnitState(this.NativeObject, m_isProcessingNeeded_CallBack_bool_CTextureUnitState);
							m_getType_CallBack_EVString = EarthView_World_Graphic_RTShaderSystem_CSubRenderState_getType_EVString_Function;
							GC.KeepAlive(m_getType_CallBack_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_getType_EVString(this.NativeObject, m_getType_CallBack_EVString);
							m_getExecutionOrder_CallBack_int = EarthView_World_Graphic_RTShaderSystem_CSubRenderState_getExecutionOrder_int_Function;
							GC.KeepAlive(m_getExecutionOrder_CallBack_int);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_getExecutionOrder_int(this.NativeObject, m_getExecutionOrder_CallBack_int);
							m_copyFrom_CallBack_void_CSubRenderState = EarthView_World_Graphic_RTShaderSystem_CSubRenderState_copyFrom_void_CSubRenderState_Function;
							GC.KeepAlive(m_copyFrom_CallBack_void_CSubRenderState);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_copyFrom_void_CSubRenderState(this.NativeObject, m_copyFrom_CallBack_void_CSubRenderState);
							m_createCpuSubPrograms_CallBack_bool_CProgramSet = EarthView_World_Graphic_RTShaderSystem_CSubRenderState_createCpuSubPrograms_bool_CProgramSet_Function;
							GC.KeepAlive(m_createCpuSubPrograms_CallBack_bool_CProgramSet);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_createCpuSubPrograms_bool_CProgramSet(this.NativeObject, m_createCpuSubPrograms_CallBack_bool_CProgramSet);
							m_updateGpuProgramsParams_CallBack_void_CRenderable_CPass_CAutoParamDataSource_LightList = EarthView_World_Graphic_RTShaderSystem_CSubRenderState_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Function;
							GC.KeepAlive(m_updateGpuProgramsParams_CallBack_void_CRenderable_CPass_CAutoParamDataSource_LightList);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList(this.NativeObject, m_updateGpuProgramsParams_CallBack_void_CRenderable_CPass_CAutoParamDataSource_LightList);
							m_preAddToRenderState_CallBack_bool_CRenderState_CPass_CPass = EarthView_World_Graphic_RTShaderSystem_CSubRenderState_preAddToRenderState_bool_CRenderState_CPass_CPass_Function;
							GC.KeepAlive(m_preAddToRenderState_CallBack_bool_CRenderState_CPass_CPass);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_preAddToRenderState_bool_CRenderState_CPass_CPass(this.NativeObject, m_preAddToRenderState_CallBack_bool_CRenderState_CPass_CPass);
							m_resolveParameters_CallBack_bool_CProgramSet = EarthView_World_Graphic_RTShaderSystem_CSubRenderState_resolveParameters_bool_CProgramSet_Function;
							GC.KeepAlive(m_resolveParameters_CallBack_bool_CProgramSet);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_resolveParameters_bool_CProgramSet(this.NativeObject, m_resolveParameters_CallBack_bool_CProgramSet);
							m_resolveDependencies_CallBack_bool_CProgramSet = EarthView_World_Graphic_RTShaderSystem_CSubRenderState_resolveDependencies_bool_CProgramSet_Function;
							GC.KeepAlive(m_resolveDependencies_CallBack_bool_CProgramSet);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_resolveDependencies_bool_CProgramSet(this.NativeObject, m_resolveDependencies_CallBack_bool_CProgramSet);
							m_addFunctionInvocations_CallBack_bool_CProgramSet = EarthView_World_Graphic_RTShaderSystem_CSubRenderState_addFunctionInvocations_bool_CProgramSet_Function;
							GC.KeepAlive(m_addFunctionInvocations_CallBack_bool_CProgramSet);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addFunctionInvocations_bool_CProgramSet(this.NativeObject, m_addFunctionInvocations_CallBack_bool_CProgramSet);
						}
					}
					protected override void AddPSSampleTexelInvocation(EarthView.World.Graphic.Rtshadersystem.Ffptexturing.TextureUnitParams textureUnitParams, EarthView.World.Graphic.Rtshadersystem.Function psMain, EarthView.World.Graphic.Rtshadersystem.ParameterPtr texel, int groupOrder, ref int internalCounter)
					{
						base.AddPSSampleTexelInvocation_NoVirtual(textureUnitParams,psMain,texel,groupOrder,ref internalCounter);
					}
					protected override void AddPSArgumentInvocations(EarthView.World.Graphic.Rtshadersystem.Function psMain, EarthView.World.Graphic.Rtshadersystem.ParameterPtr arg, EarthView.World.Graphic.Rtshadersystem.ParameterPtr texel, int samplerIndex, EarthView.World.Graphic.LAYERBLENDSOURCE blendSrc, EarthView.World.Graphic.ColourValue colourValue, double alphaValue, bool isAlphaArgument, int groupOrder, ref int internalCounter)
					{
						base.AddPSArgumentInvocations_NoVirtual(psMain,arg,texel,samplerIndex,blendSrc,colourValue,alphaValue,isAlphaArgument,groupOrder,ref internalCounter);
					}
					protected override bool IsProcessingNeeded(EarthView.World.Graphic.TextureUnitState texUnitState)
					{
						return base.IsProcessingNeeded_NoVirtual(texUnitState);
					}
					public override int GetExecutionOrder()
					{
						return base.GetExecutionOrder_NoVirtual();
					}
					public override bool CreateCpuSubPrograms(EarthView.World.Graphic.Rtshadersystem.ProgramSet programSet)
					{
						return base.CreateCpuSubPrograms_NoVirtual(programSet);
					}
					public override void UpdateGpuProgramsParams(EarthView.World.Graphic.Renderable rend, EarthView.World.Graphic.Pass pass, EarthView.World.Graphic.AutoParamDataSource source, EarthView.World.Graphic.LightList pLightList)
					{
						base.UpdateGpuProgramsParams_NoVirtual(rend,pass,source,pLightList);
					}
					public override bool PreAddToRenderState(EarthView.World.Graphic.Rtshadersystem.RenderState renderState, EarthView.World.Graphic.Pass srcPass, EarthView.World.Graphic.Pass dstPass)
					{
						return base.PreAddToRenderState_NoVirtual(renderState,srcPass,dstPass);
					}
					protected override bool AddFunctionInvocations(EarthView.World.Graphic.Rtshadersystem.ProgramSet programSet)
					{
						return base.AddFunctionInvocations_NoVirtual(programSet);
					}
					public static LayeredBlending FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						LayeredBlending obj = baseObj as  LayeredBlending;
						if (object.Equals(obj, null))
						{
							obj = new LayeredBlending(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CLayeredBlending");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class LayeredBlendingClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						LayeredBlending emptyInstance = new LayeredBlending(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
