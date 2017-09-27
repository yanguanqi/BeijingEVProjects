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
			namespace Geometry
			{
			}
		}
		namespace Geometry3D
		{
			/// <summary>
			///屏幕点类
			/// </summary>
			public class ScreenPolygon : EarthView.World.Geometry3D.ScreenGeometry
			{
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="scenemanager">场景管理器</param>
				/// <param name="type">点类型</param>
				/// <param name="estimatedCount">预设点个数</param>
				/// <returns></returns>
				public ScreenPolygon(EarthView.World.Graphic.SceneManager ref_scenemanager) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueref_scenemanager = new BasePtr(ref_scenemanager);
					list.Add("ref_scenemanager", valueref_scenemanager.PtrVal);
					Create("CScreenPolygonProxy", list);
					if (!"EarthView.World.Geometry3D.ScreenPolygon".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="scenemanager">场景管理器</param>
				/// <param name="type">点类型</param>
				/// <param name="estimatedCount">预设点个数</param>
				/// <param name="texture">纹理图片流</param>
				/// <returns></returns>
				public ScreenPolygon(EarthView.World.Graphic.SceneManager ref_scenemanager, ref EarthView.World.Core.DataStreamPtr texture) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueref_scenemanager = new BasePtr(ref_scenemanager);
					list.Add("ref_scenemanager", valueref_scenemanager.PtrVal);
					BasePtr valuetexture = new BasePtr(texture);
					list.Add("texture", valuetexture.PtrVal);
					Create("CScreenPolygonProxy", list);
					if (!"EarthView.World.Geometry3D.ScreenPolygon".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Geometry3D_CScreenPolygon_begin_void(IntPtr pNativeObject);

				/// <summary>
				/// 开始追加多边形,render之后无效
				/// </summary>
				/// <returns></returns>
				public void Begin()
				{
					EarthView_World_Geometry3D_CScreenPolygon_begin_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Geometry3D_CScreenPolygon_appendPolygon_void_CPolygon_CColourValue(IntPtr pNativeObject, IntPtr polygon, IntPtr color);

				/// <summary>
				/// 追加多边形
				/// </summary>
				/// <param name="color">颜色</param>
				/// <param name="polygon">无参考系的二维面,坐标用x和z，坐标类型和设置的屏幕坐标类型一致</param>
				/// <returns></returns>
				public void AppendPolygon(EarthView.World.Spatial.Geometry.Polygon polygon, EarthView.World.Graphic.ColourValue color)
				{
					EarthView_World_Geometry3D_CScreenPolygon_appendPolygon_void_CPolygon_CColourValue(this.NativeObject, object.Equals(polygon, null) ? IntPtr.Zero : polygon.NativeObject, object.Equals(color, null) ? IntPtr.Zero : color.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Geometry3D_CScreenPolygon_appendPolygon_void_CPolygon(IntPtr pNativeObject, IntPtr polygon);

				public void AppendPolygon(EarthView.World.Spatial.Geometry.Polygon polygon)
				{
					EarthView_World_Geometry3D_CScreenPolygon_appendPolygon_void_CPolygon(this.NativeObject, object.Equals(polygon, null) ? IntPtr.Zero : polygon.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Geometry3D_CScreenPolygon_end_void(IntPtr pNativeObject);

				/// <summary>
				/// 结束追加多边形,开始进行多边形分割，创建buffer
				/// </summary>
				/// <returns></returns>
				public void End()
				{
					EarthView_World_Geometry3D_CScreenPolygon_end_void(this.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadScreenPolygon = LoadDll.Load("EV_Geometry3D_d.dll");
						private static bool csbLoadScreenPolygon = LoadDll.Load("EV_Geometry3D_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadScreenPolygon = LoadDll.Load("EV_Geometry3D_d.so");
						private static bool csbLoadScreenPolygon = LoadDll.Load("EV_Geometry3D_CSharp_d.so");

					#else 
						private static bool bLoadScreenPolygon = LoadDll.Load("EV_Geometry3D_d.dll");
						private static bool csbLoadScreenPolygon = LoadDll.Load("EV_Geometry3D_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadScreenPolygon = LoadDll.Load("EV_Geometry3D.dll");
						private static bool csbLoadScreenPolygon = LoadDll.Load("EV_Geometry3D_CSharp.dll");

					#elif Linux 
						private static bool bLoadScreenPolygon = LoadDll.Load("EV_Geometry3D.so");
						private static bool csbLoadScreenPolygon = LoadDll.Load("EV_Geometry3D_CSharp.so");

					#else 
						private static bool bLoadScreenPolygon = LoadDll.Load("EV_Geometry3D.dll");
						private static bool csbLoadScreenPolygon = LoadDll.Load("EV_Geometry3D_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CScreenPolygon", new ScreenPolygonClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CScreenPolygonProxy", new ScreenPolygonClassFactory());

				public ScreenPolygon(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CScreenPolygon_render_void(IntPtr pObject, render_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CScreenPolygon_derender_void(IntPtr pObject, derender_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CScreenPolygon_setVisible_void_ev_bool(IntPtr pObject, setVisible_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CScreenPolygon_getVisible_ev_bool(IntPtr pObject, getVisible_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CScreenPolygon_setRenderQueueGroup_void_ev_uint8(IntPtr pObject, setRenderQueueGroup_CallBack_void_ev_uint8 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CScreenPolygon_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16(IntPtr pObject, setRenderQueueGroupAndPriority_CallBack_void_ev_uint8_ev_uint16 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CScreenPolygon_getRenderQueueGroup_ev_uint8(IntPtr pObject, getRenderQueueGroup_CallBack_ev_uint8 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CScreenPolygon_getMaterial_CMaterialPtr(IntPtr pObject, getMaterial_CallBack_CMaterialPtr pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CScreenPolygon_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32(IntPtr pObject, flash_CallBack_void_CColourValue_ev_uint32_ev_uint32_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CScreenPolygon_endFlash_void(IntPtr pObject, endFlash_CallBack_void pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_render_CallBack_void = EarthView_World_Geometry3D_CScreenGeometry_render_void_Function;
						GC.KeepAlive(m_render_CallBack_void);
						EV_RegisterCallback_EarthView_World_Geometry3D_CScreenPolygon_render_void(this.NativeObject, m_render_CallBack_void);
						m_derender_CallBack_void = EarthView_World_Geometry3D_CScreenGeometry_derender_void_Function;
						GC.KeepAlive(m_derender_CallBack_void);
						EV_RegisterCallback_EarthView_World_Geometry3D_CScreenPolygon_derender_void(this.NativeObject, m_derender_CallBack_void);
						m_setVisible_CallBack_void_ev_bool = EarthView_World_Geometry3D_CScreenGeometry_setVisible_void_ev_bool_Function;
						GC.KeepAlive(m_setVisible_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Geometry3D_CScreenPolygon_setVisible_void_ev_bool(this.NativeObject, m_setVisible_CallBack_void_ev_bool);
						m_getVisible_CallBack_ev_bool = EarthView_World_Geometry3D_CScreenGeometry_getVisible_ev_bool_Function;
						GC.KeepAlive(m_getVisible_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Geometry3D_CScreenPolygon_getVisible_ev_bool(this.NativeObject, m_getVisible_CallBack_ev_bool);
						m_setRenderQueueGroup_CallBack_void_ev_uint8 = EarthView_World_Geometry3D_CScreenGeometry_setRenderQueueGroup_void_ev_uint8_Function;
						GC.KeepAlive(m_setRenderQueueGroup_CallBack_void_ev_uint8);
						EV_RegisterCallback_EarthView_World_Geometry3D_CScreenPolygon_setRenderQueueGroup_void_ev_uint8(this.NativeObject, m_setRenderQueueGroup_CallBack_void_ev_uint8);
						m_setRenderQueueGroupAndPriority_CallBack_void_ev_uint8_ev_uint16 = EarthView_World_Geometry3D_CScreenGeometry_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Function;
						GC.KeepAlive(m_setRenderQueueGroupAndPriority_CallBack_void_ev_uint8_ev_uint16);
						EV_RegisterCallback_EarthView_World_Geometry3D_CScreenPolygon_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16(this.NativeObject, m_setRenderQueueGroupAndPriority_CallBack_void_ev_uint8_ev_uint16);
						m_getRenderQueueGroup_CallBack_ev_uint8 = EarthView_World_Geometry3D_CScreenGeometry_getRenderQueueGroup_ev_uint8_Function;
						GC.KeepAlive(m_getRenderQueueGroup_CallBack_ev_uint8);
						EV_RegisterCallback_EarthView_World_Geometry3D_CScreenPolygon_getRenderQueueGroup_ev_uint8(this.NativeObject, m_getRenderQueueGroup_CallBack_ev_uint8);
						m_getMaterial_CallBack_CMaterialPtr = EarthView_World_Geometry3D_CScreenGeometry_getMaterial_CMaterialPtr_Function;
						GC.KeepAlive(m_getMaterial_CallBack_CMaterialPtr);
						EV_RegisterCallback_EarthView_World_Geometry3D_CScreenPolygon_getMaterial_CMaterialPtr(this.NativeObject, m_getMaterial_CallBack_CMaterialPtr);
						m_flash_CallBack_void_CColourValue_ev_uint32_ev_uint32_ev_uint32 = EarthView_World_Geometry3D_CScreenGeometry_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32_Function;
						GC.KeepAlive(m_flash_CallBack_void_CColourValue_ev_uint32_ev_uint32_ev_uint32);
						EV_RegisterCallback_EarthView_World_Geometry3D_CScreenPolygon_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32(this.NativeObject, m_flash_CallBack_void_CColourValue_ev_uint32_ev_uint32_ev_uint32);
						m_endFlash_CallBack_void = EarthView_World_Geometry3D_CScreenGeometry_endFlash_void_Function;
						GC.KeepAlive(m_endFlash_CallBack_void);
						EV_RegisterCallback_EarthView_World_Geometry3D_CScreenPolygon_endFlash_void(this.NativeObject, m_endFlash_CallBack_void);
					}
				}
				public override void Render()
				{
					base.Render_NoVirtual();
				}
				public override void Derender()
				{
					base.Derender_NoVirtual();
				}
				public override void SetVisible(bool visible)
				{
					base.SetVisible_NoVirtual(visible);
				}
				public override bool GetVisible()
				{
					return base.GetVisible_NoVirtual();
				}
				public override void SetRenderQueueGroup(byte queueID)
				{
					base.SetRenderQueueGroup_NoVirtual(queueID);
				}
				public override void SetRenderQueueGroupAndPriority(byte queueID, ushort priority)
				{
					base.SetRenderQueueGroupAndPriority_NoVirtual(queueID,priority);
				}
				public override byte GetRenderQueueGroup()
				{
					return base.GetRenderQueueGroup_NoVirtual();
				}
				public override EarthView.World.Graphic.MaterialPtr GetMaterial()
				{
					return base.GetMaterial_NoVirtual();
				}
				public override void Flash(EarthView.World.Graphic.ColourValue color, uint hightLight_ms, uint normally_ms, uint flashCount)
				{
					base.Flash_NoVirtual(color,hightLight_ms,normally_ms,flashCount);
				}
				public override void EndFlash()
				{
					base.EndFlash_NoVirtual();
				}
				public static ScreenPolygon FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					ScreenPolygon obj = baseObj as  ScreenPolygon;
					if (object.Equals(obj, null))
					{
						obj = new ScreenPolygon(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CScreenPolygon");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class ScreenPolygonClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					ScreenPolygon emptyInstance = new ScreenPolygon(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
