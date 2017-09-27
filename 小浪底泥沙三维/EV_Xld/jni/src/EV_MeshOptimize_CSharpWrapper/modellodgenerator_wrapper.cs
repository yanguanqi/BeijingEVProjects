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
		namespace Spatial3D
		{
			namespace ModelManager
			{
			}
			namespace Dataset
			{
			}
		}
	}
	namespace MeshOptimize
	{
		public class MeshOptimizeData : EarthView.World.Core.BaseObject
		{
			public MeshOptimizeData() : base(CreatedWhenConstruct.CWC_NotToCreate)
			{
				Create("CMeshOptimizeData",  null);
				RegisterCallBack();
				this.needDispose = true;
				GlobalTraceInfoMap.Put(this);
			}
			private EarthView.World.Graphic.MeshPtr MeshDataField;
			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern IntPtr Get_EarthView_MeshOptimize_CMeshOptimizeData_MeshData(IntPtr pObject);

			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void Set_EarthView_MeshOptimize_CMeshOptimizeData_MeshData( IntPtr pObject, IntPtr value );

			public 			EarthView.World.Graphic.MeshPtr MeshData
			{
				get
				{
					IntPtr __ptr = Get_EarthView_MeshOptimize_CMeshOptimizeData_MeshData(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					if(!object.Equals(MeshDataField, null)){
						MeshDataField.NativeObject = __ptr;
						return MeshDataField;
					}
					EarthView.World.Graphic.MeshPtr csObj = new EarthView.World.Graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CMeshPtr");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.MeshPtr;
						csObj.BindNativeObject(__ptr, "CMeshPtr");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				set
				{
					MeshDataField = value;
					Set_EarthView_MeshOptimize_CMeshOptimizeData_MeshData( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
				}
			}

			private EarthView.World.Core.DataStreamPtr AniDataField;
			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern IntPtr Get_EarthView_MeshOptimize_CMeshOptimizeData_AniData(IntPtr pObject);

			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void Set_EarthView_MeshOptimize_CMeshOptimizeData_AniData( IntPtr pObject, IntPtr value );

			public 			EarthView.World.Core.DataStreamPtr AniData
			{
				get
				{
					IntPtr __ptr = Get_EarthView_MeshOptimize_CMeshOptimizeData_AniData(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					if(!object.Equals(AniDataField, null)){
						AniDataField.NativeObject = __ptr;
						return AniDataField;
					}
					EarthView.World.Core.DataStreamPtr csObj = new EarthView.World.Core.DataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "DataStreamPtr");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Core.DataStreamPtr;
						csObj.BindNativeObject(__ptr, "DataStreamPtr");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				set
				{
					AniDataField = value;
					Set_EarthView_MeshOptimize_CMeshOptimizeData_AniData( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
				}
			}

			private EarthView.World.Spatial.Math.Matrix4 LocalMatField;
			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern IntPtr Get_EarthView_MeshOptimize_CMeshOptimizeData_LocalMat(IntPtr pObject);

			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void Set_EarthView_MeshOptimize_CMeshOptimizeData_LocalMat( IntPtr pObject, IntPtr value );

			public 			EarthView.World.Spatial.Math.Matrix4 LocalMat
			{
				get
				{
					IntPtr __ptr = Get_EarthView_MeshOptimize_CMeshOptimizeData_LocalMat(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					if(!object.Equals(LocalMatField, null)){
						LocalMatField.NativeObject = __ptr;
						return LocalMatField;
					}
					EarthView.World.Spatial.Math.Matrix4 csObj = new EarthView.World.Spatial.Math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CMatrix4");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Matrix4;
						csObj.BindNativeObject(__ptr, "CMatrix4");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				set
				{
					LocalMatField = value;
					Set_EarthView_MeshOptimize_CMeshOptimizeData_LocalMat( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
				}
			}

			#if DEBUG 
				#if Windows 
					private static bool bLoadMeshOptimizeData = LoadDll.Load("EV_MeshOptimize_d.dll");
					private static bool csbLoadMeshOptimizeData = LoadDll.Load("EV_MeshOptimize_CSharp_d.dll");

				#elif Linux 
					private static bool bLoadMeshOptimizeData = LoadDll.Load("EV_MeshOptimize_d.so");
					private static bool csbLoadMeshOptimizeData = LoadDll.Load("EV_MeshOptimize_CSharp_d.so");

				#else 
					private static bool bLoadMeshOptimizeData = LoadDll.Load("EV_MeshOptimize_d.dll");
					private static bool csbLoadMeshOptimizeData = LoadDll.Load("EV_MeshOptimize_CSharp_d.dll");

				#endif 
			#else 
				#if Windows 
					private static bool bLoadMeshOptimizeData = LoadDll.Load("EV_MeshOptimize.dll");
					private static bool csbLoadMeshOptimizeData = LoadDll.Load("EV_MeshOptimize_CSharp.dll");

				#elif Linux 
					private static bool bLoadMeshOptimizeData = LoadDll.Load("EV_MeshOptimize.so");
					private static bool csbLoadMeshOptimizeData = LoadDll.Load("EV_MeshOptimize_CSharp.so");

				#else 
					private static bool bLoadMeshOptimizeData = LoadDll.Load("EV_MeshOptimize.dll");
					private static bool csbLoadMeshOptimizeData = LoadDll.Load("EV_MeshOptimize_CSharp.dll");

				#endif 
			#endif 

			private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::MeshOptimize::CMeshOptimizeData", new MeshOptimizeDataClassFactory());

			public MeshOptimizeData(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
			{
			}

			public override void RegisterCallBack()
			{
				if (this.NativeObject != IntPtr.Zero)
				{
				}
			}
			public static MeshOptimizeData FromBaseObject(BaseObject baseObj)
			{
				if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
					return null;
				MeshOptimizeData obj = baseObj as  MeshOptimizeData;
				if (object.Equals(obj, null))
				{
					obj = new MeshOptimizeData(CreatedWhenConstruct.CWC_NotToCreate);
					obj.BindNativeObject(baseObj.NativeObject, "CMeshOptimizeData");
					obj.IncreaseCast();
				}

				return obj;
			}
		}

		public class MeshOptimizeDataClassFactory : IClassFactory
		{
			public BaseObject Create()
			{
				MeshOptimizeData emptyInstance = new MeshOptimizeData(CreatedWhenConstruct.CWC_NotToCreate);
				return emptyInstance;
			}
		}

		public class MeshOptimizeDataList : EarthView.World.Core.BaseObject
		{
			public MeshOptimizeDataList() : base(CreatedWhenConstruct.CWC_NotToCreate)
			{
				Create("MeshOptimizeDataList",  null);
				RegisterCallBack();
				this.needDispose = true;
				GlobalTraceInfoMap.Put(this);
			}

			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_MeshOptimizeDataList_push_back_void_CMeshOptimizeData(IntPtr pNativeObject, IntPtr t);

			public void Push_back(EarthView.MeshOptimize.MeshOptimizeData t)
			{
				EarthView_MeshOptimize_MeshOptimizeDataList_push_back_void_CMeshOptimizeData(this.NativeObject, object.Equals(t, null) ? IntPtr.Zero : t.NativeObject);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_MeshOptimizeDataList_push_front_void_CMeshOptimizeData(IntPtr pNativeObject, IntPtr t);

			public void Push_front(EarthView.MeshOptimize.MeshOptimizeData t)
			{
				EarthView_MeshOptimize_MeshOptimizeDataList_push_front_void_CMeshOptimizeData(this.NativeObject, object.Equals(t, null) ? IntPtr.Zero : t.NativeObject);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_MeshOptimizeDataList_pop_back_void(IntPtr pNativeObject);

			public void Pop_back()
			{
				EarthView_MeshOptimize_MeshOptimizeDataList_pop_back_void(this.NativeObject);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_MeshOptimizeDataList_pop_front_void(IntPtr pNativeObject);

			public void Pop_front()
			{
				EarthView_MeshOptimize_MeshOptimizeDataList_pop_front_void(this.NativeObject);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern IntPtr EarthView_MeshOptimize_MeshOptimizeDataList_front_CMeshOptimizeData(IntPtr pNativeObject);

			public EarthView.MeshOptimize.MeshOptimizeData Front()
			{
				IntPtr __ptr = EarthView_MeshOptimize_MeshOptimizeDataList_front_CMeshOptimizeData(this.NativeObject);
				
				if(__ptr==IntPtr.Zero)
				{
				return null;
				}
				EarthView.MeshOptimize.MeshOptimizeData csObj = new EarthView.MeshOptimize.MeshOptimizeData(CreatedWhenConstruct.CWC_NotToCreate);
				csObj.BindNativeObject(__ptr, "CMeshOptimizeData");
				csObj.Delegate = true;
				IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
				if (csObjClassFactory != null)
				{
					csObj.Delegate = true;
					csObj = csObjClassFactory.Create() as EarthView.MeshOptimize.MeshOptimizeData;
					csObj.BindNativeObject(__ptr, "CMeshOptimizeData");
					csObj.Delegate = true;
				}
				return csObj;
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern IntPtr EarthView_MeshOptimize_MeshOptimizeDataList_back_CMeshOptimizeData(IntPtr pNativeObject);

			public EarthView.MeshOptimize.MeshOptimizeData Back()
			{
				IntPtr __ptr = EarthView_MeshOptimize_MeshOptimizeDataList_back_CMeshOptimizeData(this.NativeObject);
				
				if(__ptr==IntPtr.Zero)
				{
				return null;
				}
				EarthView.MeshOptimize.MeshOptimizeData csObj = new EarthView.MeshOptimize.MeshOptimizeData(CreatedWhenConstruct.CWC_NotToCreate);
				csObj.BindNativeObject(__ptr, "CMeshOptimizeData");
				csObj.Delegate = true;
				IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
				if (csObjClassFactory != null)
				{
					csObj.Delegate = true;
					csObj = csObjClassFactory.Create() as EarthView.MeshOptimize.MeshOptimizeData;
					csObj.BindNativeObject(__ptr, "CMeshOptimizeData");
					csObj.Delegate = true;
				}
				return csObj;
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern IntPtr EarthView_MeshOptimize_MeshOptimizeDataList_at_CMeshOptimizeData_ev_uint32(IntPtr pNativeObject, uint pos);

			public EarthView.MeshOptimize.MeshOptimizeData At(uint pos)
			{
				IntPtr __ptr = EarthView_MeshOptimize_MeshOptimizeDataList_at_CMeshOptimizeData_ev_uint32(this.NativeObject, pos);
				
				if(__ptr==IntPtr.Zero)
				{
				return null;
				}
				EarthView.MeshOptimize.MeshOptimizeData csObj = new EarthView.MeshOptimize.MeshOptimizeData(CreatedWhenConstruct.CWC_NotToCreate);
				csObj.BindNativeObject(__ptr, "CMeshOptimizeData");
				csObj.Delegate = true;
				IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
				if (csObjClassFactory != null)
				{
					csObj.Delegate = true;
					csObj = csObjClassFactory.Create() as EarthView.MeshOptimize.MeshOptimizeData;
					csObj.BindNativeObject(__ptr, "CMeshOptimizeData");
					csObj.Delegate = true;
				}
				return csObj;
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_MeshOptimizeDataList_insert_void_ev_uint32_CMeshOptimizeData(IntPtr pNativeObject, uint pos, IntPtr t);

			public void Insert(uint pos, EarthView.MeshOptimize.MeshOptimizeData t)
			{
				EarthView_MeshOptimize_MeshOptimizeDataList_insert_void_ev_uint32_CMeshOptimizeData(this.NativeObject, pos, object.Equals(t, null) ? IntPtr.Zero : t.NativeObject);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_MeshOptimizeDataList_remove_void_ev_size_t(IntPtr pNativeObject, ulong pos);

			public void Remove(ulong pos)
			{
				EarthView_MeshOptimize_MeshOptimizeDataList_remove_void_ev_size_t(this.NativeObject, pos);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern byte EarthView_MeshOptimize_MeshOptimizeDataList_empty_ev_bool(IntPtr pNativeObject);

			public bool Empty()
			{
				byte ret=EarthView_MeshOptimize_MeshOptimizeDataList_empty_ev_bool(this.NativeObject);
				
				return Convert.ToBoolean(ret);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern ulong EarthView_MeshOptimize_MeshOptimizeDataList_size_ev_size_t(IntPtr pNativeObject);

			public ulong Size()
			{
				ulong ret=EarthView_MeshOptimize_MeshOptimizeDataList_size_ev_size_t(this.NativeObject);
				
				return ret;
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_MeshOptimizeDataList_resize_void_ev_size_t(IntPtr pNativeObject, ulong newSize);

			public void Resize(ulong newSize)
			{
				EarthView_MeshOptimize_MeshOptimizeDataList_resize_void_ev_size_t(this.NativeObject, newSize);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_MeshOptimizeDataList_clear_void(IntPtr pNativeObject);

			public void Clear()
			{
				EarthView_MeshOptimize_MeshOptimizeDataList_clear_void(this.NativeObject);
				
			}

			#if DEBUG 
				#if Windows 
					private static bool bLoadMeshOptimizeDataList = LoadDll.Load("EV_MeshOptimize_d.dll");
					private static bool csbLoadMeshOptimizeDataList = LoadDll.Load("EV_MeshOptimize_CSharp_d.dll");

				#elif Linux 
					private static bool bLoadMeshOptimizeDataList = LoadDll.Load("EV_MeshOptimize_d.so");
					private static bool csbLoadMeshOptimizeDataList = LoadDll.Load("EV_MeshOptimize_CSharp_d.so");

				#else 
					private static bool bLoadMeshOptimizeDataList = LoadDll.Load("EV_MeshOptimize_d.dll");
					private static bool csbLoadMeshOptimizeDataList = LoadDll.Load("EV_MeshOptimize_CSharp_d.dll");

				#endif 
			#else 
				#if Windows 
					private static bool bLoadMeshOptimizeDataList = LoadDll.Load("EV_MeshOptimize.dll");
					private static bool csbLoadMeshOptimizeDataList = LoadDll.Load("EV_MeshOptimize_CSharp.dll");

				#elif Linux 
					private static bool bLoadMeshOptimizeDataList = LoadDll.Load("EV_MeshOptimize.so");
					private static bool csbLoadMeshOptimizeDataList = LoadDll.Load("EV_MeshOptimize_CSharp.so");

				#else 
					private static bool bLoadMeshOptimizeDataList = LoadDll.Load("EV_MeshOptimize.dll");
					private static bool csbLoadMeshOptimizeDataList = LoadDll.Load("EV_MeshOptimize_CSharp.dll");

				#endif 
			#endif 

			private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::MeshOptimize::MeshOptimizeDataList", new MeshOptimizeDataListClassFactory());

			public MeshOptimizeDataList(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
			{
			}

			public override void RegisterCallBack()
			{
				if (this.NativeObject != IntPtr.Zero)
				{
				}
			}
			public static MeshOptimizeDataList FromBaseObject(BaseObject baseObj)
			{
				if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
					return null;
				MeshOptimizeDataList obj = baseObj as  MeshOptimizeDataList;
				if (object.Equals(obj, null))
				{
					obj = new MeshOptimizeDataList(CreatedWhenConstruct.CWC_NotToCreate);
					obj.BindNativeObject(baseObj.NativeObject, "MeshOptimizeDataList");
					obj.IncreaseCast();
				}

				return obj;
			}
		}

		public class MeshOptimizeDataListClassFactory : IClassFactory
		{
			public BaseObject Create()
			{
				MeshOptimizeDataList emptyInstance = new MeshOptimizeDataList(CreatedWhenConstruct.CWC_NotToCreate);
				return emptyInstance;
			}
		}

		public class MeshOptimizeDataSource : EarthView.World.Core.BaseObject
		{
			public MeshOptimizeDataSource() : base(CreatedWhenConstruct.CWC_NotToCreate)
			{
				Create("CMeshOptimizeDataSource",  null);
				RegisterCallBack();
				this.needDispose = true;
				GlobalTraceInfoMap.Put(this);
			}
			private string ExportNameField;
			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern IntPtr Get_EarthView_MeshOptimize_CMeshOptimizeDataSource_ExportName(IntPtr pObject);

			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void Set_EarthView_MeshOptimize_CMeshOptimizeDataSource_ExportName( IntPtr pObject, string value );

			public 			string ExportName
			{
				get
				{
					IntPtr __ptr = Get_EarthView_MeshOptimize_CMeshOptimizeDataSource_ExportName(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}

				set
				{
					ExportNameField = value;
					Set_EarthView_MeshOptimize_CMeshOptimizeDataSource_ExportName( this.NativeObject,value );
				}
			}

			private EarthView.MeshOptimize.MeshOptimizeDataList MeshDataListField;
			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern IntPtr Get_EarthView_MeshOptimize_CMeshOptimizeDataSource_MeshDataList(IntPtr pObject);

			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void Set_EarthView_MeshOptimize_CMeshOptimizeDataSource_MeshDataList( IntPtr pObject, IntPtr value );

			public 			EarthView.MeshOptimize.MeshOptimizeDataList MeshDataList
			{
				get
				{
					IntPtr __ptr = Get_EarthView_MeshOptimize_CMeshOptimizeDataSource_MeshDataList(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					if(!object.Equals(MeshDataListField, null)){
						MeshDataListField.NativeObject = __ptr;
						return MeshDataListField;
					}
					EarthView.MeshOptimize.MeshOptimizeDataList csObj = new EarthView.MeshOptimize.MeshOptimizeDataList(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "MeshOptimizeDataList");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.MeshOptimize.MeshOptimizeDataList;
						csObj.BindNativeObject(__ptr, "MeshOptimizeDataList");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				set
				{
					MeshDataListField = value;
					Set_EarthView_MeshOptimize_CMeshOptimizeDataSource_MeshDataList( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
				}
			}

			#if DEBUG 
				#if Windows 
					private static bool bLoadMeshOptimizeDataSource = LoadDll.Load("EV_MeshOptimize_d.dll");
					private static bool csbLoadMeshOptimizeDataSource = LoadDll.Load("EV_MeshOptimize_CSharp_d.dll");

				#elif Linux 
					private static bool bLoadMeshOptimizeDataSource = LoadDll.Load("EV_MeshOptimize_d.so");
					private static bool csbLoadMeshOptimizeDataSource = LoadDll.Load("EV_MeshOptimize_CSharp_d.so");

				#else 
					private static bool bLoadMeshOptimizeDataSource = LoadDll.Load("EV_MeshOptimize_d.dll");
					private static bool csbLoadMeshOptimizeDataSource = LoadDll.Load("EV_MeshOptimize_CSharp_d.dll");

				#endif 
			#else 
				#if Windows 
					private static bool bLoadMeshOptimizeDataSource = LoadDll.Load("EV_MeshOptimize.dll");
					private static bool csbLoadMeshOptimizeDataSource = LoadDll.Load("EV_MeshOptimize_CSharp.dll");

				#elif Linux 
					private static bool bLoadMeshOptimizeDataSource = LoadDll.Load("EV_MeshOptimize.so");
					private static bool csbLoadMeshOptimizeDataSource = LoadDll.Load("EV_MeshOptimize_CSharp.so");

				#else 
					private static bool bLoadMeshOptimizeDataSource = LoadDll.Load("EV_MeshOptimize.dll");
					private static bool csbLoadMeshOptimizeDataSource = LoadDll.Load("EV_MeshOptimize_CSharp.dll");

				#endif 
			#endif 

			private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::MeshOptimize::CMeshOptimizeDataSource", new MeshOptimizeDataSourceClassFactory());

			public MeshOptimizeDataSource(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
			{
			}

			public override void RegisterCallBack()
			{
				if (this.NativeObject != IntPtr.Zero)
				{
				}
			}
			public static MeshOptimizeDataSource FromBaseObject(BaseObject baseObj)
			{
				if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
					return null;
				MeshOptimizeDataSource obj = baseObj as  MeshOptimizeDataSource;
				if (object.Equals(obj, null))
				{
					obj = new MeshOptimizeDataSource(CreatedWhenConstruct.CWC_NotToCreate);
					obj.BindNativeObject(baseObj.NativeObject, "CMeshOptimizeDataSource");
					obj.IncreaseCast();
				}

				return obj;
			}
		}

		public class MeshOptimizeDataSourceClassFactory : IClassFactory
		{
			public BaseObject Create()
			{
				MeshOptimizeDataSource emptyInstance = new MeshOptimizeDataSource(CreatedWhenConstruct.CWC_NotToCreate);
				return emptyInstance;
			}
		}

		public class ModelLODGenerateListener : EarthView.World.Core.BaseObject
		{
			public ModelLODGenerateListener() : base(CreatedWhenConstruct.CWC_NotToCreate)
			{
				Create("CModelLODGenerateListenerProxy", null);
				if (!"EarthView.MeshOptimize.ModelLODGenerateListener".Equals(((Object)this).GetType().ToString()))
				{
					this.SetCustomExtend(true);
				}
				RegisterCallBack();
				this.needDispose = true;
				GlobalTraceInfoMap.Put(this);
			}
			[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
			protected delegate void processMsg_CallBack_void_EVString(ref IntPtr msg);

			protected processMsg_CallBack_void_EVString m_processMsg_CallBack_void_EVString;

			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CModelLODGenerateListener_processMsg_void_EVString_NoVirtual(IntPtr pNativeObject, string msg);

			public virtual void ProcessMsg_NoVirtual(string msg)
			{
				EarthView_MeshOptimize_CModelLODGenerateListener_processMsg_void_EVString_NoVirtual(this.NativeObject, msg);
				
			}

			protected  void EarthView_MeshOptimize_CModelLODGenerateListener_processMsg_void_EVString_Function(ref IntPtr msg)
			{
				string strmsg= Marshal.PtrToStringAnsi(msg);
				ClassFactory.FreeString(ref msg);
				
				ProcessMsg(strmsg);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CModelLODGenerateListener_processMsg_void_EVString(IntPtr pNativeObject, string msg);

			public virtual void ProcessMsg(string msg)
			{
				EarthView_MeshOptimize_CModelLODGenerateListener_processMsg_void_EVString(this.NativeObject, msg);
				
			}

			[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
			protected delegate void paused_CallBack_void();

			protected paused_CallBack_void m_paused_CallBack_void;

			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CModelLODGenerateListener_paused_void_NoVirtual(IntPtr pNativeObject);

			public virtual void Paused_NoVirtual()
			{
				EarthView_MeshOptimize_CModelLODGenerateListener_paused_void_NoVirtual(this.NativeObject);
				
			}

			protected  void EarthView_MeshOptimize_CModelLODGenerateListener_paused_void_Function()
			{
				Paused();
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CModelLODGenerateListener_paused_void(IntPtr pNativeObject);

			public virtual void Paused()
			{
				EarthView_MeshOptimize_CModelLODGenerateListener_paused_void(this.NativeObject);
				
			}

			[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
			protected delegate void finished_CallBack_void();

			protected finished_CallBack_void m_finished_CallBack_void;

			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CModelLODGenerateListener_finished_void_NoVirtual(IntPtr pNativeObject);

			public virtual void Finished_NoVirtual()
			{
				EarthView_MeshOptimize_CModelLODGenerateListener_finished_void_NoVirtual(this.NativeObject);
				
			}

			protected  void EarthView_MeshOptimize_CModelLODGenerateListener_finished_void_Function()
			{
				Finished();
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CModelLODGenerateListener_finished_void(IntPtr pNativeObject);

			public virtual void Finished()
			{
				EarthView_MeshOptimize_CModelLODGenerateListener_finished_void(this.NativeObject);
				
			}

			[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
			protected delegate void processProgress_CallBack_void_ev_uint32_ev_uint32(uint total, uint current);

			protected processProgress_CallBack_void_ev_uint32_ev_uint32 m_processProgress_CallBack_void_ev_uint32_ev_uint32;

			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CModelLODGenerateListener_processProgress_void_ev_uint32_ev_uint32_NoVirtual(IntPtr pNativeObject, uint total, uint current);

			public virtual void ProcessProgress_NoVirtual(uint total, uint current)
			{
				EarthView_MeshOptimize_CModelLODGenerateListener_processProgress_void_ev_uint32_ev_uint32_NoVirtual(this.NativeObject, total, current);
				
			}

			protected  void EarthView_MeshOptimize_CModelLODGenerateListener_processProgress_void_ev_uint32_ev_uint32_Function(uint total, uint current)
			{
				ProcessProgress(total, current);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CModelLODGenerateListener_processProgress_void_ev_uint32_ev_uint32(IntPtr pNativeObject, uint total, uint current);

			public virtual void ProcessProgress(uint total, uint current)
			{
				EarthView_MeshOptimize_CModelLODGenerateListener_processProgress_void_ev_uint32_ev_uint32(this.NativeObject, total, current);
				
			}

			#if DEBUG 
				#if Windows 
					private static bool bLoadModelLODGenerateListener = LoadDll.Load("EV_MeshOptimize_d.dll");
					private static bool csbLoadModelLODGenerateListener = LoadDll.Load("EV_MeshOptimize_CSharp_d.dll");

				#elif Linux 
					private static bool bLoadModelLODGenerateListener = LoadDll.Load("EV_MeshOptimize_d.so");
					private static bool csbLoadModelLODGenerateListener = LoadDll.Load("EV_MeshOptimize_CSharp_d.so");

				#else 
					private static bool bLoadModelLODGenerateListener = LoadDll.Load("EV_MeshOptimize_d.dll");
					private static bool csbLoadModelLODGenerateListener = LoadDll.Load("EV_MeshOptimize_CSharp_d.dll");

				#endif 
			#else 
				#if Windows 
					private static bool bLoadModelLODGenerateListener = LoadDll.Load("EV_MeshOptimize.dll");
					private static bool csbLoadModelLODGenerateListener = LoadDll.Load("EV_MeshOptimize_CSharp.dll");

				#elif Linux 
					private static bool bLoadModelLODGenerateListener = LoadDll.Load("EV_MeshOptimize.so");
					private static bool csbLoadModelLODGenerateListener = LoadDll.Load("EV_MeshOptimize_CSharp.so");

				#else 
					private static bool bLoadModelLODGenerateListener = LoadDll.Load("EV_MeshOptimize.dll");
					private static bool csbLoadModelLODGenerateListener = LoadDll.Load("EV_MeshOptimize_CSharp.dll");

				#endif 
			#endif 

			private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::MeshOptimize::CModelLODGenerateListener", new ModelLODGenerateListenerClassFactory());

			private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::MeshOptimize::CModelLODGenerateListenerProxy", new ModelLODGenerateListenerClassFactory());

			public ModelLODGenerateListener(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
			{
			}

			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			protected static extern void EV_RegisterCallback_EarthView_MeshOptimize_CModelLODGenerateListener_processMsg_void_EVString(IntPtr pObject, processMsg_CallBack_void_EVString pCallback);

			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			protected static extern void EV_RegisterCallback_EarthView_MeshOptimize_CModelLODGenerateListener_paused_void(IntPtr pObject, paused_CallBack_void pCallback);

			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			protected static extern void EV_RegisterCallback_EarthView_MeshOptimize_CModelLODGenerateListener_finished_void(IntPtr pObject, finished_CallBack_void pCallback);

			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			protected static extern void EV_RegisterCallback_EarthView_MeshOptimize_CModelLODGenerateListener_processProgress_void_ev_uint32_ev_uint32(IntPtr pObject, processProgress_CallBack_void_ev_uint32_ev_uint32 pCallback);

			public override void RegisterCallBack()
			{
				if (this.NativeObject != IntPtr.Zero)
				{
					m_processMsg_CallBack_void_EVString = EarthView_MeshOptimize_CModelLODGenerateListener_processMsg_void_EVString_Function;
					GC.KeepAlive(m_processMsg_CallBack_void_EVString);
					EV_RegisterCallback_EarthView_MeshOptimize_CModelLODGenerateListener_processMsg_void_EVString(this.NativeObject, m_processMsg_CallBack_void_EVString);
					m_paused_CallBack_void = EarthView_MeshOptimize_CModelLODGenerateListener_paused_void_Function;
					GC.KeepAlive(m_paused_CallBack_void);
					EV_RegisterCallback_EarthView_MeshOptimize_CModelLODGenerateListener_paused_void(this.NativeObject, m_paused_CallBack_void);
					m_finished_CallBack_void = EarthView_MeshOptimize_CModelLODGenerateListener_finished_void_Function;
					GC.KeepAlive(m_finished_CallBack_void);
					EV_RegisterCallback_EarthView_MeshOptimize_CModelLODGenerateListener_finished_void(this.NativeObject, m_finished_CallBack_void);
					m_processProgress_CallBack_void_ev_uint32_ev_uint32 = EarthView_MeshOptimize_CModelLODGenerateListener_processProgress_void_ev_uint32_ev_uint32_Function;
					GC.KeepAlive(m_processProgress_CallBack_void_ev_uint32_ev_uint32);
					EV_RegisterCallback_EarthView_MeshOptimize_CModelLODGenerateListener_processProgress_void_ev_uint32_ev_uint32(this.NativeObject, m_processProgress_CallBack_void_ev_uint32_ev_uint32);
				}
			}
			public static ModelLODGenerateListener FromBaseObject(BaseObject baseObj)
			{
				if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
					return null;
				ModelLODGenerateListener obj = baseObj as  ModelLODGenerateListener;
				if (object.Equals(obj, null))
				{
					obj = new ModelLODGenerateListener(CreatedWhenConstruct.CWC_NotToCreate);
					obj.BindNativeObject(baseObj.NativeObject, "CModelLODGenerateListener");
					obj.IncreaseCast();
				}

				return obj;
			}
		}

		public class ModelLODGenerateListenerClassFactory : IClassFactory
		{
			public BaseObject Create()
			{
				ModelLODGenerateListener emptyInstance = new ModelLODGenerateListener(CreatedWhenConstruct.CWC_NotToCreate);
				return emptyInstance;
			}
		}

		public class ModelLODParam : EarthView.World.Core.BaseObject
		{
			public ModelLODParam() : base(CreatedWhenConstruct.CWC_NotToCreate)
			{
				Create("CModelLODParam",  null);
				RegisterCallBack();
				this.needDispose = true;
				GlobalTraceInfoMap.Put(this);
			}

			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CModelLODParam_setBuildQuadtree_void_ev_bool(IntPtr pNativeObject, byte buildQuadTree);

			public void SetBuildQuadtree(bool buildQuadTree)
			{
				EarthView_MeshOptimize_CModelLODParam_setBuildQuadtree_void_ev_bool(this.NativeObject, Convert.ToByte(buildQuadTree));
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern byte EarthView_MeshOptimize_CModelLODParam_getBuildQuadtree_ev_bool(IntPtr pNativeObject);

			public bool GetBuildQuadtree()
			{
				byte ret=EarthView_MeshOptimize_CModelLODParam_getBuildQuadtree_ev_bool(this.NativeObject);
				
				return Convert.ToBoolean(ret);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CModelLODParam_setUseDoubleSideLight_void_ev_bool(IntPtr pNativeObject, byte useDoubleSideLight);

			public void SetUseDoubleSideLight(bool useDoubleSideLight)
			{
				EarthView_MeshOptimize_CModelLODParam_setUseDoubleSideLight_void_ev_bool(this.NativeObject, Convert.ToByte(useDoubleSideLight));
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern byte EarthView_MeshOptimize_CModelLODParam_getUseDoubleSideLight_ev_bool(IntPtr pNativeObject);

			public bool GetUseDoubleSideLight()
			{
				byte ret=EarthView_MeshOptimize_CModelLODParam_getUseDoubleSideLight_ev_bool(this.NativeObject);
				
				return Convert.ToBoolean(ret);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CModelLODParam_setUseInstance_void_ev_bool(IntPtr pNativeObject, byte useInstance);

			public void SetUseInstance(bool useInstance)
			{
				EarthView_MeshOptimize_CModelLODParam_setUseInstance_void_ev_bool(this.NativeObject, Convert.ToByte(useInstance));
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern byte EarthView_MeshOptimize_CModelLODParam_getUseInstance_ev_bool(IntPtr pNativeObject);

			public bool GetUseInstance()
			{
				byte ret=EarthView_MeshOptimize_CModelLODParam_getUseInstance_ev_bool(this.NativeObject);
				
				return Convert.ToBoolean(ret);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CModelLODParam_setCombineSubmesh_void_ev_bool(IntPtr pNativeObject, byte combineSubMesh);

			public void SetCombineSubmesh(bool combineSubMesh)
			{
				EarthView_MeshOptimize_CModelLODParam_setCombineSubmesh_void_ev_bool(this.NativeObject, Convert.ToByte(combineSubMesh));
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern byte EarthView_MeshOptimize_CModelLODParam_getCombineSubmesh_ev_bool(IntPtr pNativeObject);

			public bool GetCombineSubmesh()
			{
				byte ret=EarthView_MeshOptimize_CModelLODParam_getCombineSubmesh_ev_bool(this.NativeObject);
				
				return Convert.ToBoolean(ret);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CModelLODParam_setToDDS_void_ev_bool(IntPtr pNativeObject, byte toDDS);

			public void SetToDDS(bool toDDS)
			{
				EarthView_MeshOptimize_CModelLODParam_setToDDS_void_ev_bool(this.NativeObject, Convert.ToByte(toDDS));
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern byte EarthView_MeshOptimize_CModelLODParam_getToDDS_ev_bool(IntPtr pNativeObject);

			public bool GetToDDS()
			{
				byte ret=EarthView_MeshOptimize_CModelLODParam_getToDDS_ev_bool(this.NativeObject);
				
				return Convert.ToBoolean(ret);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CModelLODParam_setEncode7z_void_ev_bool(IntPtr pNativeObject, byte encode7z);

			public void SetEncode7z(bool encode7z)
			{
				EarthView_MeshOptimize_CModelLODParam_setEncode7z_void_ev_bool(this.NativeObject, Convert.ToByte(encode7z));
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern byte EarthView_MeshOptimize_CModelLODParam_getEncode7z_ev_bool(IntPtr pNativeObject);

			public bool GetEncode7z()
			{
				byte ret=EarthView_MeshOptimize_CModelLODParam_getEncode7z_ev_bool(this.NativeObject);
				
				return Convert.ToBoolean(ret);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CModelLODParam_setUseShareMaterial_void_ev_bool(IntPtr pNativeObject, byte useshareMaterial);

			public void SetUseShareMaterial(bool useshareMaterial)
			{
				EarthView_MeshOptimize_CModelLODParam_setUseShareMaterial_void_ev_bool(this.NativeObject, Convert.ToByte(useshareMaterial));
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern byte EarthView_MeshOptimize_CModelLODParam_getUseShareMaterial_ev_bool(IntPtr pNativeObject);

			public bool GetUseShareMaterial()
			{
				byte ret=EarthView_MeshOptimize_CModelLODParam_getUseShareMaterial_ev_bool(this.NativeObject);
				
				return Convert.ToBoolean(ret);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern byte EarthView_MeshOptimize_CModelLODParam_existLODParam_ev_bool_ev_uint8_CMeshOptimizeParams(IntPtr pNativeObject, byte level, IntPtr param);

			public bool ExistLODParam(byte level, ref EarthView.MeshOptimize.MeshOptimizeParams param)
			{
				byte ret=EarthView_MeshOptimize_CModelLODParam_existLODParam_ev_bool_ev_uint8_CMeshOptimizeParams(this.NativeObject, level, object.Equals(param, null) ? IntPtr.Zero : param.NativeObject);
				
				return Convert.ToBoolean(ret);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CModelLODParam_updateLODParam_void_ev_uint8_CMeshOptimizeParams(IntPtr pNativeObject, byte level, IntPtr param);

			public void UpdateLODParam(byte level, EarthView.MeshOptimize.MeshOptimizeParams param)
			{
				EarthView_MeshOptimize_CModelLODParam_updateLODParam_void_ev_uint8_CMeshOptimizeParams(this.NativeObject, level, object.Equals(param, null) ? IntPtr.Zero : param.NativeObject);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CModelLODParam_addLODParam_void_ev_uint8_CMeshOptimizeParams(IntPtr pNativeObject, byte level, IntPtr param);

			public void AddLODParam(byte level, EarthView.MeshOptimize.MeshOptimizeParams param)
			{
				EarthView_MeshOptimize_CModelLODParam_addLODParam_void_ev_uint8_CMeshOptimizeParams(this.NativeObject, level, object.Equals(param, null) ? IntPtr.Zero : param.NativeObject);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CModelLODParam_removeLODParam_void_ev_uint8(IntPtr pNativeObject, byte level);

			public void RemoveLODParam(byte level)
			{
				EarthView_MeshOptimize_CModelLODParam_removeLODParam_void_ev_uint8(this.NativeObject, level);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern IntPtr EarthView_MeshOptimize_CModelLODParam_getLODParam_CMeshOptimizeParams_ev_uint8(IntPtr pNativeObject, byte level);

			public EarthView.MeshOptimize.MeshOptimizeParams GetLODParam(byte level)
			{
				IntPtr __ptr = EarthView_MeshOptimize_CModelLODParam_getLODParam_CMeshOptimizeParams_ev_uint8(this.NativeObject, level);
				
				if(__ptr==IntPtr.Zero)
				{
				return null;
				}
				EarthView.MeshOptimize.MeshOptimizeParams csObj = new EarthView.MeshOptimize.MeshOptimizeParams(CreatedWhenConstruct.CWC_NotToCreate);
				csObj.BindNativeObject(__ptr, "CMeshOptimizeParams");
				IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
				if (csObjClassFactory != null)
				{
					csObj.Delegate = true;
					csObj = csObjClassFactory.Create() as EarthView.MeshOptimize.MeshOptimizeParams;
					csObj.BindNativeObject(__ptr, "CMeshOptimizeParams");
				}
				return csObj;
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern int EarthView_MeshOptimize_CModelLODParam_getLODParamSize_ev_int32(IntPtr pNativeObject);

			public int GetLODParamSize()
			{
				int ret=EarthView_MeshOptimize_CModelLODParam_getLODParamSize_ev_int32(this.NativeObject);
				
				return ret;
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CModelLODParam_clearLODParam_void(IntPtr pNativeObject);

			public void ClearLODParam()
			{
				EarthView_MeshOptimize_CModelLODParam_clearLODParam_void(this.NativeObject);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CModelLODParam_fromXml_void_EVString(IntPtr pNativeObject, string filePath);

			public void FromXml(string filePath)
			{
				EarthView_MeshOptimize_CModelLODParam_fromXml_void_EVString(this.NativeObject, filePath);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CModelLODParam_toXml_void_EVString(IntPtr pNativeObject, string filePath);

			public void ToXml(string filePath)
			{
				EarthView_MeshOptimize_CModelLODParam_toXml_void_EVString(this.NativeObject, filePath);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CModelLODParam_setLocation_void_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, double lat, double lon, double alt);

			public void SetLocation(double lat, double lon, double alt)
			{
				EarthView_MeshOptimize_CModelLODParam_setLocation_void_ev_real64_ev_real64_ev_real64(this.NativeObject, lat, lon, alt);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CModelLODParam_getLocation_void_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, ref double lat, ref double lon, ref double alt);

			public void GetLocation(ref double lat, ref double lon, ref double alt)
			{
				EarthView_MeshOptimize_CModelLODParam_getLocation_void_ev_real64_ev_real64_ev_real64(this.NativeObject, ref lat, ref lon, ref alt);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CModelLODParam_setLocalTranform_void_CVector3_CVector3_CVector3(IntPtr pNativeObject, IntPtr scale, IntPtr rotate, IntPtr translate);

			public void SetLocalTranform(EarthView.World.Spatial.Math.Vector3 scale, EarthView.World.Spatial.Math.Vector3 rotate, EarthView.World.Spatial.Math.Vector3 translate)
			{
				EarthView_MeshOptimize_CModelLODParam_setLocalTranform_void_CVector3_CVector3_CVector3(this.NativeObject, object.Equals(scale, null) ? IntPtr.Zero : scale.NativeObject, object.Equals(rotate, null) ? IntPtr.Zero : rotate.NativeObject, object.Equals(translate, null) ? IntPtr.Zero : translate.NativeObject);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CModelLODParam_getLocalTransform_void_CVector3_CVector3_CVector3(IntPtr pNativeObject, IntPtr scale, IntPtr rotate, IntPtr translate);

			public void GetLocalTransform(ref EarthView.World.Spatial.Math.Vector3 scale, ref EarthView.World.Spatial.Math.Vector3 rotate, ref EarthView.World.Spatial.Math.Vector3 translate)
			{
				EarthView_MeshOptimize_CModelLODParam_getLocalTransform_void_CVector3_CVector3_CVector3(this.NativeObject, object.Equals(scale, null) ? IntPtr.Zero : scale.NativeObject, object.Equals(rotate, null) ? IntPtr.Zero : rotate.NativeObject, object.Equals(translate, null) ? IntPtr.Zero : translate.NativeObject);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CModelLODParam_setTextureQuality_void_ev_bool(IntPtr pNativeObject, byte quality);

			public void SetTextureQuality(bool quality)
			{
				EarthView_MeshOptimize_CModelLODParam_setTextureQuality_void_ev_bool(this.NativeObject, Convert.ToByte(quality));
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern byte EarthView_MeshOptimize_CModelLODParam_getTextureQuality_ev_bool(IntPtr pNativeObject);

			public bool GetTextureQuality()
			{
				byte ret=EarthView_MeshOptimize_CModelLODParam_getTextureQuality_ev_bool(this.NativeObject);
				
				return Convert.ToBoolean(ret);
				
			}

			#if DEBUG 
				#if Windows 
					private static bool bLoadModelLODParam = LoadDll.Load("EV_MeshOptimize_d.dll");
					private static bool csbLoadModelLODParam = LoadDll.Load("EV_MeshOptimize_CSharp_d.dll");

				#elif Linux 
					private static bool bLoadModelLODParam = LoadDll.Load("EV_MeshOptimize_d.so");
					private static bool csbLoadModelLODParam = LoadDll.Load("EV_MeshOptimize_CSharp_d.so");

				#else 
					private static bool bLoadModelLODParam = LoadDll.Load("EV_MeshOptimize_d.dll");
					private static bool csbLoadModelLODParam = LoadDll.Load("EV_MeshOptimize_CSharp_d.dll");

				#endif 
			#else 
				#if Windows 
					private static bool bLoadModelLODParam = LoadDll.Load("EV_MeshOptimize.dll");
					private static bool csbLoadModelLODParam = LoadDll.Load("EV_MeshOptimize_CSharp.dll");

				#elif Linux 
					private static bool bLoadModelLODParam = LoadDll.Load("EV_MeshOptimize.so");
					private static bool csbLoadModelLODParam = LoadDll.Load("EV_MeshOptimize_CSharp.so");

				#else 
					private static bool bLoadModelLODParam = LoadDll.Load("EV_MeshOptimize.dll");
					private static bool csbLoadModelLODParam = LoadDll.Load("EV_MeshOptimize_CSharp.dll");

				#endif 
			#endif 

			private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::MeshOptimize::CModelLODParam", new ModelLODParamClassFactory());

			public ModelLODParam(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
			{
			}

			public override void RegisterCallBack()
			{
				if (this.NativeObject != IntPtr.Zero)
				{
				}
			}
			public static ModelLODParam FromBaseObject(BaseObject baseObj)
			{
				if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
					return null;
				ModelLODParam obj = baseObj as  ModelLODParam;
				if (object.Equals(obj, null))
				{
					obj = new ModelLODParam(CreatedWhenConstruct.CWC_NotToCreate);
					obj.BindNativeObject(baseObj.NativeObject, "CModelLODParam");
					obj.IncreaseCast();
				}

				return obj;
			}
		}

		public class ModelLODParamClassFactory : IClassFactory
		{
			public BaseObject Create()
			{
				ModelLODParam emptyInstance = new ModelLODParam(CreatedWhenConstruct.CWC_NotToCreate);
				return emptyInstance;
			}
		}

		public class ModelLODGenerator : EarthView.World.Core.BaseObject
		{
			public ModelLODGenerator() : base(CreatedWhenConstruct.CWC_NotToCreate)
			{
				Create("CModelLODGenerator",  null);
				RegisterCallBack();
				this.needDispose = true;
				GlobalTraceInfoMap.Put(this);
			}

			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CModelLODGenerator_generate_void_EVString_EVString_ev_bool(IntPtr pNativeObject, string localFolderSource, string dstFolder, byte isAsyn);

			public void Generate(string localFolderSource, string dstFolder, bool isAsyn)
			{
				EarthView_MeshOptimize_CModelLODGenerator_generate_void_EVString_EVString_ev_bool(this.NativeObject, localFolderSource, dstFolder, Convert.ToByte(isAsyn));
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CModelLODGenerator_generate_void_CEntityDataset_EVString_ev_bool(IntPtr pNativeObject, IntPtr datasetSource, string dstFolder, byte isAsyn);

			public void Generate(EarthView.World.Spatial3D.Dataset.EntityDataset datasetSource, string dstFolder, bool isAsyn)
			{
				EarthView_MeshOptimize_CModelLODGenerator_generate_void_CEntityDataset_EVString_ev_bool(this.NativeObject, object.Equals(datasetSource, null) ? IntPtr.Zero : datasetSource.NativeObject, dstFolder, Convert.ToByte(isAsyn));
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CModelLODGenerator_generate_void_CEntityDataset_EVString_IntVector_ev_bool(IntPtr pNativeObject, IntPtr datasetSource, string dstFolder, IntPtr vec, byte isAsyn);

			public void Generate(EarthView.World.Spatial3D.Dataset.EntityDataset datasetSource, string dstFolder, EarthView.World.Core.IntVector vec, bool isAsyn)
			{
				EarthView_MeshOptimize_CModelLODGenerator_generate_void_CEntityDataset_EVString_IntVector_ev_bool(this.NativeObject, object.Equals(datasetSource, null) ? IntPtr.Zero : datasetSource.NativeObject, dstFolder, object.Equals(vec, null) ? IntPtr.Zero : vec.NativeObject, Convert.ToByte(isAsyn));
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CModelLODGenerator_generate_void_CMeshOptimizeDataSource_EVString_ev_bool(IntPtr pNativeObject, IntPtr memDataSource, string dstFolder, byte isAsyn);

			public void Generate(EarthView.MeshOptimize.MeshOptimizeDataSource memDataSource, string dstFolder, bool isAsyn)
			{
				EarthView_MeshOptimize_CModelLODGenerator_generate_void_CMeshOptimizeDataSource_EVString_ev_bool(this.NativeObject, object.Equals(memDataSource, null) ? IntPtr.Zero : memDataSource.NativeObject, dstFolder, Convert.ToByte(isAsyn));
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CModelLODGenerator_setCollectInfo_void_ev_bool(IntPtr pNativeObject, byte collect);

			public void SetCollectInfo(bool collect)
			{
				EarthView_MeshOptimize_CModelLODGenerator_setCollectInfo_void_ev_bool(this.NativeObject, Convert.ToByte(collect));
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CModelLODGenerator_addListener_void_CModelLODGenerateListener(IntPtr pNativeObject, IntPtr observer);

			public void AddListener(EarthView.MeshOptimize.ModelLODGenerateListener observer)
			{
				EarthView_MeshOptimize_CModelLODGenerator_addListener_void_CModelLODGenerateListener(this.NativeObject, object.Equals(observer, null) ? IntPtr.Zero : observer.NativeObject);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CModelLODGenerator_removeListener_void_CModelLODGenerateListener(IntPtr pNativeObject, IntPtr observer);

			public void RemoveListener(EarthView.MeshOptimize.ModelLODGenerateListener observer)
			{
				EarthView_MeshOptimize_CModelLODGenerator_removeListener_void_CModelLODGenerateListener(this.NativeObject, object.Equals(observer, null) ? IntPtr.Zero : observer.NativeObject);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CModelLODGenerator_setParam_void_CModelLODParam(IntPtr pNativeObject, IntPtr param);

			public void SetParam(EarthView.MeshOptimize.ModelLODParam param)
			{
				EarthView_MeshOptimize_CModelLODGenerator_setParam_void_CModelLODParam(this.NativeObject, object.Equals(param, null) ? IntPtr.Zero : param.NativeObject);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern IntPtr EarthView_MeshOptimize_CModelLODGenerator_getParam_CModelLODParam(IntPtr pNativeObject);

			public EarthView.MeshOptimize.ModelLODParam GetParam()
			{
				IntPtr __ptr = EarthView_MeshOptimize_CModelLODGenerator_getParam_CModelLODParam(this.NativeObject);
				
				if(__ptr==IntPtr.Zero)
				{
				return null;
				}
				EarthView.MeshOptimize.ModelLODParam csObj = new EarthView.MeshOptimize.ModelLODParam(CreatedWhenConstruct.CWC_NotToCreate);
				csObj.BindNativeObject(__ptr, "CModelLODParam");
				csObj.Delegate = true;
				IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
				if (csObjClassFactory != null)
				{
					csObj.Delegate = true;
					csObj = csObjClassFactory.Create() as EarthView.MeshOptimize.ModelLODParam;
					csObj.BindNativeObject(__ptr, "CModelLODParam");
					csObj.Delegate = true;
				}
				return csObj;
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern IntPtr EarthView_MeshOptimize_CModelLODGenerator_getCopyParam_CModelLODParam(IntPtr pNativeObject);

			public EarthView.MeshOptimize.ModelLODParam GetCopyParam()
			{
				IntPtr __ptr = EarthView_MeshOptimize_CModelLODGenerator_getCopyParam_CModelLODParam(this.NativeObject);
				
				if(__ptr==IntPtr.Zero)
				{
				return null;
				}
				EarthView.MeshOptimize.ModelLODParam csObj = new EarthView.MeshOptimize.ModelLODParam(CreatedWhenConstruct.CWC_NotToCreate);
				csObj.BindNativeObject(__ptr, "CModelLODParam");
				IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
				if (csObjClassFactory != null)
				{
					csObj.Delegate = true;
					csObj = csObjClassFactory.Create() as EarthView.MeshOptimize.ModelLODParam;
					csObj.BindNativeObject(__ptr, "CModelLODParam");
				}
				return csObj;
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_MeshOptimize_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_MeshOptimize_CModelLODGenerator_stop_void(IntPtr pNativeObject);

			public void Stop()
			{
				EarthView_MeshOptimize_CModelLODGenerator_stop_void(this.NativeObject);
				
			}

			#if DEBUG 
				#if Windows 
					private static bool bLoadModelLODGenerator = LoadDll.Load("EV_MeshOptimize_d.dll");
					private static bool csbLoadModelLODGenerator = LoadDll.Load("EV_MeshOptimize_CSharp_d.dll");

				#elif Linux 
					private static bool bLoadModelLODGenerator = LoadDll.Load("EV_MeshOptimize_d.so");
					private static bool csbLoadModelLODGenerator = LoadDll.Load("EV_MeshOptimize_CSharp_d.so");

				#else 
					private static bool bLoadModelLODGenerator = LoadDll.Load("EV_MeshOptimize_d.dll");
					private static bool csbLoadModelLODGenerator = LoadDll.Load("EV_MeshOptimize_CSharp_d.dll");

				#endif 
			#else 
				#if Windows 
					private static bool bLoadModelLODGenerator = LoadDll.Load("EV_MeshOptimize.dll");
					private static bool csbLoadModelLODGenerator = LoadDll.Load("EV_MeshOptimize_CSharp.dll");

				#elif Linux 
					private static bool bLoadModelLODGenerator = LoadDll.Load("EV_MeshOptimize.so");
					private static bool csbLoadModelLODGenerator = LoadDll.Load("EV_MeshOptimize_CSharp.so");

				#else 
					private static bool bLoadModelLODGenerator = LoadDll.Load("EV_MeshOptimize.dll");
					private static bool csbLoadModelLODGenerator = LoadDll.Load("EV_MeshOptimize_CSharp.dll");

				#endif 
			#endif 

			private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::MeshOptimize::CModelLODGenerator", new ModelLODGeneratorClassFactory());

			public ModelLODGenerator(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
			{
			}

			public override void RegisterCallBack()
			{
				if (this.NativeObject != IntPtr.Zero)
				{
				}
			}
			public static ModelLODGenerator FromBaseObject(BaseObject baseObj)
			{
				if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
					return null;
				ModelLODGenerator obj = baseObj as  ModelLODGenerator;
				if (object.Equals(obj, null))
				{
					obj = new ModelLODGenerator(CreatedWhenConstruct.CWC_NotToCreate);
					obj.BindNativeObject(baseObj.NativeObject, "CModelLODGenerator");
					obj.IncreaseCast();
				}

				return obj;
			}
		}

		public class ModelLODGeneratorClassFactory : IClassFactory
		{
			public BaseObject Create()
			{
				ModelLODGenerator emptyInstance = new ModelLODGenerator(CreatedWhenConstruct.CWC_NotToCreate);
				return emptyInstance;
			}
		}

	}
}
