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
			public enum SKELETONVERSION
			{
						SKELETON_VERSION_1_0,
						SKELETON_VERSION_1_8,
						SKELETON_VERSION_LATEST = 100,
						SKELETON_VERSION_X_SPECIAL = 101
			
			}

			public class SkeletonSerializer : EarthView.World.Graphic.Serializer
			{
				public SkeletonSerializer() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CSkeletonSerializerProxy", null);
					if (!"EarthView.World.Graphic.SkeletonSerializer".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
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
				private static extern void EarthView_World_Graphic_CSkeletonSerializer_exportSkeleton_void_CSkeleton_EVString(IntPtr pNativeObject, IntPtr pSkeleton, string filename);

				public void ExportSkeleton(EarthView.World.Graphic.Skeleton pSkeleton, string filename)
				{
					EarthView_World_Graphic_CSkeletonSerializer_exportSkeleton_void_CSkeleton_EVString(this.NativeObject, object.Equals(pSkeleton, null) ? IntPtr.Zero : pSkeleton.NativeObject, filename);
					
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
				private static extern void EarthView_World_Graphic_CSkeletonSerializer_exportSkeleton_void_CSkeleton_EVString_SkeletonVersion(IntPtr pNativeObject, IntPtr pSkeleton, string filename, EarthView.World.Graphic.SKELETONVERSION ver);

				public void ExportSkeleton(EarthView.World.Graphic.Skeleton pSkeleton, string filename, EarthView.World.Graphic.SKELETONVERSION ver)
				{
					EarthView_World_Graphic_CSkeletonSerializer_exportSkeleton_void_CSkeleton_EVString_SkeletonVersion(this.NativeObject, object.Equals(pSkeleton, null) ? IntPtr.Zero : pSkeleton.NativeObject, filename, ver);
					
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
				private static extern void EarthView_World_Graphic_CSkeletonSerializer_exportSkeleton_void_CSkeleton_EVString_SkeletonVersion_Endian(IntPtr pNativeObject, IntPtr pSkeleton, string filename, EarthView.World.Graphic.SKELETONVERSION ver, EarthView.World.Graphic.Serializer.ENDIAN endianMode);

				public void ExportSkeleton(EarthView.World.Graphic.Skeleton pSkeleton, string filename, EarthView.World.Graphic.SKELETONVERSION ver, EarthView.World.Graphic.Serializer.ENDIAN endianMode)
				{
					EarthView_World_Graphic_CSkeletonSerializer_exportSkeleton_void_CSkeleton_EVString_SkeletonVersion_Endian(this.NativeObject, object.Equals(pSkeleton, null) ? IntPtr.Zero : pSkeleton.NativeObject, filename, ver, endianMode);
					
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
				private static extern void EarthView_World_Graphic_CSkeletonSerializer_exportSkeleton_void_CSkeleton_DataStreamPtr(IntPtr pNativeObject, IntPtr pSkeleton, IntPtr stream);

				public void ExportSkeleton(EarthView.World.Graphic.Skeleton pSkeleton, EarthView.World.Core.DataStreamPtr stream)
				{
					EarthView_World_Graphic_CSkeletonSerializer_exportSkeleton_void_CSkeleton_DataStreamPtr(this.NativeObject, object.Equals(pSkeleton, null) ? IntPtr.Zero : pSkeleton.NativeObject, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CSkeletonSerializer_exportSkeleton_void_CSkeleton_DataStreamPtr_SkeletonVersion(IntPtr pNativeObject, IntPtr pSkeleton, IntPtr stream, EarthView.World.Graphic.SKELETONVERSION ver);

				public void ExportSkeleton(EarthView.World.Graphic.Skeleton pSkeleton, EarthView.World.Core.DataStreamPtr stream, EarthView.World.Graphic.SKELETONVERSION ver)
				{
					EarthView_World_Graphic_CSkeletonSerializer_exportSkeleton_void_CSkeleton_DataStreamPtr_SkeletonVersion(this.NativeObject, object.Equals(pSkeleton, null) ? IntPtr.Zero : pSkeleton.NativeObject, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject, ver);
					
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
				private static extern void EarthView_World_Graphic_CSkeletonSerializer_exportSkeleton_void_CSkeleton_DataStreamPtr_SkeletonVersion_Endian(IntPtr pNativeObject, IntPtr pSkeleton, IntPtr stream, EarthView.World.Graphic.SKELETONVERSION ver, EarthView.World.Graphic.Serializer.ENDIAN endianMode);

				public void ExportSkeleton(EarthView.World.Graphic.Skeleton pSkeleton, EarthView.World.Core.DataStreamPtr stream, EarthView.World.Graphic.SKELETONVERSION ver, EarthView.World.Graphic.Serializer.ENDIAN endianMode)
				{
					EarthView_World_Graphic_CSkeletonSerializer_exportSkeleton_void_CSkeleton_DataStreamPtr_SkeletonVersion_Endian(this.NativeObject, object.Equals(pSkeleton, null) ? IntPtr.Zero : pSkeleton.NativeObject, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject, ver, endianMode);
					
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
				private static extern void EarthView_World_Graphic_CSkeletonSerializer_importSkeleton_void_DataStreamPtr_CSkeleton(IntPtr pNativeObject, IntPtr stream, IntPtr pDest);

				public void ImportSkeleton(EarthView.World.Core.DataStreamPtr stream, EarthView.World.Graphic.Skeleton pDest)
				{
					EarthView_World_Graphic_CSkeletonSerializer_importSkeleton_void_DataStreamPtr_CSkeleton(this.NativeObject, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject, object.Equals(pDest, null) ? IntPtr.Zero : pDest.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CSkeletonSerializer_readFileHeader_void_DataStreamPtr_NoVirtual(IntPtr pNativeObject, IntPtr stream);

				protected new void ReadFileHeader_NoVirtual(EarthView.World.Core.DataStreamPtr stream)
				{
					EarthView_World_Graphic_CSkeletonSerializer_readFileHeader_void_DataStreamPtr_NoVirtual(this.NativeObject, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CSkeletonSerializer_readFileHeader_void_DataStreamPtr(IntPtr pNativeObject, IntPtr stream);

				protected override void ReadFileHeader(EarthView.World.Core.DataStreamPtr stream)
				{
					EarthView_World_Graphic_CSkeletonSerializer_readFileHeader_void_DataStreamPtr(this.NativeObject, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadSkeletonSerializer = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadSkeletonSerializer = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadSkeletonSerializer = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadSkeletonSerializer = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadSkeletonSerializer = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadSkeletonSerializer = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadSkeletonSerializer = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadSkeletonSerializer = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadSkeletonSerializer = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadSkeletonSerializer = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadSkeletonSerializer = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadSkeletonSerializer = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CSkeletonSerializer", new SkeletonSerializerClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CSkeletonSerializerProxy", new SkeletonSerializerClassFactory());

				public SkeletonSerializer(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CSkeletonSerializer_writeFileHeader_void(IntPtr pObject, writeFileHeader_CallBack_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CSkeletonSerializer_writeChunkHeader_void_ev_uint16_ev_size_t(IntPtr pObject, writeChunkHeader_CallBack_void_ev_uint16_ev_size_t pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CSkeletonSerializer_readFileHeader_void_DataStreamPtr(IntPtr pObject, readFileHeader_CallBack_void_DataStreamPtr pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CSkeletonSerializer_readChunk_ev_uint16_DataStreamPtr(IntPtr pObject, readChunk_CallBack_ev_uint16_DataStreamPtr pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CSkeletonSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t(IntPtr pObject, flipToLittleEndian_CallBack_void_void_ev_size_t_ev_size_t pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CSkeletonSerializer_flipToLittleEndian_void_void_ev_size_t(IntPtr pObject, flipToLittleEndian_CallBack_void_void_ev_size_t pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CSkeletonSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t(IntPtr pObject, flipFromLittleEndian_CallBack_void_void_ev_size_t_ev_size_t pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CSkeletonSerializer_flipFromLittleEndian_void_void_ev_size_t(IntPtr pObject, flipFromLittleEndian_CallBack_void_void_ev_size_t pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CSkeletonSerializer_flipEndian_void_void_ev_size_t_ev_size_t(IntPtr pObject, flipEndian_CallBack_void_void_ev_size_t_ev_size_t pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CSkeletonSerializer_flipEndian_void_void_ev_size_t(IntPtr pObject, flipEndian_CallBack_void_void_ev_size_t pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CSkeletonSerializer_determineEndianness_void_DataStreamPtr(IntPtr pObject, determineEndianness_CallBack_void_DataStreamPtr pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CSkeletonSerializer_determineEndianness_void_Endian(IntPtr pObject, determineEndianness_CallBack_void_Endian pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_writeFileHeader_CallBack_void = EarthView_World_Graphic_CSerializer_writeFileHeader_void_Function;
						GC.KeepAlive(m_writeFileHeader_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CSkeletonSerializer_writeFileHeader_void(this.NativeObject, m_writeFileHeader_CallBack_void);
						m_writeChunkHeader_CallBack_void_ev_uint16_ev_size_t = EarthView_World_Graphic_CSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Function;
						GC.KeepAlive(m_writeChunkHeader_CallBack_void_ev_uint16_ev_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_CSkeletonSerializer_writeChunkHeader_void_ev_uint16_ev_size_t(this.NativeObject, m_writeChunkHeader_CallBack_void_ev_uint16_ev_size_t);
						m_readFileHeader_CallBack_void_DataStreamPtr = EarthView_World_Graphic_CSerializer_readFileHeader_void_DataStreamPtr_Function;
						GC.KeepAlive(m_readFileHeader_CallBack_void_DataStreamPtr);
						EV_RegisterCallback_EarthView_World_Graphic_CSkeletonSerializer_readFileHeader_void_DataStreamPtr(this.NativeObject, m_readFileHeader_CallBack_void_DataStreamPtr);
						m_readChunk_CallBack_ev_uint16_DataStreamPtr = EarthView_World_Graphic_CSerializer_readChunk_ev_uint16_DataStreamPtr_Function;
						GC.KeepAlive(m_readChunk_CallBack_ev_uint16_DataStreamPtr);
						EV_RegisterCallback_EarthView_World_Graphic_CSkeletonSerializer_readChunk_ev_uint16_DataStreamPtr(this.NativeObject, m_readChunk_CallBack_ev_uint16_DataStreamPtr);
						m_flipToLittleEndian_CallBack_void_void_ev_size_t_ev_size_t = EarthView_World_Graphic_CSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Function;
						GC.KeepAlive(m_flipToLittleEndian_CallBack_void_void_ev_size_t_ev_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_CSkeletonSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t(this.NativeObject, m_flipToLittleEndian_CallBack_void_void_ev_size_t_ev_size_t);
						m_flipToLittleEndian_CallBack_void_void_ev_size_t = EarthView_World_Graphic_CSerializer_flipToLittleEndian_void_void_ev_size_t_Function;
						GC.KeepAlive(m_flipToLittleEndian_CallBack_void_void_ev_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_CSkeletonSerializer_flipToLittleEndian_void_void_ev_size_t(this.NativeObject, m_flipToLittleEndian_CallBack_void_void_ev_size_t);
						m_flipFromLittleEndian_CallBack_void_void_ev_size_t_ev_size_t = EarthView_World_Graphic_CSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Function;
						GC.KeepAlive(m_flipFromLittleEndian_CallBack_void_void_ev_size_t_ev_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_CSkeletonSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t(this.NativeObject, m_flipFromLittleEndian_CallBack_void_void_ev_size_t_ev_size_t);
						m_flipFromLittleEndian_CallBack_void_void_ev_size_t = EarthView_World_Graphic_CSerializer_flipFromLittleEndian_void_void_ev_size_t_Function;
						GC.KeepAlive(m_flipFromLittleEndian_CallBack_void_void_ev_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_CSkeletonSerializer_flipFromLittleEndian_void_void_ev_size_t(this.NativeObject, m_flipFromLittleEndian_CallBack_void_void_ev_size_t);
						m_flipEndian_CallBack_void_void_ev_size_t_ev_size_t = EarthView_World_Graphic_CSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Function;
						GC.KeepAlive(m_flipEndian_CallBack_void_void_ev_size_t_ev_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_CSkeletonSerializer_flipEndian_void_void_ev_size_t_ev_size_t(this.NativeObject, m_flipEndian_CallBack_void_void_ev_size_t_ev_size_t);
						m_flipEndian_CallBack_void_void_ev_size_t = EarthView_World_Graphic_CSerializer_flipEndian_void_void_ev_size_t_Function;
						GC.KeepAlive(m_flipEndian_CallBack_void_void_ev_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_CSkeletonSerializer_flipEndian_void_void_ev_size_t(this.NativeObject, m_flipEndian_CallBack_void_void_ev_size_t);
						m_determineEndianness_CallBack_void_DataStreamPtr = EarthView_World_Graphic_CSerializer_determineEndianness_void_DataStreamPtr_Function;
						GC.KeepAlive(m_determineEndianness_CallBack_void_DataStreamPtr);
						EV_RegisterCallback_EarthView_World_Graphic_CSkeletonSerializer_determineEndianness_void_DataStreamPtr(this.NativeObject, m_determineEndianness_CallBack_void_DataStreamPtr);
						m_determineEndianness_CallBack_void_Endian = EarthView_World_Graphic_CSerializer_determineEndianness_void_Endian_Function;
						GC.KeepAlive(m_determineEndianness_CallBack_void_Endian);
						EV_RegisterCallback_EarthView_World_Graphic_CSkeletonSerializer_determineEndianness_void_Endian(this.NativeObject, m_determineEndianness_CallBack_void_Endian);
					}
				}
				protected override void WriteFileHeader()
				{
					base.WriteFileHeader_NoVirtual();
				}
				protected override void WriteChunkHeader(ushort id, ulong size)
				{
					base.WriteChunkHeader_NoVirtual(id,size);
				}
				protected override ushort ReadChunk(EarthView.World.Core.DataStreamPtr stream)
				{
					return base.ReadChunk_NoVirtual(stream);
				}
				protected override void FlipToLittleEndian(IntPtr pData, ulong size, ulong count)
				{
					base.FlipToLittleEndian_NoVirtual(pData,size,count);
				}
				protected override void FlipToLittleEndian(IntPtr pData, ulong size)
				{
					base.FlipToLittleEndian_NoVirtual(pData,size);
				}
				protected override void FlipFromLittleEndian(IntPtr pData, ulong size, ulong count)
				{
					base.FlipFromLittleEndian_NoVirtual(pData,size,count);
				}
				protected override void FlipFromLittleEndian(IntPtr pData, ulong size)
				{
					base.FlipFromLittleEndian_NoVirtual(pData,size);
				}
				protected override void FlipEndian(IntPtr pData, ulong size, ulong count)
				{
					base.FlipEndian_NoVirtual(pData,size,count);
				}
				protected override void FlipEndian(IntPtr pData, ulong size)
				{
					base.FlipEndian_NoVirtual(pData,size);
				}
				protected override void DetermineEndianness(EarthView.World.Core.DataStreamPtr stream)
				{
					base.DetermineEndianness_NoVirtual(stream);
				}
				protected override void DetermineEndianness(EarthView.World.Graphic.Serializer.ENDIAN requestedEndian)
				{
					base.DetermineEndianness_NoVirtual(requestedEndian);
				}
				public static SkeletonSerializer FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					SkeletonSerializer obj = baseObj as  SkeletonSerializer;
					if (object.Equals(obj, null))
					{
						obj = new SkeletonSerializer(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CSkeletonSerializer");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class SkeletonSerializerClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					SkeletonSerializer emptyInstance = new SkeletonSerializer(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
