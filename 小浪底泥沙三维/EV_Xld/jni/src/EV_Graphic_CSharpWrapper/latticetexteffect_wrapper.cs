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
		namespace Spatial
		{
			namespace Math
			{
			}
		}
		namespace Graphic
		{
			public class Ilatticetexteffect : EarthView.World.Core.AllocatedObject
			{
				///<summary>
				/// 构造函数
				///</summary>				
				public Ilatticetexteffect() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("ILatticeTextEffect",  null);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				public Ilatticetexteffect(uint argb) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueargb = new BasePtr(argb);
					list.Add("argb", valueargb.PtrVal);
					Create("ILatticeTextEffect", list);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				public Ilatticetexteffect(EarthView.World.Graphic.ColourValue color) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valuecolor = new BasePtr(color);
					list.Add("color", valuecolor.PtrVal);
					Create("ILatticeTextEffect", list);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_ILatticeTextEffect_setColor_void_ev_uint32(IntPtr pNativeObject, uint argb);

				///<summary>
				/// 设置颜色 注意:此重载版本不处理OpenGL和D3D的颜色2进制值编码顺序问题
				///</summary>
				///<param name="color">包括alpha值在内的颜色值,若值为0x0, 附件效果元素的颜色将和可渲染文本一致</param>
				public void SetColor(uint argb)
				{
					EarthView_World_Graphic_ILatticeTextEffect_setColor_void_ev_uint32(this.NativeObject, argb);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_ILatticeTextEffect_setColor_void_CColourValue(IntPtr pNativeObject, IntPtr color);

				///<summary>
				/// 设置颜色
				///</summary>
				///<param name="color">包括alpha值在内的颜色值,若值为CColourValue(0.0,0.0,0.0,0.0), 附件效果元素的颜色将和可渲染文本一致</param>
				public void SetColor(EarthView.World.Graphic.ColourValue color)
				{
					EarthView_World_Graphic_ILatticeTextEffect_setColor_void_CColourValue(this.NativeObject, object.Equals(color, null) ? IntPtr.Zero : color.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern uint EarthView_World_Graphic_ILatticeTextEffect_getColor_ev_uint32(IntPtr pNativeObject);

				///<summary>
				/// 获取颜色
				///</summary>
				///<returns>颜色二进制值</returns>
				public uint GetColor()
				{
					uint ret=EarthView_World_Graphic_ILatticeTextEffect_getColor_ev_uint32(this.NativeObject);
					
					return ret;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadIlatticetexteffect = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadIlatticetexteffect = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadIlatticetexteffect = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadIlatticetexteffect = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadIlatticetexteffect = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadIlatticetexteffect = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadIlatticetexteffect = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadIlatticetexteffect = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadIlatticetexteffect = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadIlatticetexteffect = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadIlatticetexteffect = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadIlatticetexteffect = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::ILatticeTextEffect", new IlatticetexteffectClassFactory());

				public Ilatticetexteffect(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static Ilatticetexteffect FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					Ilatticetexteffect obj = baseObj as  Ilatticetexteffect;
					if (object.Equals(obj, null))
					{
						obj = new Ilatticetexteffect(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "ILatticeTextEffect");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class IlatticetexteffectClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					Ilatticetexteffect emptyInstance = new Ilatticetexteffect(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
