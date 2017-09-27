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
				public class Sgmaterialserializerlistener : EarthView.World.Graphic.MaterialSerializer.MaterialSerializerListener
				{

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
					private static extern void EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_materialEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial_NoVirtual(IntPtr pNativeObject, IntPtr ser, EarthView.World.Graphic.MaterialSerializer.SERIALIZEEVENT EVevent, ref bool skip, IntPtr mat);

					public new void MaterialEventRaised_NoVirtual(EarthView.World.Graphic.MaterialSerializer ser, EarthView.World.Graphic.MaterialSerializer.SERIALIZEEVENT EVevent, ref bool skip, EarthView.World.Graphic.Material mat)
					{
						EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_materialEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial_NoVirtual(this.NativeObject, object.Equals(ser, null) ? IntPtr.Zero : ser.NativeObject, EVevent, ref skip, object.Equals(mat, null) ? IntPtr.Zero : mat.NativeObject);
						
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
					private static extern void EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_materialEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial(IntPtr pNativeObject, IntPtr ser, EarthView.World.Graphic.MaterialSerializer.SERIALIZEEVENT EVevent, ref bool skip, IntPtr mat);

					public override void MaterialEventRaised(EarthView.World.Graphic.MaterialSerializer ser, EarthView.World.Graphic.MaterialSerializer.SERIALIZEEVENT EVevent, ref bool skip, EarthView.World.Graphic.Material mat)
					{
						EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_materialEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial(this.NativeObject, object.Equals(ser, null) ? IntPtr.Zero : ser.NativeObject, EVevent, ref skip, object.Equals(mat, null) ? IntPtr.Zero : mat.NativeObject);
						
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
					private static extern void EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_techniqueEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique_NoVirtual(IntPtr pNativeObject, IntPtr ser, EarthView.World.Graphic.MaterialSerializer.SERIALIZEEVENT EVevent, ref bool skip, IntPtr tech);

					public new void TechniqueEventRaised_NoVirtual(EarthView.World.Graphic.MaterialSerializer ser, EarthView.World.Graphic.MaterialSerializer.SERIALIZEEVENT EVevent, ref bool skip, EarthView.World.Graphic.Technique tech)
					{
						EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_techniqueEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique_NoVirtual(this.NativeObject, object.Equals(ser, null) ? IntPtr.Zero : ser.NativeObject, EVevent, ref skip, object.Equals(tech, null) ? IntPtr.Zero : tech.NativeObject);
						
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
					private static extern void EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_techniqueEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique(IntPtr pNativeObject, IntPtr ser, EarthView.World.Graphic.MaterialSerializer.SERIALIZEEVENT EVevent, ref bool skip, IntPtr tech);

					public override void TechniqueEventRaised(EarthView.World.Graphic.MaterialSerializer ser, EarthView.World.Graphic.MaterialSerializer.SERIALIZEEVENT EVevent, ref bool skip, EarthView.World.Graphic.Technique tech)
					{
						EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_techniqueEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique(this.NativeObject, object.Equals(ser, null) ? IntPtr.Zero : ser.NativeObject, EVevent, ref skip, object.Equals(tech, null) ? IntPtr.Zero : tech.NativeObject);
						
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
					private static extern void EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_passEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CPass_NoVirtual(IntPtr pNativeObject, IntPtr ser, EarthView.World.Graphic.MaterialSerializer.SERIALIZEEVENT EVevent, ref bool skip, IntPtr tech);

					public new void PassEventRaised_NoVirtual(EarthView.World.Graphic.MaterialSerializer ser, EarthView.World.Graphic.MaterialSerializer.SERIALIZEEVENT EVevent, ref bool skip, EarthView.World.Graphic.Pass tech)
					{
						EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_passEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CPass_NoVirtual(this.NativeObject, object.Equals(ser, null) ? IntPtr.Zero : ser.NativeObject, EVevent, ref skip, object.Equals(tech, null) ? IntPtr.Zero : tech.NativeObject);
						
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
					private static extern void EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_passEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CPass(IntPtr pNativeObject, IntPtr ser, EarthView.World.Graphic.MaterialSerializer.SERIALIZEEVENT EVevent, ref bool skip, IntPtr tech);

					public override void PassEventRaised(EarthView.World.Graphic.MaterialSerializer ser, EarthView.World.Graphic.MaterialSerializer.SERIALIZEEVENT EVevent, ref bool skip, EarthView.World.Graphic.Pass tech)
					{
						EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_passEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CPass(this.NativeObject, object.Equals(ser, null) ? IntPtr.Zero : ser.NativeObject, EVevent, ref skip, object.Equals(tech, null) ? IntPtr.Zero : tech.NativeObject);
						
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
					private static extern void EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_textureUnitStateEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState_NoVirtual(IntPtr pNativeObject, IntPtr ser, EarthView.World.Graphic.MaterialSerializer.SERIALIZEEVENT EVevent, ref bool skip, IntPtr textureUnit);

					public new void TextureUnitStateEventRaised_NoVirtual(EarthView.World.Graphic.MaterialSerializer ser, EarthView.World.Graphic.MaterialSerializer.SERIALIZEEVENT EVevent, ref bool skip, EarthView.World.Graphic.TextureUnitState textureUnit)
					{
						EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_textureUnitStateEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState_NoVirtual(this.NativeObject, object.Equals(ser, null) ? IntPtr.Zero : ser.NativeObject, EVevent, ref skip, object.Equals(textureUnit, null) ? IntPtr.Zero : textureUnit.NativeObject);
						
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
					private static extern void EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_textureUnitStateEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState(IntPtr pNativeObject, IntPtr ser, EarthView.World.Graphic.MaterialSerializer.SERIALIZEEVENT EVevent, ref bool skip, IntPtr textureUnit);

					public override void TextureUnitStateEventRaised(EarthView.World.Graphic.MaterialSerializer ser, EarthView.World.Graphic.MaterialSerializer.SERIALIZEEVENT EVevent, ref bool skip, EarthView.World.Graphic.TextureUnitState textureUnit)
					{
						EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_textureUnitStateEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState(this.NativeObject, object.Equals(ser, null) ? IntPtr.Zero : ser.NativeObject, EVevent, ref skip, object.Equals(textureUnit, null) ? IntPtr.Zero : textureUnit.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadSgmaterialserializerlistener = LoadDll.Load("EV_RTShaderSystem_d.dll");
							private static bool csbLoadSgmaterialserializerlistener = LoadDll.Load("EV_RTShaderSystem_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadSgmaterialserializerlistener = LoadDll.Load("EV_RTShaderSystem_d.so");
							private static bool csbLoadSgmaterialserializerlistener = LoadDll.Load("EV_RTShaderSystem_CSharp_d.so");

						#else 
							private static bool bLoadSgmaterialserializerlistener = LoadDll.Load("EV_RTShaderSystem_d.dll");
							private static bool csbLoadSgmaterialserializerlistener = LoadDll.Load("EV_RTShaderSystem_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadSgmaterialserializerlistener = LoadDll.Load("EV_RTShaderSystem.dll");
							private static bool csbLoadSgmaterialserializerlistener = LoadDll.Load("EV_RTShaderSystem_CSharp.dll");

						#elif Linux 
							private static bool bLoadSgmaterialserializerlistener = LoadDll.Load("EV_RTShaderSystem.so");
							private static bool csbLoadSgmaterialserializerlistener = LoadDll.Load("EV_RTShaderSystem_CSharp.so");

						#else 
							private static bool bLoadSgmaterialserializerlistener = LoadDll.Load("EV_RTShaderSystem.dll");
							private static bool csbLoadSgmaterialserializerlistener = LoadDll.Load("EV_RTShaderSystem_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener", new SgmaterialserializerlistenerClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListenerProxy", new SgmaterialserializerlistenerClassFactory());

					public Sgmaterialserializerlistener(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_materialEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial(IntPtr pObject, materialEventRaised_CallBack_void_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_techniqueEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique(IntPtr pObject, techniqueEventRaised_CallBack_void_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_passEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CPass(IntPtr pObject, passEventRaised_CallBack_void_CMaterialSerializer_SerializeEvent_ev_bool_CPass pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_textureUnitStateEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState(IntPtr pObject, textureUnitStateEventRaised_CallBack_void_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_materialEventRaised_CallBack_void_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial = EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_materialEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial_Function;
							GC.KeepAlive(m_materialEventRaised_CallBack_void_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_materialEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial(this.NativeObject, m_materialEventRaised_CallBack_void_CMaterialSerializer_SerializeEvent_ev_bool_CMaterial);
							m_techniqueEventRaised_CallBack_void_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique = EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_techniqueEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique_Function;
							GC.KeepAlive(m_techniqueEventRaised_CallBack_void_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_techniqueEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique(this.NativeObject, m_techniqueEventRaised_CallBack_void_CMaterialSerializer_SerializeEvent_ev_bool_CTechnique);
							m_passEventRaised_CallBack_void_CMaterialSerializer_SerializeEvent_ev_bool_CPass = EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_passEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CPass_Function;
							GC.KeepAlive(m_passEventRaised_CallBack_void_CMaterialSerializer_SerializeEvent_ev_bool_CPass);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_passEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CPass(this.NativeObject, m_passEventRaised_CallBack_void_CMaterialSerializer_SerializeEvent_ev_bool_CPass);
							m_textureUnitStateEventRaised_CallBack_void_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState = EarthView_World_Graphic_CMaterialSerializer_CMaterialSerializerListener_textureUnitStateEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState_Function;
							GC.KeepAlive(m_textureUnitStateEventRaised_CallBack_void_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSGMaterialSerializerListener_textureUnitStateEventRaised_void_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState(this.NativeObject, m_textureUnitStateEventRaised_CallBack_void_CMaterialSerializer_SerializeEvent_ev_bool_CTextureUnitState);
						}
					}
					public static Sgmaterialserializerlistener FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Sgmaterialserializerlistener obj = baseObj as  Sgmaterialserializerlistener;
						if (object.Equals(obj, null))
						{
							obj = new Sgmaterialserializerlistener(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CSGMaterialSerializerListener");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class SgmaterialserializerlistenerClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Sgmaterialserializerlistener emptyInstance = new Sgmaterialserializerlistener(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
