/********* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc *********/
using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;
using EarthView.World.Graphic;
using EarthView.World.Core;

namespace Video
{
	public class VideoPlayer : EarthView.World.Core.BaseObject
	{
		public VideoPlayer() : base(CreatedWhenConstruct.CWC_NotToCreate)
		{
			Create("VideoPlayer",  null);
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
		private static extern byte Video_VideoPlayer_hasAudioStream_ev_bool(IntPtr pNativeObject);

		public bool HasAudioStream()
		{
			byte ret=Video_VideoPlayer_hasAudioStream_ev_bool(this.NativeObject);
			
			return Convert.ToBoolean(ret);
			
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
		private static extern void Video_VideoPlayer_playVideo_void_EVString_ev_bool(IntPtr pNativeObject, string resourceName, byte bPlayLoop);

		public void PlayVideo(string resourceName, bool bPlayLoop)
		{
			Video_VideoPlayer_playVideo_void_EVString_ev_bool(this.NativeObject, resourceName, Convert.ToByte(bPlayLoop));
			
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
		private static extern void Video_VideoPlayer_playVideo_void_EVString_CTexturePtr_ev_bool(IntPtr pNativeObject, string resourceName, IntPtr texturePtr, byte bPlayLoop);

		public void PlayVideo(string resourceName, ref EarthView.World.Graphic.TexturePtr texturePtr, bool bPlayLoop)
		{
			Video_VideoPlayer_playVideo_void_EVString_CTexturePtr_ev_bool(this.NativeObject, resourceName, object.Equals(texturePtr, null) ? IntPtr.Zero : texturePtr.NativeObject, Convert.ToByte(bPlayLoop));
			
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
		private static extern double Video_VideoPlayer_getCurrentTime_ev_real64(IntPtr pNativeObject);

		public double GetCurrentTime()
		{
			double ret=Video_VideoPlayer_getCurrentTime_ev_real64(this.NativeObject);
			
			return ret;
			
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
		private static extern double Video_VideoPlayer_getDuration_ev_real64(IntPtr pNativeObject);

		public double GetDuration()
		{
			double ret=Video_VideoPlayer_getDuration_ev_real64(this.NativeObject);
			
			return ret;
			
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
		private static extern void Video_VideoPlayer_seek_void_ev_real64(IntPtr pNativeObject, double time);

		public void Seek(double time)
		{
			Video_VideoPlayer_seek_void_ev_real64(this.NativeObject, time);
			
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
		private static extern void Video_VideoPlayer_play_void(IntPtr pNativeObject);

		public void Play()
		{
			Video_VideoPlayer_play_void(this.NativeObject);
			
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
		private static extern void Video_VideoPlayer_pause_void(IntPtr pNativeObject);

		public void Pause()
		{
			Video_VideoPlayer_pause_void(this.NativeObject);
			
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
		private static extern byte Video_VideoPlayer_isPaused_ev_bool(IntPtr pNativeObject);

		public bool IsPaused()
		{
			byte ret=Video_VideoPlayer_isPaused_ev_bool(this.NativeObject);
			
			return Convert.ToBoolean(ret);
			
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
		private static extern byte Video_VideoPlayer_update_ev_bool(IntPtr pNativeObject);

		public bool Update()
		{
			byte ret=Video_VideoPlayer_update_ev_bool(this.NativeObject);
			
			return Convert.ToBoolean(ret);
			
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
		private static extern void Video_VideoPlayer_close_void(IntPtr pNativeObject);

		public void Close()
		{
			Video_VideoPlayer_close_void(this.NativeObject);
			
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
		private static extern IntPtr Video_VideoPlayer_getTextureName_EVString(IntPtr pNativeObject);

		public string GetTextureName()
		{
			IntPtr __ptr = Video_VideoPlayer_getTextureName_EVString(this.NativeObject);
			
			string ret = Marshal.PtrToStringAnsi(__ptr);
			ClassFactory.FreeString(ref __ptr);
			return ret;
			
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
		private static extern uint Video_VideoPlayer_getVideoWidth_ev_uint32(IntPtr pNativeObject);

		public uint GetVideoWidth()
		{
			uint ret=Video_VideoPlayer_getVideoWidth_ev_uint32(this.NativeObject);
			
			return ret;
			
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
		private static extern uint Video_VideoPlayer_getVideoHeight_ev_uint32(IntPtr pNativeObject);

		public uint GetVideoHeight()
		{
			uint ret=Video_VideoPlayer_getVideoHeight_ev_uint32(this.NativeObject);
			
			return ret;
			
		}

		#if DEBUG 
			#if Windows 
				private static bool bLoadVideoPlayer = LoadDll.Load("EV_VideoRecordingProxy_d.dll");
				private static bool csbLoadVideoPlayer = LoadDll.Load("EV_VideoRecordingProxy_CSharp_d.dll");

			#elif Linux 
				private static bool bLoadVideoPlayer = LoadDll.Load("EV_VideoRecordingProxy_d.so");
				private static bool csbLoadVideoPlayer = LoadDll.Load("EV_VideoRecordingProxy_CSharp_d.so");

			#else 
				private static bool bLoadVideoPlayer = LoadDll.Load("EV_VideoRecordingProxy_d.dll");
				private static bool csbLoadVideoPlayer = LoadDll.Load("EV_VideoRecordingProxy_CSharp_d.dll");

			#endif 
		#else 
			#if Windows 
				private static bool bLoadVideoPlayer = LoadDll.Load("EV_VideoRecordingProxy.dll");
				private static bool csbLoadVideoPlayer = LoadDll.Load("EV_VideoRecordingProxy_CSharp.dll");

			#elif Linux 
				private static bool bLoadVideoPlayer = LoadDll.Load("EV_VideoRecordingProxy.so");
				private static bool csbLoadVideoPlayer = LoadDll.Load("EV_VideoRecordingProxy_CSharp.so");

			#else 
				private static bool bLoadVideoPlayer = LoadDll.Load("EV_VideoRecordingProxy.dll");
				private static bool csbLoadVideoPlayer = LoadDll.Load("EV_VideoRecordingProxy_CSharp.dll");

			#endif 
		#endif 

		private static bool registerStatus = GlobalClassFactoryMap.Put("Video::VideoPlayer", new VideoPlayerClassFactory());

		public VideoPlayer(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
		{
		}

		public override void RegisterCallBack()
		{
			if (this.NativeObject != IntPtr.Zero)
			{
			}
		}
		public static VideoPlayer FromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
				return null;
			VideoPlayer obj = baseObj as  VideoPlayer;
			if (object.Equals(obj, null))
			{
				obj = new VideoPlayer(CreatedWhenConstruct.CWC_NotToCreate);
				obj.BindNativeObject(baseObj.NativeObject, "VideoPlayer");
				obj.IncreaseCast();
			}

			return obj;
		}
	}

	public class VideoPlayerClassFactory : IClassFactory
	{
		public BaseObject Create()
		{
			VideoPlayer emptyInstance = new VideoPlayer(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}

}
