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
		namespace Utilities
		{
			public enum MODELDATASETTYPE
			{
						EntityModelDataset,
						InstanceModelDataset
			
			}

			public enum KMLDATASETTYPE
			{
						KMLDataset,
						KMZDataset
			
			}

			public class DatasetOption : EarthView.World.Core.BaseObject
			{
				/// <summary>
				/// 构造函数。
				/// </summary>
				/// <returns></returns>
				public DatasetOption() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("DatasetOption",  null);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Utilities_DatasetOption_create_DatasetOption_Create(IntPtr pNativeObject);

				/// <summary>
				/// 获取数据集选项的"创建数据集"对象，通过此对象你可以生成创建数据集的选项。
				/// </summary>
				/// <returns>EarthView::World::Utilities::DatasetOption_Create对象。</returns>
				public EarthView.World.Utilities.DatasetOptionCreate Create()
				{
					IntPtr __ptr = EarthView_World_Utilities_DatasetOption_create_DatasetOption_Create(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Utilities.DatasetOptionCreate csObj = new EarthView.World.Utilities.DatasetOptionCreate(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "DatasetOption_Create");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Utilities.DatasetOptionCreate;
						csObj.BindNativeObject(__ptr, "DatasetOption_Create");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadDatasetOption = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
						private static bool csbLoadDatasetOption = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadDatasetOption = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.so");
						private static bool csbLoadDatasetOption = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.so");

					#else 
						private static bool bLoadDatasetOption = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
						private static bool csbLoadDatasetOption = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadDatasetOption = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
						private static bool csbLoadDatasetOption = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

					#elif Linux 
						private static bool bLoadDatasetOption = LoadDll.Load("EV_Spatial_FrameWorkProxy.so");
						private static bool csbLoadDatasetOption = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.so");

					#else 
						private static bool bLoadDatasetOption = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
						private static bool csbLoadDatasetOption = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Utilities::DatasetOption", new DatasetOptionClassFactory());

				public DatasetOption(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static DatasetOption FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					DatasetOption obj = baseObj as  DatasetOption;
					if (object.Equals(obj, null))
					{
						obj = new DatasetOption(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "DatasetOption");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class DatasetOptionClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					DatasetOption emptyInstance = new DatasetOption(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class DatasetOptionCreate : EarthView.World.Core.BaseObject
			{

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Utilities_DatasetOption_Create_db_DatasetOption_Create_DB(IntPtr pNativeObject);

				/// <summary>
				/// 获取数据集选项的"创建数据库数据集"对象，
				/// 通过此对象你可以生成创建数据库型数据集的选项。
				/// </summary>
				/// <returns>EarthView::World::Utilities::DatasetOption_Create_DB对象。</returns>
				public EarthView.World.Utilities.DatasetOptionCreateDb Db()
				{
					IntPtr __ptr = EarthView_World_Utilities_DatasetOption_Create_db_DatasetOption_Create_DB(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Utilities.DatasetOptionCreateDb csObj = new EarthView.World.Utilities.DatasetOptionCreateDb(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "DatasetOption_Create_DB");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Utilities.DatasetOptionCreateDb;
						csObj.BindNativeObject(__ptr, "DatasetOption_Create_DB");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Utilities_DatasetOption_Create_file_DatasetOption_Create_File(IntPtr pNativeObject);

				/// <summary>
				/// 获取数据集选项的"创建文件数据集"对象，
				/// 通过此对象你可以生成创建文件型数据集的选项。
				/// </summary>
				/// <returns>EarthView::World::Utilities::DatasetOption_Create_File对象。</returns>
				public EarthView.World.Utilities.DatasetOptionCreateFile File()
				{
					IntPtr __ptr = EarthView_World_Utilities_DatasetOption_Create_file_DatasetOption_Create_File(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Utilities.DatasetOptionCreateFile csObj = new EarthView.World.Utilities.DatasetOptionCreateFile(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "DatasetOption_Create_File");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Utilities.DatasetOptionCreateFile;
						csObj.BindNativeObject(__ptr, "DatasetOption_Create_File");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadDatasetOptionCreate = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
						private static bool csbLoadDatasetOptionCreate = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadDatasetOptionCreate = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.so");
						private static bool csbLoadDatasetOptionCreate = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.so");

					#else 
						private static bool bLoadDatasetOptionCreate = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
						private static bool csbLoadDatasetOptionCreate = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadDatasetOptionCreate = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
						private static bool csbLoadDatasetOptionCreate = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

					#elif Linux 
						private static bool bLoadDatasetOptionCreate = LoadDll.Load("EV_Spatial_FrameWorkProxy.so");
						private static bool csbLoadDatasetOptionCreate = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.so");

					#else 
						private static bool bLoadDatasetOptionCreate = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
						private static bool csbLoadDatasetOptionCreate = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Utilities::DatasetOption_Create", new DatasetOptionCreateClassFactory());

				public DatasetOptionCreate(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static DatasetOptionCreate FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					DatasetOptionCreate obj = baseObj as  DatasetOptionCreate;
					if (object.Equals(obj, null))
					{
						obj = new DatasetOptionCreate(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "DatasetOption_Create");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class DatasetOptionCreateClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					DatasetOptionCreate emptyInstance = new DatasetOptionCreate(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class DatasetOptionCreateDb : EarthView.World.Core.BaseObject
			{

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Utilities_DatasetOption_Create_DB_vector_DatasetOption_CFields_int_int(IntPtr pNativeObject, IntPtr fields, int geoType, int espg);

				/// <summary>
				/// 设置一个创建矢量数据集的选项，具体请见AppDataSource::createDataset()。
				/// </summary>
				/// <param name="geoType">EVGeometryType。</param>
				/// <param name="espg">EVWellKnownGeoCSType或EVWellKnownProjCSType。</param>
				/// <returns>EarthView::World::Utilities::DatasetOption数据集选项对象。</returns>
				public EarthView.World.Utilities.DatasetOption Vector(EarthView.World.Spatial.GeoDataset.Fields fields, int geoType, int espg)
				{
					IntPtr __ptr = EarthView_World_Utilities_DatasetOption_Create_DB_vector_DatasetOption_CFields_int_int(this.NativeObject, object.Equals(fields, null) ? IntPtr.Zero : fields.NativeObject, geoType, espg);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Utilities.DatasetOption csObj = new EarthView.World.Utilities.DatasetOption(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "DatasetOption");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Utilities.DatasetOption;
						csObj.BindNativeObject(__ptr, "DatasetOption");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Utilities_DatasetOption_Create_DB_vector_DatasetOption_CFields_int_EVString(IntPtr pNativeObject, IntPtr fields, int geoType, string wktCoordsys);

				/// <summary>
				/// 设置一个创建矢量数据集的选项，具体请见AppDataSource::createDataset()。
				/// </summary>
				/// <param name="geoType">EVGeometryType。</param>
				/// <param name="espg">EVWellKnownGeoCSType或EVWellKnownProjCSType。</param>
				/// <returns>EarthView::World::Utilities::DatasetOption数据集选项对象。</returns>
				public EarthView.World.Utilities.DatasetOption Vector(EarthView.World.Spatial.GeoDataset.Fields fields, int geoType, string wktCoordsys)
				{
					IntPtr __ptr = EarthView_World_Utilities_DatasetOption_Create_DB_vector_DatasetOption_CFields_int_EVString(this.NativeObject, object.Equals(fields, null) ? IntPtr.Zero : fields.NativeObject, geoType, wktCoordsys);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Utilities.DatasetOption csObj = new EarthView.World.Utilities.DatasetOption(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "DatasetOption");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Utilities.DatasetOption;
						csObj.BindNativeObject(__ptr, "DatasetOption");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Utilities_DatasetOption_Create_DB_model_DatasetOption_CFields_ModelDatasetType_int(IntPtr pNativeObject, IntPtr fields, EarthView.World.Utilities.MODELDATASETTYPE modelDatasetType, int espg);

				/// <summary>
				/// 设置一个创建模型数据集的选项，具体请见AppDataSource::createDataset()。
				/// </summary>
				/// <param name="fields">数据集字段设置。</param>
				/// <param name="modelDatasetType">模型数据集类型。</param>
				/// <param name="espg">EVWellKnownGeoCSType或EVWellKnownProjCSType。</param>
				/// <returns>EarthView::World::Utilities::DatasetOption数据集选项对象。</returns>
				public EarthView.World.Utilities.DatasetOption Model(EarthView.World.Spatial.GeoDataset.Fields fields, EarthView.World.Utilities.MODELDATASETTYPE modelDatasetType, int espg)
				{
					IntPtr __ptr = EarthView_World_Utilities_DatasetOption_Create_DB_model_DatasetOption_CFields_ModelDatasetType_int(this.NativeObject, object.Equals(fields, null) ? IntPtr.Zero : fields.NativeObject, modelDatasetType, espg);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Utilities.DatasetOption csObj = new EarthView.World.Utilities.DatasetOption(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "DatasetOption");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Utilities.DatasetOption;
						csObj.BindNativeObject(__ptr, "DatasetOption");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Utilities_DatasetOption_Create_DB_effect_DatasetOption_int(IntPtr pNativeObject, int espg);

				/// <summary>
				/// 设置一个创建特效数据集的选项，具体请见AppDataSource::createDataset()。
				/// </summary>
				/// <param name="espg">EVWellKnownGeoCSType或EVWellKnownProjCSType。</param>
				/// <returns>EarthView::World::Utilities::DatasetOption数据集选项对象。</returns>
				public EarthView.World.Utilities.DatasetOption Effect(int espg)
				{
					IntPtr __ptr = EarthView_World_Utilities_DatasetOption_Create_DB_effect_DatasetOption_int(this.NativeObject, espg);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Utilities.DatasetOption csObj = new EarthView.World.Utilities.DatasetOption(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "DatasetOption");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Utilities.DatasetOption;
						csObj.BindNativeObject(__ptr, "DatasetOption");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadDatasetOptionCreateDb = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
						private static bool csbLoadDatasetOptionCreateDb = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadDatasetOptionCreateDb = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.so");
						private static bool csbLoadDatasetOptionCreateDb = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.so");

					#else 
						private static bool bLoadDatasetOptionCreateDb = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
						private static bool csbLoadDatasetOptionCreateDb = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadDatasetOptionCreateDb = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
						private static bool csbLoadDatasetOptionCreateDb = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

					#elif Linux 
						private static bool bLoadDatasetOptionCreateDb = LoadDll.Load("EV_Spatial_FrameWorkProxy.so");
						private static bool csbLoadDatasetOptionCreateDb = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.so");

					#else 
						private static bool bLoadDatasetOptionCreateDb = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
						private static bool csbLoadDatasetOptionCreateDb = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Utilities::DatasetOption_Create_DB", new DatasetOptionCreateDbClassFactory());

				public DatasetOptionCreateDb(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static DatasetOptionCreateDb FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					DatasetOptionCreateDb obj = baseObj as  DatasetOptionCreateDb;
					if (object.Equals(obj, null))
					{
						obj = new DatasetOptionCreateDb(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "DatasetOption_Create_DB");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class DatasetOptionCreateDbClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					DatasetOptionCreateDb emptyInstance = new DatasetOptionCreateDb(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class DatasetOptionCreateFile : EarthView.World.Core.BaseObject
			{

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Utilities_DatasetOption_Create_File_kml_DatasetOption_KMLDatasetType(IntPtr pNativeObject, EarthView.World.Utilities.KMLDATASETTYPE kmlDatasetType);

				/// <summary>
				/// 设置一个创建KML数据集的选项，具体请见AppDataSource::createDataset()。
				/// </summary>
				/// <param name="kmlDatasetType">KML数据集类型。</param>
				/// <returns>EarthView::World::Utilities::DatasetOption数据集选项对象。</returns>
				public EarthView.World.Utilities.DatasetOption Kml(EarthView.World.Utilities.KMLDATASETTYPE kmlDatasetType)
				{
					IntPtr __ptr = EarthView_World_Utilities_DatasetOption_Create_File_kml_DatasetOption_KMLDatasetType(this.NativeObject, kmlDatasetType);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Utilities.DatasetOption csObj = new EarthView.World.Utilities.DatasetOption(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "DatasetOption");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Utilities.DatasetOption;
						csObj.BindNativeObject(__ptr, "DatasetOption");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadDatasetOptionCreateFile = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
						private static bool csbLoadDatasetOptionCreateFile = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadDatasetOptionCreateFile = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.so");
						private static bool csbLoadDatasetOptionCreateFile = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.so");

					#else 
						private static bool bLoadDatasetOptionCreateFile = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
						private static bool csbLoadDatasetOptionCreateFile = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadDatasetOptionCreateFile = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
						private static bool csbLoadDatasetOptionCreateFile = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

					#elif Linux 
						private static bool bLoadDatasetOptionCreateFile = LoadDll.Load("EV_Spatial_FrameWorkProxy.so");
						private static bool csbLoadDatasetOptionCreateFile = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.so");

					#else 
						private static bool bLoadDatasetOptionCreateFile = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
						private static bool csbLoadDatasetOptionCreateFile = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Utilities::DatasetOption_Create_File", new DatasetOptionCreateFileClassFactory());

				public DatasetOptionCreateFile(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static DatasetOptionCreateFile FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					DatasetOptionCreateFile obj = baseObj as  DatasetOptionCreateFile;
					if (object.Equals(obj, null))
					{
						obj = new DatasetOptionCreateFile(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "DatasetOption_Create_File");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class DatasetOptionCreateFileClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					DatasetOptionCreateFile emptyInstance = new DatasetOptionCreateFile(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
