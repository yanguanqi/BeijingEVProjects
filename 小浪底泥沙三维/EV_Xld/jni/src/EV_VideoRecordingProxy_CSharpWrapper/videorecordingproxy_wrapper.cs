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
		namespace UtilityTools
		{
			public class VideoRecording : EarthView.World.Core.BaseObject
			{
				public VideoRecording() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("VideoRecording",  null);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_VideoRecordingProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_VideoRecordingProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_VideoRecordingProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_VideoRecordingProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_VideoRecordingProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_VideoRecordingProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_VideoRecordingProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_VideoRecordingProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_UtilityTools_VideoRecording_startRecordAsync_void_EVString_Rect_ev_int32_ev_bool(IntPtr pNativeObject, string filePath, IntPtr rectRegion, int framerate, byte bHighQuality);

				///<summary>
				///异步实现录制
				/// </summary>
				///<param name="filePath">视频文件保存路径</param>
				/// <param name="rectRegion">视频录制区域</param>
				/// <param name="framerate">视频录制帧率</param>
				/// <param name="bHighQuality">是否录制高清视频</param>
				/// <returns>无</returns>
				public void StartRecordAsync(string filePath, EarthView.World.Graphic.Rect rectRegion, int framerate, bool bHighQuality)
				{
					EarthView_World_UtilityTools_VideoRecording_startRecordAsync_void_EVString_Rect_ev_int32_ev_bool(this.NativeObject, filePath, object.Equals(rectRegion, null) ? IntPtr.Zero : rectRegion.NativeObject, framerate, Convert.ToByte(bHighQuality));
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_VideoRecordingProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_VideoRecordingProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_VideoRecordingProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_VideoRecordingProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_VideoRecordingProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_VideoRecordingProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_VideoRecordingProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_VideoRecordingProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_UtilityTools_VideoRecording_stopRecord_void(IntPtr pNativeObject);

				/// <summary>
				/// 屏幕录制停止
				/// </summary>
				/// <returns>无</returns>
				public void StopRecord()
				{
					EarthView_World_UtilityTools_VideoRecording_stopRecord_void(this.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadVideoRecording = LoadDll.Load("EV_VideoRecordingProxy_d.dll");
						private static bool csbLoadVideoRecording = LoadDll.Load("EV_VideoRecordingProxy_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadVideoRecording = LoadDll.Load("EV_VideoRecordingProxy_d.so");
						private static bool csbLoadVideoRecording = LoadDll.Load("EV_VideoRecordingProxy_CSharp_d.so");

					#else 
						private static bool bLoadVideoRecording = LoadDll.Load("EV_VideoRecordingProxy_d.dll");
						private static bool csbLoadVideoRecording = LoadDll.Load("EV_VideoRecordingProxy_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadVideoRecording = LoadDll.Load("EV_VideoRecordingProxy.dll");
						private static bool csbLoadVideoRecording = LoadDll.Load("EV_VideoRecordingProxy_CSharp.dll");

					#elif Linux 
						private static bool bLoadVideoRecording = LoadDll.Load("EV_VideoRecordingProxy.so");
						private static bool csbLoadVideoRecording = LoadDll.Load("EV_VideoRecordingProxy_CSharp.so");

					#else 
						private static bool bLoadVideoRecording = LoadDll.Load("EV_VideoRecordingProxy.dll");
						private static bool csbLoadVideoRecording = LoadDll.Load("EV_VideoRecordingProxy_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::UtilityTools::VideoRecording", new VideoRecordingClassFactory());

				public VideoRecording(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static VideoRecording FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					VideoRecording obj = baseObj as  VideoRecording;
					if (object.Equals(obj, null))
					{
						obj = new VideoRecording(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "VideoRecording");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class VideoRecordingClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					VideoRecording emptyInstance = new VideoRecording(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
