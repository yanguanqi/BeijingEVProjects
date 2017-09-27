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
		namespace Spatial2D
		{
			namespace SpatialIndex
			{
				public enum SINDEXTYPE
				{
								INDEX_Unkown = 0,
								INDEX_Quad = 1,
								INDEX_R_plus = 2
				
				}

				public enum DRIVERTYPE
				{
								STRG_BinaryFile = 0,
								STRG_DBTable = 1,
								STRG_Unkown = 2
				
				}

				public class Data : EarthView.World.Core.AllocatedObject
				{

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_SpatialIndex_Data_getMBR_void_ev_real32_ev_real32_ev_real32_ev_real32(IntPtr pNativeObject, ref float dfUpleftX, ref float dfUpleftY, ref float dfDownrightX, ref float dfDownRightY);

					///<summary>
					///获取最小外接矩形
					///</summary>
					///<param name="dfUpleftX">左上角X</param>
					///<param name="dfUpleftY">左上角Y</param>
					///<param name="dfDownrightX">右下角X</param>
					///<param name="dfDownRightY">右下角Y</param>
					public void GetMBR(ref float dfUpleftX, ref float dfUpleftY, ref float dfDownrightX, ref float dfDownRightY)
					{
						EarthView_World_Spatial2D_SpatialIndex_Data_getMBR_void_ev_real32_ev_real32_ev_real32_ev_real32(this.NativeObject, ref dfUpleftX, ref dfUpleftY, ref dfDownrightX, ref dfDownRightY);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern uint EarthView_World_Spatial2D_SpatialIndex_Data_getFeatureIndex_ev_uint32(IntPtr pNativeObject);

					///<summary>
					///获取与该最小外接矩形绑定的矩形
					///</summary>
					///<returns>featureID</returns>
					public uint GetFeatureIndex()
					{
						uint ret=EarthView_World_Spatial2D_SpatialIndex_Data_getFeatureIndex_ev_uint32(this.NativeObject);
						
						return ret;
						
					}

					///<summary>
					///构造函数
					///</summary>
					///获取最小外接矩形
					///<param name="dfUpleftX">左上角X</param>
					///<param name="dfUpleftY">左上角Y</param>
					///<param name="dfDownrightX">右下角X</param>
					///<param name="dfDownRightY">右下角Y</param>
					///<param name="dfDownRightY">右下角Y</param>
					///<param name="ID">featureID</param>
					public Data(float dfUpleftX, float dfUpleftY, float dfDownrightX, float dfDownRightY, uint ID) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuedfUpleftX = new BasePtr(dfUpleftX);
						list.Add("dfUpleftX", valuedfUpleftX.PtrVal);
						BasePtr valuedfUpleftY = new BasePtr(dfUpleftY);
						list.Add("dfUpleftY", valuedfUpleftY.PtrVal);
						BasePtr valuedfDownrightX = new BasePtr(dfDownrightX);
						list.Add("dfDownrightX", valuedfDownrightX.PtrVal);
						BasePtr valuedfDownRightY = new BasePtr(dfDownRightY);
						list.Add("dfDownRightY", valuedfDownRightY.PtrVal);
						BasePtr valueID = new BasePtr(ID);
						list.Add("ID", valueID.PtrVal);
						Create("Data", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					///<summary>
					///默认构造函数
					///</summary>
					public Data() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("Data",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					#if DEBUG 
						#if Windows 
							private static bool bLoadData = LoadDll.Load("EV_SpatialIndex_d.dll");
							private static bool csbLoadData = LoadDll.Load("EV_SpatialIndex_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadData = LoadDll.Load("EV_SpatialIndex_d.so");
							private static bool csbLoadData = LoadDll.Load("EV_SpatialIndex_CSharp_d.so");

						#else 
							private static bool bLoadData = LoadDll.Load("EV_SpatialIndex_d.dll");
							private static bool csbLoadData = LoadDll.Load("EV_SpatialIndex_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadData = LoadDll.Load("EV_SpatialIndex.dll");
							private static bool csbLoadData = LoadDll.Load("EV_SpatialIndex_CSharp.dll");

						#elif Linux 
							private static bool bLoadData = LoadDll.Load("EV_SpatialIndex.so");
							private static bool csbLoadData = LoadDll.Load("EV_SpatialIndex_CSharp.so");

						#else 
							private static bool bLoadData = LoadDll.Load("EV_SpatialIndex.dll");
							private static bool csbLoadData = LoadDll.Load("EV_SpatialIndex_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::SpatialIndex::Data", new DataClassFactory());

					public Data(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static Data FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Data obj = baseObj as  Data;
						if (object.Equals(obj, null))
						{
							obj = new Data(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "Data");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class DataClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Data emptyInstance = new Data(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class Inode : EarthView.World.Core.AllocatedObject
				{
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate int getNodeID_CallBack_ev_int32();

					protected getNodeID_CallBack_ev_int32 m_getNodeID_CallBack_ev_int32;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial2D_SpatialIndex_INode_getNodeID_ev_int32_NoVirtual(IntPtr pNativeObject);

					///<summary>
					///获取当前节点的ID
					///</summary>
					///<returns>当前节点的ID</returns>
					public virtual int GetNodeID_NoVirtual()
					{
						int ret=EarthView_World_Spatial2D_SpatialIndex_INode_getNodeID_ev_int32_NoVirtual(this.NativeObject);
						
						return ret;
						
					}

					protected  int EarthView_World_Spatial2D_SpatialIndex_INode_getNodeID_ev_int32_Function()
					{
						int csret=GetNodeID();
						
						return csret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial2D_SpatialIndex_INode_getNodeID_ev_int32(IntPtr pNativeObject);

					///<summary>
					///获取当前节点的ID
					///</summary>
					///<returns>当前节点的ID</returns>
					public virtual int GetNodeID()
					{
						int ret=EarthView_World_Spatial2D_SpatialIndex_INode_getNodeID_ev_int32(this.NativeObject);
						
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate int getChildrenCount_CallBack_ev_int32();

					protected getChildrenCount_CallBack_ev_int32 m_getChildrenCount_CallBack_ev_int32;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial2D_SpatialIndex_INode_getChildrenCount_ev_int32_NoVirtual(IntPtr pNativeObject);

					///<summary>
					///获取子阶段个数
					///</summary>
					///<returns>子节点个数</returns>
					public virtual int GetChildrenCount_NoVirtual()
					{
						int ret=EarthView_World_Spatial2D_SpatialIndex_INode_getChildrenCount_ev_int32_NoVirtual(this.NativeObject);
						
						return ret;
						
					}

					protected  int EarthView_World_Spatial2D_SpatialIndex_INode_getChildrenCount_ev_int32_Function()
					{
						int csret=GetChildrenCount();
						
						return csret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial2D_SpatialIndex_INode_getChildrenCount_ev_int32(IntPtr pNativeObject);

					///<summary>
					///获取子阶段个数
					///</summary>
					///<returns>子节点个数</returns>
					public virtual int GetChildrenCount()
					{
						int ret=EarthView_World_Spatial2D_SpatialIndex_INode_getChildrenCount_ev_int32(this.NativeObject);
						
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr getChildNode_CallBack_INode_ev_int32(int index);

					protected getChildNode_CallBack_INode_ev_int32 m_getChildNode_CallBack_INode_ev_int32;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_SpatialIndex_INode_getChildNode_INode_ev_int32_NoVirtual(IntPtr pNativeObject, int index);

					///<summary>
					///获取子节点 
					///</summary>
					///<param name="index">子节点索引</param>
					///<returns>子节点</returns>
					public virtual EarthView.World.Spatial2D.SpatialIndex.Inode GetChildNode_NoVirtual(int index)
					{
						IntPtr __ptr = EarthView_World_Spatial2D_SpatialIndex_INode_getChildNode_INode_ev_int32_NoVirtual(this.NativeObject, index);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial2D.SpatialIndex.Inode csObj = new EarthView.World.Spatial2D.SpatialIndex.Inode(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "INode");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial2D.SpatialIndex.Inode;
							csObj.BindNativeObject(__ptr, "INode");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Spatial2D_SpatialIndex_INode_getChildNode_INode_ev_int32_Function(int index)
					{
						EarthView.World.Spatial2D.SpatialIndex.Inode csret=GetChildNode(index);
						
						if (!object.Equals(csret, null))
						{
						    csret.Delegate = true;
						    return csret.NativeObject;
						}
						else
						{
						    return IntPtr.Zero;
						}
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_SpatialIndex_INode_getChildNode_INode_ev_int32(IntPtr pNativeObject, int index);

					///<summary>
					///获取子节点 
					///</summary>
					///<param name="index">子节点索引</param>
					///<returns>子节点</returns>
					public virtual EarthView.World.Spatial2D.SpatialIndex.Inode GetChildNode(int index)
					{
						IntPtr __ptr = EarthView_World_Spatial2D_SpatialIndex_INode_getChildNode_INode_ev_int32(this.NativeObject, index);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial2D.SpatialIndex.Inode csObj = new EarthView.World.Spatial2D.SpatialIndex.Inode(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "INode");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial2D.SpatialIndex.Inode;
							csObj.BindNativeObject(__ptr, "INode");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr getParent_CallBack_INode();

					protected getParent_CallBack_INode m_getParent_CallBack_INode;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_SpatialIndex_INode_getParent_INode_NoVirtual(IntPtr pNativeObject);

					///<summary>
					///获取父节点
					///</summary>
					///<returns>父节点</returns>
					public virtual EarthView.World.Spatial2D.SpatialIndex.Inode GetParent_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_SpatialIndex_INode_getParent_INode_NoVirtual(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial2D.SpatialIndex.Inode csObj = new EarthView.World.Spatial2D.SpatialIndex.Inode(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "INode");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial2D.SpatialIndex.Inode;
							csObj.BindNativeObject(__ptr, "INode");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Spatial2D_SpatialIndex_INode_getParent_INode_Function()
					{
						EarthView.World.Spatial2D.SpatialIndex.Inode csret=GetParent();
						
						if (!object.Equals(csret, null))
						{
						    csret.Delegate = true;
						    return csret.NativeObject;
						}
						else
						{
						    return IntPtr.Zero;
						}
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_SpatialIndex_INode_getParent_INode(IntPtr pNativeObject);

					///<summary>
					///获取父节点
					///</summary>
					///<returns>父节点</returns>
					public virtual EarthView.World.Spatial2D.SpatialIndex.Inode GetParent()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_SpatialIndex_INode_getParent_INode(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial2D.SpatialIndex.Inode csObj = new EarthView.World.Spatial2D.SpatialIndex.Inode(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "INode");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial2D.SpatialIndex.Inode;
							csObj.BindNativeObject(__ptr, "INode");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate int getFeatureCount_CallBack_ev_int32();

					protected getFeatureCount_CallBack_ev_int32 m_getFeatureCount_CallBack_ev_int32;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial2D_SpatialIndex_INode_getFeatureCount_ev_int32_NoVirtual(IntPtr pNativeObject);

					///<summary>
					///获取要素个数
					///</summary>
					///<returns>要素个数</returns>
					public virtual int GetFeatureCount_NoVirtual()
					{
						int ret=EarthView_World_Spatial2D_SpatialIndex_INode_getFeatureCount_ev_int32_NoVirtual(this.NativeObject);
						
						return ret;
						
					}

					protected  int EarthView_World_Spatial2D_SpatialIndex_INode_getFeatureCount_ev_int32_Function()
					{
						int csret=GetFeatureCount();
						
						return csret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial2D_SpatialIndex_INode_getFeatureCount_ev_int32(IntPtr pNativeObject);

					///<summary>
					///获取要素个数
					///</summary>
					///<returns>要素个数</returns>
					public virtual int GetFeatureCount()
					{
						int ret=EarthView_World_Spatial2D_SpatialIndex_INode_getFeatureCount_ev_int32(this.NativeObject);
						
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr getFeatrueData_CallBack_Data_ev_int32(int index);

					protected getFeatrueData_CallBack_Data_ev_int32 m_getFeatrueData_CallBack_Data_ev_int32;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_SpatialIndex_INode_getFeatrueData_Data_ev_int32_NoVirtual(IntPtr pNativeObject, int index);

					///<summary>
					///获取要素的ID
					///</summary>
					///<param name="index">feature链表中的位置</param>
					///<returns>要素数据</returns>
					public virtual EarthView.World.Spatial2D.SpatialIndex.Data GetFeatrueData_NoVirtual(int index)
					{
						IntPtr __ptr = EarthView_World_Spatial2D_SpatialIndex_INode_getFeatrueData_Data_ev_int32_NoVirtual(this.NativeObject, index);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial2D.SpatialIndex.Data csObj = new EarthView.World.Spatial2D.SpatialIndex.Data(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "Data");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial2D.SpatialIndex.Data;
							csObj.BindNativeObject(__ptr, "Data");
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Spatial2D_SpatialIndex_INode_getFeatrueData_Data_ev_int32_Function(int index)
					{
						EarthView.World.Spatial2D.SpatialIndex.Data csret=GetFeatrueData(index);
						
						if (!object.Equals(csret, null))
						{
						    return csret.NativeObject;
						}
						else
						{
						    return IntPtr.Zero;
						}
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_SpatialIndex_INode_getFeatrueData_Data_ev_int32(IntPtr pNativeObject, int index);

					///<summary>
					///获取要素的ID
					///</summary>
					///<param name="index">feature链表中的位置</param>
					///<returns>要素数据</returns>
					public virtual EarthView.World.Spatial2D.SpatialIndex.Data GetFeatrueData(int index)
					{
						IntPtr __ptr = EarthView_World_Spatial2D_SpatialIndex_INode_getFeatrueData_Data_ev_int32(this.NativeObject, index);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial2D.SpatialIndex.Data csObj = new EarthView.World.Spatial2D.SpatialIndex.Data(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "Data");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial2D.SpatialIndex.Data;
							csObj.BindNativeObject(__ptr, "Data");
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void getNodeMBR_CallBack_void_ev_real32_ev_real32_ev_real32_ev_real32(ref float dfUpleftX, ref float dfUpleftY, ref float dfDownrightX, ref float dfDownRightY);

					protected getNodeMBR_CallBack_void_ev_real32_ev_real32_ev_real32_ev_real32 m_getNodeMBR_CallBack_void_ev_real32_ev_real32_ev_real32_ev_real32;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_SpatialIndex_INode_getNodeMBR_void_ev_real32_ev_real32_ev_real32_ev_real32_NoVirtual(IntPtr pNativeObject, ref float dfUpleftX, ref float dfUpleftY, ref float dfDownrightX, ref float dfDownRightY);

					///<summary>
					///获取指定要素的外接矩形框
					///</summary>
					///<param name="dfUpleftX">左上角X</param>
					///<param name="dfUpleftY">左上角Y</param>
					///<param name="dfDownrightX">右下角X</param>
					///<param name="dfDownRightY">右下角Y</param>
					public virtual void GetNodeMBR_NoVirtual(ref float dfUpleftX, ref float dfUpleftY, ref float dfDownrightX, ref float dfDownRightY)
					{
						EarthView_World_Spatial2D_SpatialIndex_INode_getNodeMBR_void_ev_real32_ev_real32_ev_real32_ev_real32_NoVirtual(this.NativeObject, ref dfUpleftX, ref dfUpleftY, ref dfDownrightX, ref dfDownRightY);
						
					}

					protected  void EarthView_World_Spatial2D_SpatialIndex_INode_getNodeMBR_void_ev_real32_ev_real32_ev_real32_ev_real32_Function(ref float dfUpleftX, ref float dfUpleftY, ref float dfDownrightX, ref float dfDownRightY)
					{
						GetNodeMBR(ref dfUpleftX, ref dfUpleftY, ref dfDownrightX, ref dfDownRightY);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_SpatialIndex_INode_getNodeMBR_void_ev_real32_ev_real32_ev_real32_ev_real32(IntPtr pNativeObject, ref float dfUpleftX, ref float dfUpleftY, ref float dfDownrightX, ref float dfDownRightY);

					///<summary>
					///获取指定要素的外接矩形框
					///</summary>
					///<param name="dfUpleftX">左上角X</param>
					///<param name="dfUpleftY">左上角Y</param>
					///<param name="dfDownrightX">右下角X</param>
					///<param name="dfDownRightY">右下角Y</param>
					public virtual void GetNodeMBR(ref float dfUpleftX, ref float dfUpleftY, ref float dfDownrightX, ref float dfDownRightY)
					{
						EarthView_World_Spatial2D_SpatialIndex_INode_getNodeMBR_void_ev_real32_ev_real32_ev_real32_ev_real32(this.NativeObject, ref dfUpleftX, ref dfUpleftY, ref dfDownrightX, ref dfDownRightY);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte isLeaf_CallBack_ev_bool();

					protected isLeaf_CallBack_ev_bool m_isLeaf_CallBack_ev_bool;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_SpatialIndex_INode_isLeaf_ev_bool_NoVirtual(IntPtr pNativeObject);

					///<summary>
					///是否是叶节点
					///</summary>
					///<returns>1，是叶节点,0非叶子节点</returns>
					public virtual bool IsLeaf_NoVirtual()
					{
						byte ret=EarthView_World_Spatial2D_SpatialIndex_INode_isLeaf_ev_bool_NoVirtual(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial2D_SpatialIndex_INode_isLeaf_ev_bool_Function()
					{
						bool csret=IsLeaf();
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_SpatialIndex_INode_isLeaf_ev_bool(IntPtr pNativeObject);

					///<summary>
					///是否是叶节点
					///</summary>
					///<returns>1，是叶节点,0非叶子节点</returns>
					public virtual bool IsLeaf()
					{
						byte ret=EarthView_World_Spatial2D_SpatialIndex_INode_isLeaf_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte isRoot_CallBack_ev_bool();

					protected isRoot_CallBack_ev_bool m_isRoot_CallBack_ev_bool;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_SpatialIndex_INode_isRoot_ev_bool_NoVirtual(IntPtr pNativeObject);

					///<summary>
					///是否是根节点
					///</summary>
					///<returns>1，是根节点,0非根子节点</returns>
					public virtual bool IsRoot_NoVirtual()
					{
						byte ret=EarthView_World_Spatial2D_SpatialIndex_INode_isRoot_ev_bool_NoVirtual(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial2D_SpatialIndex_INode_isRoot_ev_bool_Function()
					{
						bool csret=IsRoot();
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_SpatialIndex_INode_isRoot_ev_bool(IntPtr pNativeObject);

					///<summary>
					///是否是根节点
					///</summary>
					///<returns>1，是根节点,0非根子节点</returns>
					public virtual bool IsRoot()
					{
						byte ret=EarthView_World_Spatial2D_SpatialIndex_INode_isRoot_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void toStream_CallBack_void_ev_uchar_ev_uint32(ref IntPtr pBuffer, ref uint lenth);

					protected toStream_CallBack_void_ev_uchar_ev_uint32 m_toStream_CallBack_void_ev_uchar_ev_uint32;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_SpatialIndex_INode_toStream_void_ev_uchar_ev_uint32_NoVirtual(IntPtr pNativeObject, ref IntPtr pBuffer, ref uint lenth);

					///<summary>
					///变换到流
					///</summary>
					///<param name="pBuffer">流内存,外边调用释放</param>
					///<param name="lenth">数据长度</param>
					public virtual void ToStream_NoVirtual(ref IntPtr pBuffer, ref uint lenth)
					{
						EarthView_World_Spatial2D_SpatialIndex_INode_toStream_void_ev_uchar_ev_uint32_NoVirtual(this.NativeObject, ref pBuffer, ref lenth);
						
					}

					protected  void EarthView_World_Spatial2D_SpatialIndex_INode_toStream_void_ev_uchar_ev_uint32_Function(ref IntPtr pBuffer, ref uint lenth)
					{
						ToStream(ref pBuffer, ref lenth);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_SpatialIndex_INode_toStream_void_ev_uchar_ev_uint32(IntPtr pNativeObject, ref IntPtr pBuffer, ref uint lenth);

					///<summary>
					///变换到流
					///</summary>
					///<param name="pBuffer">流内存,外边调用释放</param>
					///<param name="lenth">数据长度</param>
					public virtual void ToStream(ref IntPtr pBuffer, ref uint lenth)
					{
						EarthView_World_Spatial2D_SpatialIndex_INode_toStream_void_ev_uchar_ev_uint32(this.NativeObject, ref pBuffer, ref lenth);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadInode = LoadDll.Load("EV_SpatialIndex_d.dll");
							private static bool csbLoadInode = LoadDll.Load("EV_SpatialIndex_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadInode = LoadDll.Load("EV_SpatialIndex_d.so");
							private static bool csbLoadInode = LoadDll.Load("EV_SpatialIndex_CSharp_d.so");

						#else 
							private static bool bLoadInode = LoadDll.Load("EV_SpatialIndex_d.dll");
							private static bool csbLoadInode = LoadDll.Load("EV_SpatialIndex_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadInode = LoadDll.Load("EV_SpatialIndex.dll");
							private static bool csbLoadInode = LoadDll.Load("EV_SpatialIndex_CSharp.dll");

						#elif Linux 
							private static bool bLoadInode = LoadDll.Load("EV_SpatialIndex.so");
							private static bool csbLoadInode = LoadDll.Load("EV_SpatialIndex_CSharp.so");

						#else 
							private static bool bLoadInode = LoadDll.Load("EV_SpatialIndex.dll");
							private static bool csbLoadInode = LoadDll.Load("EV_SpatialIndex_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::SpatialIndex::INode", new InodeClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::SpatialIndex::INodeProxy", new InodeClassFactory());

					public Inode(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_INode_getNodeID_ev_int32(IntPtr pObject, getNodeID_CallBack_ev_int32 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_INode_getChildrenCount_ev_int32(IntPtr pObject, getChildrenCount_CallBack_ev_int32 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_INode_getChildNode_INode_ev_int32(IntPtr pObject, getChildNode_CallBack_INode_ev_int32 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_INode_getParent_INode(IntPtr pObject, getParent_CallBack_INode pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_INode_getFeatureCount_ev_int32(IntPtr pObject, getFeatureCount_CallBack_ev_int32 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_INode_getFeatrueData_Data_ev_int32(IntPtr pObject, getFeatrueData_CallBack_Data_ev_int32 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_INode_getNodeMBR_void_ev_real32_ev_real32_ev_real32_ev_real32(IntPtr pObject, getNodeMBR_CallBack_void_ev_real32_ev_real32_ev_real32_ev_real32 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_INode_isLeaf_ev_bool(IntPtr pObject, isLeaf_CallBack_ev_bool pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_INode_isRoot_ev_bool(IntPtr pObject, isRoot_CallBack_ev_bool pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_INode_toStream_void_ev_uchar_ev_uint32(IntPtr pObject, toStream_CallBack_void_ev_uchar_ev_uint32 pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_getNodeID_CallBack_ev_int32 = EarthView_World_Spatial2D_SpatialIndex_INode_getNodeID_ev_int32_Function;
							GC.KeepAlive(m_getNodeID_CallBack_ev_int32);
							EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_INode_getNodeID_ev_int32(this.NativeObject, m_getNodeID_CallBack_ev_int32);
							m_getChildrenCount_CallBack_ev_int32 = EarthView_World_Spatial2D_SpatialIndex_INode_getChildrenCount_ev_int32_Function;
							GC.KeepAlive(m_getChildrenCount_CallBack_ev_int32);
							EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_INode_getChildrenCount_ev_int32(this.NativeObject, m_getChildrenCount_CallBack_ev_int32);
							m_getChildNode_CallBack_INode_ev_int32 = EarthView_World_Spatial2D_SpatialIndex_INode_getChildNode_INode_ev_int32_Function;
							GC.KeepAlive(m_getChildNode_CallBack_INode_ev_int32);
							EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_INode_getChildNode_INode_ev_int32(this.NativeObject, m_getChildNode_CallBack_INode_ev_int32);
							m_getParent_CallBack_INode = EarthView_World_Spatial2D_SpatialIndex_INode_getParent_INode_Function;
							GC.KeepAlive(m_getParent_CallBack_INode);
							EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_INode_getParent_INode(this.NativeObject, m_getParent_CallBack_INode);
							m_getFeatureCount_CallBack_ev_int32 = EarthView_World_Spatial2D_SpatialIndex_INode_getFeatureCount_ev_int32_Function;
							GC.KeepAlive(m_getFeatureCount_CallBack_ev_int32);
							EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_INode_getFeatureCount_ev_int32(this.NativeObject, m_getFeatureCount_CallBack_ev_int32);
							m_getFeatrueData_CallBack_Data_ev_int32 = EarthView_World_Spatial2D_SpatialIndex_INode_getFeatrueData_Data_ev_int32_Function;
							GC.KeepAlive(m_getFeatrueData_CallBack_Data_ev_int32);
							EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_INode_getFeatrueData_Data_ev_int32(this.NativeObject, m_getFeatrueData_CallBack_Data_ev_int32);
							m_getNodeMBR_CallBack_void_ev_real32_ev_real32_ev_real32_ev_real32 = EarthView_World_Spatial2D_SpatialIndex_INode_getNodeMBR_void_ev_real32_ev_real32_ev_real32_ev_real32_Function;
							GC.KeepAlive(m_getNodeMBR_CallBack_void_ev_real32_ev_real32_ev_real32_ev_real32);
							EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_INode_getNodeMBR_void_ev_real32_ev_real32_ev_real32_ev_real32(this.NativeObject, m_getNodeMBR_CallBack_void_ev_real32_ev_real32_ev_real32_ev_real32);
							m_isLeaf_CallBack_ev_bool = EarthView_World_Spatial2D_SpatialIndex_INode_isLeaf_ev_bool_Function;
							GC.KeepAlive(m_isLeaf_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_INode_isLeaf_ev_bool(this.NativeObject, m_isLeaf_CallBack_ev_bool);
							m_isRoot_CallBack_ev_bool = EarthView_World_Spatial2D_SpatialIndex_INode_isRoot_ev_bool_Function;
							GC.KeepAlive(m_isRoot_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_INode_isRoot_ev_bool(this.NativeObject, m_isRoot_CallBack_ev_bool);
							m_toStream_CallBack_void_ev_uchar_ev_uint32 = EarthView_World_Spatial2D_SpatialIndex_INode_toStream_void_ev_uchar_ev_uint32_Function;
							GC.KeepAlive(m_toStream_CallBack_void_ev_uchar_ev_uint32);
							EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_INode_toStream_void_ev_uchar_ev_uint32(this.NativeObject, m_toStream_CallBack_void_ev_uchar_ev_uint32);
						}
					}
					public static Inode FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Inode obj = baseObj as  Inode;
						if (object.Equals(obj, null))
						{
							obj = new Inode(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "INode");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class InodeClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Inode emptyInstance = new Inode(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class Idvistor : EarthView.World.Core.AllocatedObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					///<returns></returns>
					public Idvistor() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("IDVistor",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					///<summary>
					///变换到流
					///</summary>
					///<param name="size">data中 id_type元素个数</param>
					///<param name="data">数据</param>
					public Idvistor(ulong size, uint[] data) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuesize = new BasePtr(size);
						list.Add("size", valuesize.PtrVal);
						BasePtr valuedata = new BasePtr(data);
						list.Add("data", valuedata.PtrVal);
						Create("IDVistor", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					/// <summary>
					/// 构造函数
					/// </summary>
					///<returns></returns>
					public Idvistor(EarthView.World.Spatial2D.SpatialIndex.Idvistor other) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valueother = new BasePtr(other);
						list.Add("other", valueother.PtrVal);
						Create("IDVistor", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_SpatialIndex_IDVistor_OperatorAssign_IDVistor_IDVistor(IntPtr pNativeObject, IntPtr other);

					/// <summary>
					/// 赋值构造函数
					/// </summary>
					///<returns></returns>
					public EarthView.World.Spatial2D.SpatialIndex.Idvistor OperatorAssign(EarthView.World.Spatial2D.SpatialIndex.Idvistor other)
					{
						IntPtr __ptr = EarthView_World_Spatial2D_SpatialIndex_IDVistor_OperatorAssign_IDVistor_IDVistor(this.NativeObject, object.Equals(other, null) ? IntPtr.Zero : other.NativeObject);
						
						EarthView.World.Spatial2D.SpatialIndex.Idvistor csObj = new EarthView.World.Spatial2D.SpatialIndex.Idvistor(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IDVistor");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial2D.SpatialIndex.Idvistor;
							csObj.BindNativeObject(__ptr, "IDVistor");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern ulong EarthView_World_Spatial2D_SpatialIndex_IDVistor_getSize_size_t(IntPtr pNativeObject);

					/// <summary>
					/// 获取个数
					/// </summary>
					///<returns>个数</returns>
					public ulong GetSize()
					{
						ulong ret=EarthView_World_Spatial2D_SpatialIndex_IDVistor_getSize_size_t(this.NativeObject);
						
						return ret;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadIdvistor = LoadDll.Load("EV_SpatialIndex_d.dll");
							private static bool csbLoadIdvistor = LoadDll.Load("EV_SpatialIndex_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadIdvistor = LoadDll.Load("EV_SpatialIndex_d.so");
							private static bool csbLoadIdvistor = LoadDll.Load("EV_SpatialIndex_CSharp_d.so");

						#else 
							private static bool bLoadIdvistor = LoadDll.Load("EV_SpatialIndex_d.dll");
							private static bool csbLoadIdvistor = LoadDll.Load("EV_SpatialIndex_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadIdvistor = LoadDll.Load("EV_SpatialIndex.dll");
							private static bool csbLoadIdvistor = LoadDll.Load("EV_SpatialIndex_CSharp.dll");

						#elif Linux 
							private static bool bLoadIdvistor = LoadDll.Load("EV_SpatialIndex.so");
							private static bool csbLoadIdvistor = LoadDll.Load("EV_SpatialIndex_CSharp.so");

						#else 
							private static bool bLoadIdvistor = LoadDll.Load("EV_SpatialIndex.dll");
							private static bool csbLoadIdvistor = LoadDll.Load("EV_SpatialIndex_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::SpatialIndex::IDVistor", new IdvistorClassFactory());

					public Idvistor(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static Idvistor FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Idvistor obj = baseObj as  Idvistor;
						if (object.Equals(obj, null))
						{
							obj = new Idvistor(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "IDVistor");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class IdvistorClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Idvistor emptyInstance = new Idvistor(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class Point2DF : EarthView.World.Core.AllocatedObject
				{
					///<summary>
					///构造函数
					///</summary>
					///<param name="dfX">X坐标</param>
					///<param name="dfY">Y坐标</param>
					public Point2DF(float dfX, float dfY) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuedfX = new BasePtr(dfX);
						list.Add("dfX", valuedfX.PtrVal);
						BasePtr valuedfY = new BasePtr(dfY);
						list.Add("dfY", valuedfY.PtrVal);
						Create("Point2DF", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					///<summary>
					///默认构造函数
					///</summary>
					public Point2DF() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("Point2DF",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_SpatialIndex_Point2DF_OperatorEquals_ev_bool_Point2DF(IntPtr pNativeObject, IntPtr other);

					///<summary>
					///判断相等函数
					///</summary>
					///<returns>true,相等，false不相等</returns>
					public 					static bool operator ==(EarthView.World.Spatial2D.SpatialIndex.Point2DF mPoint2DF,EarthView.World.Spatial2D.SpatialIndex.Point2DF other)
					{
						byte ret=EarthView_World_Spatial2D_SpatialIndex_Point2DF_OperatorEquals_ev_bool_Point2DF(mPoint2DF.NativeObject, object.Equals(other, null) ? IntPtr.Zero : other.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_SpatialIndex_Point2DF_OperatorNotEquals_ev_bool_Point2DF(IntPtr pNativeObject, IntPtr other);

					///<summary>
					///判断不等函数
					///</summary>
					///<returns>true,不相等，false相等</returns>
					public 					static bool operator !=(EarthView.World.Spatial2D.SpatialIndex.Point2DF mPoint2DF,EarthView.World.Spatial2D.SpatialIndex.Point2DF other)
					{
						byte ret=EarthView_World_Spatial2D_SpatialIndex_Point2DF_OperatorNotEquals_ev_bool_Point2DF(mPoint2DF.NativeObject, object.Equals(other, null) ? IntPtr.Zero : other.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern float Get_EarthView_World_Spatial2D_SpatialIndex_Point2DF_X(IntPtr pObject);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void Set_EarthView_World_Spatial2D_SpatialIndex_Point2DF_X( IntPtr pObject, float value );

					public 					float X
					{
						get
						{
							float ret=Get_EarthView_World_Spatial2D_SpatialIndex_Point2DF_X(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial2D_SpatialIndex_Point2DF_X(this.NativeObject,value);
						}
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern float Get_EarthView_World_Spatial2D_SpatialIndex_Point2DF_Y(IntPtr pObject);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void Set_EarthView_World_Spatial2D_SpatialIndex_Point2DF_Y( IntPtr pObject, float value );

					public 					float Y
					{
						get
						{
							float ret=Get_EarthView_World_Spatial2D_SpatialIndex_Point2DF_Y(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial2D_SpatialIndex_Point2DF_Y(this.NativeObject,value);
						}
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadPoint2DF = LoadDll.Load("EV_SpatialIndex_d.dll");
							private static bool csbLoadPoint2DF = LoadDll.Load("EV_SpatialIndex_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadPoint2DF = LoadDll.Load("EV_SpatialIndex_d.so");
							private static bool csbLoadPoint2DF = LoadDll.Load("EV_SpatialIndex_CSharp_d.so");

						#else 
							private static bool bLoadPoint2DF = LoadDll.Load("EV_SpatialIndex_d.dll");
							private static bool csbLoadPoint2DF = LoadDll.Load("EV_SpatialIndex_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadPoint2DF = LoadDll.Load("EV_SpatialIndex.dll");
							private static bool csbLoadPoint2DF = LoadDll.Load("EV_SpatialIndex_CSharp.dll");

						#elif Linux 
							private static bool bLoadPoint2DF = LoadDll.Load("EV_SpatialIndex.so");
							private static bool csbLoadPoint2DF = LoadDll.Load("EV_SpatialIndex_CSharp.so");

						#else 
							private static bool bLoadPoint2DF = LoadDll.Load("EV_SpatialIndex.dll");
							private static bool csbLoadPoint2DF = LoadDll.Load("EV_SpatialIndex_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::SpatialIndex::Point2DF", new Point2DFClassFactory());

					public Point2DF(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static Point2DF FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Point2DF obj = baseObj as  Point2DF;
						if (object.Equals(obj, null))
						{
							obj = new Point2DF(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "Point2DF");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class Point2DFClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Point2DF emptyInstance = new Point2DF(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class Ispatialindex : EarthView.World.Core.AllocatedObject
				{
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void insertData_CallBack_void_Data(IntPtr data);

					protected insertData_CallBack_void_Data m_insertData_CallBack_void_Data;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_insertData_void_Data_NoVirtual(IntPtr pNativeObject, IntPtr data);

					///<summary>
					///插入数据
					///</summary>
					///<param name="data">featue只最小外接矩形及ID</param>
					public virtual void InsertData_NoVirtual(EarthView.World.Spatial2D.SpatialIndex.Data data)
					{
						EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_insertData_void_Data_NoVirtual(this.NativeObject, object.Equals(data, null) ? IntPtr.Zero : data.NativeObject);
						
					}

					protected  void EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_insertData_void_Data_Function(IntPtr data)
					{
						EarthView.World.Spatial2D.SpatialIndex.Data csobj_data = new EarthView.World.Spatial2D.SpatialIndex.Data(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_data.BindNativeObject(data,"Data");
						csobj_data.Delegate = true;
						IClassFactory csobj_dataClassFactory = GlobalClassFactoryMap.Get(csobj_data.GetCppInstanceTypeName());
						if (csobj_dataClassFactory != null)
						{
							csobj_data.Delegate = true;
							csobj_data = csobj_dataClassFactory.Create() as EarthView.World.Spatial2D.SpatialIndex.Data;
							csobj_data.BindNativeObject(data, "Data");
							csobj_data.Delegate = true;
						}
						
						InsertData(csobj_data);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_insertData_void_Data(IntPtr pNativeObject, IntPtr data);

					///<summary>
					///插入数据
					///</summary>
					///<param name="data">featue只最小外接矩形及ID</param>
					public virtual void InsertData(EarthView.World.Spatial2D.SpatialIndex.Data data)
					{
						EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_insertData_void_Data(this.NativeObject, object.Equals(data, null) ? IntPtr.Zero : data.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void deleteData_CallBack_void_Data(IntPtr data);

					protected deleteData_CallBack_void_Data m_deleteData_CallBack_void_Data;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_deleteData_void_Data_NoVirtual(IntPtr pNativeObject, IntPtr data);

					///<summary>
					///删除数据
					///</summary>
					///<param name="data">featue只最小外接矩形及ID</param>
					public virtual void DeleteData_NoVirtual(EarthView.World.Spatial2D.SpatialIndex.Data data)
					{
						EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_deleteData_void_Data_NoVirtual(this.NativeObject, object.Equals(data, null) ? IntPtr.Zero : data.NativeObject);
						
					}

					protected  void EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_deleteData_void_Data_Function(IntPtr data)
					{
						EarthView.World.Spatial2D.SpatialIndex.Data csobj_data = new EarthView.World.Spatial2D.SpatialIndex.Data(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_data.BindNativeObject(data,"Data");
						csobj_data.Delegate = true;
						IClassFactory csobj_dataClassFactory = GlobalClassFactoryMap.Get(csobj_data.GetCppInstanceTypeName());
						if (csobj_dataClassFactory != null)
						{
							csobj_data.Delegate = true;
							csobj_data = csobj_dataClassFactory.Create() as EarthView.World.Spatial2D.SpatialIndex.Data;
							csobj_data.BindNativeObject(data, "Data");
							csobj_data.Delegate = true;
						}
						
						DeleteData(csobj_data);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_deleteData_void_Data(IntPtr pNativeObject, IntPtr data);

					///<summary>
					///删除数据
					///</summary>
					///<param name="data">featue只最小外接矩形及ID</param>
					public virtual void DeleteData(EarthView.World.Spatial2D.SpatialIndex.Data data)
					{
						EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_deleteData_void_Data(this.NativeObject, object.Equals(data, null) ? IntPtr.Zero : data.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void containsWhatQuery_CallBack_void_Data_IDVistor(IntPtr query, IntPtr presultIDList);

					protected containsWhatQuery_CallBack_void_Data_IDVistor m_containsWhatQuery_CallBack_void_Data_IDVistor;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_containsWhatQuery_void_Data_IDVistor_NoVirtual(IntPtr pNativeObject, IntPtr query, IntPtr presultIDList);

					///<summary>
					///数据包含查询,返回该查询窗口中所包含的feature之ID
					///</summary>
					///<param name="query">查询窗口</param>
					///<param name="presultIDList">featueID列表</param>
					public virtual void ContainsWhatQuery_NoVirtual(EarthView.World.Spatial2D.SpatialIndex.Data query, ref  EarthView.World.Spatial2D.SpatialIndex.Idvistor presultIDList)
					{
						EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_containsWhatQuery_void_Data_IDVistor_NoVirtual(this.NativeObject, object.Equals(query, null) ? IntPtr.Zero : query.NativeObject, object.Equals(presultIDList, null) ? IntPtr.Zero : presultIDList.NativeObject);
						
					}

					protected  void EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_containsWhatQuery_void_Data_IDVistor_Function(IntPtr query, IntPtr presultIDList)
					{
						EarthView.World.Spatial2D.SpatialIndex.Data csobj_query = new EarthView.World.Spatial2D.SpatialIndex.Data(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_query.BindNativeObject(query,"Data");
						csobj_query.Delegate = true;
						IClassFactory csobj_queryClassFactory = GlobalClassFactoryMap.Get(csobj_query.GetCppInstanceTypeName());
						if (csobj_queryClassFactory != null)
						{
							csobj_query.Delegate = true;
							csobj_query = csobj_queryClassFactory.Create() as EarthView.World.Spatial2D.SpatialIndex.Data;
							csobj_query.BindNativeObject(query, "Data");
							csobj_query.Delegate = true;
						}
						EarthView.World.Spatial2D.SpatialIndex.Idvistor csobj_presultIDList = new EarthView.World.Spatial2D.SpatialIndex.Idvistor(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_presultIDList.BindNativeObject(presultIDList,"IDVistor");
						csobj_presultIDList.Delegate = true;
						IClassFactory csobj_presultIDListClassFactory = GlobalClassFactoryMap.Get(csobj_presultIDList.GetCppInstanceTypeName());
						if (csobj_presultIDListClassFactory != null)
						{
							csobj_presultIDList.Delegate = true;
							csobj_presultIDList = csobj_presultIDListClassFactory.Create() as EarthView.World.Spatial2D.SpatialIndex.Idvistor;
							csobj_presultIDList.BindNativeObject(presultIDList, "IDVistor");
							csobj_presultIDList.Delegate = true;
						}
						
						ContainsWhatQuery(csobj_query, ref csobj_presultIDList);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_containsWhatQuery_void_Data_IDVistor(IntPtr pNativeObject, IntPtr query, IntPtr presultIDList);

					///<summary>
					///数据包含查询,返回该查询窗口中所包含的feature之ID
					///</summary>
					///<param name="query">查询窗口</param>
					///<param name="presultIDList">featueID列表</param>
					public virtual void ContainsWhatQuery(EarthView.World.Spatial2D.SpatialIndex.Data query, ref  EarthView.World.Spatial2D.SpatialIndex.Idvistor presultIDList)
					{
						EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_containsWhatQuery_void_Data_IDVistor(this.NativeObject, object.Equals(query, null) ? IntPtr.Zero : query.NativeObject, object.Equals(presultIDList, null) ? IntPtr.Zero : presultIDList.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void intersectsWithQuery_CallBack_void_Data_IDVistor(IntPtr query, IntPtr presultIDList);

					protected intersectsWithQuery_CallBack_void_Data_IDVistor m_intersectsWithQuery_CallBack_void_Data_IDVistor;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_intersectsWithQuery_void_Data_IDVistor_NoVirtual(IntPtr pNativeObject, IntPtr query, IntPtr presultIDList);

					///<summary>
					///数据数据相交查询,返回与之相交的featrue之最小外接矩形之ID
					///不包括包含情况
					///</summary>
					///<param name="query">查询窗口</param>
					///<param name="presultIDList">featueID列表</param>
					public virtual void IntersectsWithQuery_NoVirtual(EarthView.World.Spatial2D.SpatialIndex.Data query, ref  EarthView.World.Spatial2D.SpatialIndex.Idvistor presultIDList)
					{
						EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_intersectsWithQuery_void_Data_IDVistor_NoVirtual(this.NativeObject, object.Equals(query, null) ? IntPtr.Zero : query.NativeObject, object.Equals(presultIDList, null) ? IntPtr.Zero : presultIDList.NativeObject);
						
					}

					protected  void EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_intersectsWithQuery_void_Data_IDVistor_Function(IntPtr query, IntPtr presultIDList)
					{
						EarthView.World.Spatial2D.SpatialIndex.Data csobj_query = new EarthView.World.Spatial2D.SpatialIndex.Data(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_query.BindNativeObject(query,"Data");
						csobj_query.Delegate = true;
						IClassFactory csobj_queryClassFactory = GlobalClassFactoryMap.Get(csobj_query.GetCppInstanceTypeName());
						if (csobj_queryClassFactory != null)
						{
							csobj_query.Delegate = true;
							csobj_query = csobj_queryClassFactory.Create() as EarthView.World.Spatial2D.SpatialIndex.Data;
							csobj_query.BindNativeObject(query, "Data");
							csobj_query.Delegate = true;
						}
						EarthView.World.Spatial2D.SpatialIndex.Idvistor csobj_presultIDList = new EarthView.World.Spatial2D.SpatialIndex.Idvistor(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_presultIDList.BindNativeObject(presultIDList,"IDVistor");
						csobj_presultIDList.Delegate = true;
						IClassFactory csobj_presultIDListClassFactory = GlobalClassFactoryMap.Get(csobj_presultIDList.GetCppInstanceTypeName());
						if (csobj_presultIDListClassFactory != null)
						{
							csobj_presultIDList.Delegate = true;
							csobj_presultIDList = csobj_presultIDListClassFactory.Create() as EarthView.World.Spatial2D.SpatialIndex.Idvistor;
							csobj_presultIDList.BindNativeObject(presultIDList, "IDVistor");
							csobj_presultIDList.Delegate = true;
						}
						
						IntersectsWithQuery(csobj_query, ref csobj_presultIDList);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_intersectsWithQuery_void_Data_IDVistor(IntPtr pNativeObject, IntPtr query, IntPtr presultIDList);

					///<summary>
					///数据数据相交查询,返回与之相交的featrue之最小外接矩形之ID
					///不包括包含情况
					///</summary>
					///<param name="query">查询窗口</param>
					///<param name="presultIDList">featueID列表</param>
					public virtual void IntersectsWithQuery(EarthView.World.Spatial2D.SpatialIndex.Data query, ref  EarthView.World.Spatial2D.SpatialIndex.Idvistor presultIDList)
					{
						EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_intersectsWithQuery_void_Data_IDVistor(this.NativeObject, object.Equals(query, null) ? IntPtr.Zero : query.NativeObject, object.Equals(presultIDList, null) ? IntPtr.Zero : presultIDList.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void pointLocationQuery_CallBack_void_Point2DF_IDVistor(IntPtr query, IntPtr presultIDList);

					protected pointLocationQuery_CallBack_void_Point2DF_IDVistor m_pointLocationQuery_CallBack_void_Point2DF_IDVistor;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_pointLocationQuery_void_Point2DF_IDVistor_NoVirtual(IntPtr pNativeObject, IntPtr query, IntPtr presultIDList);

					///<summary>
					///返回点落在某个feature时该feature之的ID
					///</summary>
					///<param name="query">查询点</param>
					///<param name="presultIDList">featueID列表,长度为零表示没有</param>
					public virtual void PointLocationQuery_NoVirtual(EarthView.World.Spatial2D.SpatialIndex.Point2DF query, ref  EarthView.World.Spatial2D.SpatialIndex.Idvistor presultIDList)
					{
						EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_pointLocationQuery_void_Point2DF_IDVistor_NoVirtual(this.NativeObject, object.Equals(query, null) ? IntPtr.Zero : query.NativeObject, object.Equals(presultIDList, null) ? IntPtr.Zero : presultIDList.NativeObject);
						
					}

					protected  void EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_pointLocationQuery_void_Point2DF_IDVistor_Function(IntPtr query, IntPtr presultIDList)
					{
						EarthView.World.Spatial2D.SpatialIndex.Point2DF csobj_query = new EarthView.World.Spatial2D.SpatialIndex.Point2DF(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_query.BindNativeObject(query,"Point2DF");
						csobj_query.Delegate = true;
						IClassFactory csobj_queryClassFactory = GlobalClassFactoryMap.Get(csobj_query.GetCppInstanceTypeName());
						if (csobj_queryClassFactory != null)
						{
							csobj_query.Delegate = true;
							csobj_query = csobj_queryClassFactory.Create() as EarthView.World.Spatial2D.SpatialIndex.Point2DF;
							csobj_query.BindNativeObject(query, "Point2DF");
							csobj_query.Delegate = true;
						}
						EarthView.World.Spatial2D.SpatialIndex.Idvistor csobj_presultIDList = new EarthView.World.Spatial2D.SpatialIndex.Idvistor(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_presultIDList.BindNativeObject(presultIDList,"IDVistor");
						csobj_presultIDList.Delegate = true;
						IClassFactory csobj_presultIDListClassFactory = GlobalClassFactoryMap.Get(csobj_presultIDList.GetCppInstanceTypeName());
						if (csobj_presultIDListClassFactory != null)
						{
							csobj_presultIDList.Delegate = true;
							csobj_presultIDList = csobj_presultIDListClassFactory.Create() as EarthView.World.Spatial2D.SpatialIndex.Idvistor;
							csobj_presultIDList.BindNativeObject(presultIDList, "IDVistor");
							csobj_presultIDList.Delegate = true;
						}
						
						PointLocationQuery(csobj_query, ref csobj_presultIDList);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_pointLocationQuery_void_Point2DF_IDVistor(IntPtr pNativeObject, IntPtr query, IntPtr presultIDList);

					///<summary>
					///返回点落在某个feature时该feature之的ID
					///</summary>
					///<param name="query">查询点</param>
					///<param name="presultIDList">featueID列表,长度为零表示没有</param>
					public virtual void PointLocationQuery(EarthView.World.Spatial2D.SpatialIndex.Point2DF query, ref  EarthView.World.Spatial2D.SpatialIndex.Idvistor presultIDList)
					{
						EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_pointLocationQuery_void_Point2DF_IDVistor(this.NativeObject, object.Equals(query, null) ? IntPtr.Zero : query.NativeObject, object.Equals(presultIDList, null) ? IntPtr.Zero : presultIDList.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void nearestNeighborQuery_CallBack_void_ev_real32_Data_IDVistor(float dfthreshold, IntPtr query, IntPtr presultIDList);

					protected nearestNeighborQuery_CallBack_void_ev_real32_Data_IDVistor m_nearestNeighborQuery_CallBack_void_ev_real32_Data_IDVistor;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_nearestNeighborQuery_void_ev_real32_Data_IDVistor_NoVirtual(IntPtr pNativeObject, float dfthreshold, IntPtr query, IntPtr presultIDList);

					///<summary>
					///与query距离小于dfthreshold之featureID
					///</summary>
					///<param name="dfthreshold">query中心外扩距离</param>
					///<param name="query">邻近查询</param>
					///<param name="presultIDList">featueID列表</param>
					public virtual void NearestNeighborQuery_NoVirtual(float dfthreshold, EarthView.World.Spatial2D.SpatialIndex.Data query, ref  EarthView.World.Spatial2D.SpatialIndex.Idvistor presultIDList)
					{
						EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_nearestNeighborQuery_void_ev_real32_Data_IDVistor_NoVirtual(this.NativeObject, dfthreshold, object.Equals(query, null) ? IntPtr.Zero : query.NativeObject, object.Equals(presultIDList, null) ? IntPtr.Zero : presultIDList.NativeObject);
						
					}

					protected  void EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_nearestNeighborQuery_void_ev_real32_Data_IDVistor_Function(float dfthreshold, IntPtr query, IntPtr presultIDList)
					{
						EarthView.World.Spatial2D.SpatialIndex.Data csobj_query = new EarthView.World.Spatial2D.SpatialIndex.Data(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_query.BindNativeObject(query,"Data");
						csobj_query.Delegate = true;
						IClassFactory csobj_queryClassFactory = GlobalClassFactoryMap.Get(csobj_query.GetCppInstanceTypeName());
						if (csobj_queryClassFactory != null)
						{
							csobj_query.Delegate = true;
							csobj_query = csobj_queryClassFactory.Create() as EarthView.World.Spatial2D.SpatialIndex.Data;
							csobj_query.BindNativeObject(query, "Data");
							csobj_query.Delegate = true;
						}
						EarthView.World.Spatial2D.SpatialIndex.Idvistor csobj_presultIDList = new EarthView.World.Spatial2D.SpatialIndex.Idvistor(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_presultIDList.BindNativeObject(presultIDList,"IDVistor");
						csobj_presultIDList.Delegate = true;
						IClassFactory csobj_presultIDListClassFactory = GlobalClassFactoryMap.Get(csobj_presultIDList.GetCppInstanceTypeName());
						if (csobj_presultIDListClassFactory != null)
						{
							csobj_presultIDList.Delegate = true;
							csobj_presultIDList = csobj_presultIDListClassFactory.Create() as EarthView.World.Spatial2D.SpatialIndex.Idvistor;
							csobj_presultIDList.BindNativeObject(presultIDList, "IDVistor");
							csobj_presultIDList.Delegate = true;
						}
						
						NearestNeighborQuery(dfthreshold, csobj_query, ref csobj_presultIDList);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_nearestNeighborQuery_void_ev_real32_Data_IDVistor(IntPtr pNativeObject, float dfthreshold, IntPtr query, IntPtr presultIDList);

					///<summary>
					///与query距离小于dfthreshold之featureID
					///</summary>
					///<param name="dfthreshold">query中心外扩距离</param>
					///<param name="query">邻近查询</param>
					///<param name="presultIDList">featueID列表</param>
					public virtual void NearestNeighborQuery(float dfthreshold, EarthView.World.Spatial2D.SpatialIndex.Data query, ref  EarthView.World.Spatial2D.SpatialIndex.Idvistor presultIDList)
					{
						EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_nearestNeighborQuery_void_ev_real32_Data_IDVistor(this.NativeObject, dfthreshold, object.Equals(query, null) ? IntPtr.Zero : query.NativeObject, object.Equals(presultIDList, null) ? IntPtr.Zero : presultIDList.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate int getIndexType_CallBack_SINDEXTYPE();

					protected getIndexType_CallBack_SINDEXTYPE m_getIndexType_CallBack_SINDEXTYPE;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_getIndexType_SINDEXTYPE_NoVirtual(IntPtr pNativeObject);

					///<summary>
					///获取索引类型
					///</summary>
					///<returns>索引类型</returns>
					public virtual EarthView.World.Spatial2D.SpatialIndex.SINDEXTYPE GetIndexType_NoVirtual()
					{
						int ret=EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_getIndexType_SINDEXTYPE_NoVirtual(this.NativeObject);
						
						return (EarthView.World.Spatial2D.SpatialIndex.SINDEXTYPE)ret;
						
					}

					protected  int EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_getIndexType_SINDEXTYPE_Function()
					{
						EarthView.World.Spatial2D.SpatialIndex.SINDEXTYPE csret=GetIndexType();
						
						return (int)csret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_getIndexType_SINDEXTYPE(IntPtr pNativeObject);

					///<summary>
					///获取索引类型
					///</summary>
					///<returns>索引类型</returns>
					public virtual EarthView.World.Spatial2D.SpatialIndex.SINDEXTYPE GetIndexType()
					{
						int ret=EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_getIndexType_SINDEXTYPE(this.NativeObject);
						
						return (EarthView.World.Spatial2D.SpatialIndex.SINDEXTYPE)ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void getStatistics_CallBack_void_ev_int32_ev_int32_ev_int32_ev_int32(ref int pnFeatureCount, ref int pnNodeCount, ref int pnMaxDepth, ref int pnMaxBucketCapacity);

					protected getStatistics_CallBack_void_ev_int32_ev_int32_ev_int32_ev_int32 m_getStatistics_CallBack_void_ev_int32_ev_int32_ev_int32_ev_int32;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_getStatistics_void_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(IntPtr pNativeObject, ref int pnFeatureCount, ref int pnNodeCount, ref int pnMaxDepth, ref int pnMaxBucketCapacity);

					///<summary>
					///获取根节点
					///</summary>
					///<returns>根接点</returns>
					///virtual const EarthView::World::Spatial2D::SpatialIndex::INode*getRootNode()const;
					///<summary>
					///获取统计信息
					///</summary>
					///<param name="pnFeatureCount">要素个数</param>
					///<param name="pnNodeCount">节点个数</param>
					///<param name="pnMaxDepth">树的深度</param>
					///<param name="pnMaxBucketCapacity">每个叶子节点最大要素个数</param>
					///<returns></returns>
					public virtual void GetStatistics_NoVirtual(ref int pnFeatureCount, ref int pnNodeCount, ref int pnMaxDepth, ref int pnMaxBucketCapacity)
					{
						EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_getStatistics_void_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(this.NativeObject, ref pnFeatureCount, ref pnNodeCount, ref pnMaxDepth, ref pnMaxBucketCapacity);
						
					}

					protected  void EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_getStatistics_void_ev_int32_ev_int32_ev_int32_ev_int32_Function(ref int pnFeatureCount, ref int pnNodeCount, ref int pnMaxDepth, ref int pnMaxBucketCapacity)
					{
						GetStatistics(ref pnFeatureCount, ref pnNodeCount, ref pnMaxDepth, ref pnMaxBucketCapacity);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_getStatistics_void_ev_int32_ev_int32_ev_int32_ev_int32(IntPtr pNativeObject, ref int pnFeatureCount, ref int pnNodeCount, ref int pnMaxDepth, ref int pnMaxBucketCapacity);

					///<summary>
					///获取根节点
					///</summary>
					///<returns>根接点</returns>
					///virtual const EarthView::World::Spatial2D::SpatialIndex::INode*getRootNode()const;
					///<summary>
					///获取统计信息
					///</summary>
					///<param name="pnFeatureCount">要素个数</param>
					///<param name="pnNodeCount">节点个数</param>
					///<param name="pnMaxDepth">树的深度</param>
					///<param name="pnMaxBucketCapacity">每个叶子节点最大要素个数</param>
					///<returns></returns>
					public virtual void GetStatistics(ref int pnFeatureCount, ref int pnNodeCount, ref int pnMaxDepth, ref int pnMaxBucketCapacity)
					{
						EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_getStatistics_void_ev_int32_ev_int32_ev_int32_ev_int32(this.NativeObject, ref pnFeatureCount, ref pnNodeCount, ref pnMaxDepth, ref pnMaxBucketCapacity);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadIspatialindex = LoadDll.Load("EV_SpatialIndex_d.dll");
							private static bool csbLoadIspatialindex = LoadDll.Load("EV_SpatialIndex_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadIspatialindex = LoadDll.Load("EV_SpatialIndex_d.so");
							private static bool csbLoadIspatialindex = LoadDll.Load("EV_SpatialIndex_CSharp_d.so");

						#else 
							private static bool bLoadIspatialindex = LoadDll.Load("EV_SpatialIndex_d.dll");
							private static bool csbLoadIspatialindex = LoadDll.Load("EV_SpatialIndex_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadIspatialindex = LoadDll.Load("EV_SpatialIndex.dll");
							private static bool csbLoadIspatialindex = LoadDll.Load("EV_SpatialIndex_CSharp.dll");

						#elif Linux 
							private static bool bLoadIspatialindex = LoadDll.Load("EV_SpatialIndex.so");
							private static bool csbLoadIspatialindex = LoadDll.Load("EV_SpatialIndex_CSharp.so");

						#else 
							private static bool bLoadIspatialindex = LoadDll.Load("EV_SpatialIndex.dll");
							private static bool csbLoadIspatialindex = LoadDll.Load("EV_SpatialIndex_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex", new IspatialindexClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::SpatialIndex::ISpatialIndexProxy", new IspatialindexClassFactory());

					public Ispatialindex(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_insertData_void_Data(IntPtr pObject, insertData_CallBack_void_Data pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_deleteData_void_Data(IntPtr pObject, deleteData_CallBack_void_Data pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_containsWhatQuery_void_Data_IDVistor(IntPtr pObject, containsWhatQuery_CallBack_void_Data_IDVistor pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_intersectsWithQuery_void_Data_IDVistor(IntPtr pObject, intersectsWithQuery_CallBack_void_Data_IDVistor pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_pointLocationQuery_void_Point2DF_IDVistor(IntPtr pObject, pointLocationQuery_CallBack_void_Point2DF_IDVistor pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_nearestNeighborQuery_void_ev_real32_Data_IDVistor(IntPtr pObject, nearestNeighborQuery_CallBack_void_ev_real32_Data_IDVistor pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_getIndexType_SINDEXTYPE(IntPtr pObject, getIndexType_CallBack_SINDEXTYPE pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_getStatistics_void_ev_int32_ev_int32_ev_int32_ev_int32(IntPtr pObject, getStatistics_CallBack_void_ev_int32_ev_int32_ev_int32_ev_int32 pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_insertData_CallBack_void_Data = EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_insertData_void_Data_Function;
							GC.KeepAlive(m_insertData_CallBack_void_Data);
							EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_insertData_void_Data(this.NativeObject, m_insertData_CallBack_void_Data);
							m_deleteData_CallBack_void_Data = EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_deleteData_void_Data_Function;
							GC.KeepAlive(m_deleteData_CallBack_void_Data);
							EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_deleteData_void_Data(this.NativeObject, m_deleteData_CallBack_void_Data);
							m_containsWhatQuery_CallBack_void_Data_IDVistor = EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_containsWhatQuery_void_Data_IDVistor_Function;
							GC.KeepAlive(m_containsWhatQuery_CallBack_void_Data_IDVistor);
							EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_containsWhatQuery_void_Data_IDVistor(this.NativeObject, m_containsWhatQuery_CallBack_void_Data_IDVistor);
							m_intersectsWithQuery_CallBack_void_Data_IDVistor = EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_intersectsWithQuery_void_Data_IDVistor_Function;
							GC.KeepAlive(m_intersectsWithQuery_CallBack_void_Data_IDVistor);
							EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_intersectsWithQuery_void_Data_IDVistor(this.NativeObject, m_intersectsWithQuery_CallBack_void_Data_IDVistor);
							m_pointLocationQuery_CallBack_void_Point2DF_IDVistor = EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_pointLocationQuery_void_Point2DF_IDVistor_Function;
							GC.KeepAlive(m_pointLocationQuery_CallBack_void_Point2DF_IDVistor);
							EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_pointLocationQuery_void_Point2DF_IDVistor(this.NativeObject, m_pointLocationQuery_CallBack_void_Point2DF_IDVistor);
							m_nearestNeighborQuery_CallBack_void_ev_real32_Data_IDVistor = EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_nearestNeighborQuery_void_ev_real32_Data_IDVistor_Function;
							GC.KeepAlive(m_nearestNeighborQuery_CallBack_void_ev_real32_Data_IDVistor);
							EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_nearestNeighborQuery_void_ev_real32_Data_IDVistor(this.NativeObject, m_nearestNeighborQuery_CallBack_void_ev_real32_Data_IDVistor);
							m_getIndexType_CallBack_SINDEXTYPE = EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_getIndexType_SINDEXTYPE_Function;
							GC.KeepAlive(m_getIndexType_CallBack_SINDEXTYPE);
							EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_getIndexType_SINDEXTYPE(this.NativeObject, m_getIndexType_CallBack_SINDEXTYPE);
							m_getStatistics_CallBack_void_ev_int32_ev_int32_ev_int32_ev_int32 = EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_getStatistics_void_ev_int32_ev_int32_ev_int32_ev_int32_Function;
							GC.KeepAlive(m_getStatistics_CallBack_void_ev_int32_ev_int32_ev_int32_ev_int32);
							EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_ISpatialIndex_getStatistics_void_ev_int32_ev_int32_ev_int32_ev_int32(this.NativeObject, m_getStatistics_CallBack_void_ev_int32_ev_int32_ev_int32_ev_int32);
						}
					}
					public static Ispatialindex FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Ispatialindex obj = baseObj as  Ispatialindex;
						if (object.Equals(obj, null))
						{
							obj = new Ispatialindex(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "ISpatialIndex");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class IspatialindexClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Ispatialindex emptyInstance = new Ispatialindex(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class Istoragemanager : EarthView.World.Core.AllocatedObject
				{
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr load_CallBack_ISpatialIndex_ev_char(IntPtr pFullpath);

					protected load_CallBack_ISpatialIndex_ev_char m_load_CallBack_ISpatialIndex_ev_char;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_SpatialIndex_IStorageManager_load_ISpatialIndex_ev_char_NoVirtual(IntPtr pNativeObject, IntPtr pFullpath);

					///<summary>
					///将空间索引文件导成内存空间索引
					///</summary>
					///<param name="pFullpath">指定文件路径</param>
					///<returns>空间索引句柄</returns>
					public virtual EarthView.World.Spatial2D.SpatialIndex.Ispatialindex Load_NoVirtual(IntPtr pFullpath)
					{
						IntPtr __ptr = EarthView_World_Spatial2D_SpatialIndex_IStorageManager_load_ISpatialIndex_ev_char_NoVirtual(this.NativeObject, pFullpath);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial2D.SpatialIndex.Ispatialindex csObj = new EarthView.World.Spatial2D.SpatialIndex.Ispatialindex(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ISpatialIndex");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial2D.SpatialIndex.Ispatialindex;
							csObj.BindNativeObject(__ptr, "ISpatialIndex");
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Spatial2D_SpatialIndex_IStorageManager_load_ISpatialIndex_ev_char_Function(IntPtr pFullpath)
					{
						EarthView.World.Spatial2D.SpatialIndex.Ispatialindex csret=Load(pFullpath);
						
						if (!object.Equals(csret, null))
						{
						    csret.Delegate = true;
						    return csret.NativeObject;
						}
						else
						{
						    return IntPtr.Zero;
						}
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_SpatialIndex_IStorageManager_load_ISpatialIndex_ev_char(IntPtr pNativeObject, IntPtr pFullpath);

					///<summary>
					///将空间索引文件导成内存空间索引
					///</summary>
					///<param name="pFullpath">指定文件路径</param>
					///<returns>空间索引句柄</returns>
					public virtual EarthView.World.Spatial2D.SpatialIndex.Ispatialindex Load(IntPtr pFullpath)
					{
						IntPtr __ptr = EarthView_World_Spatial2D_SpatialIndex_IStorageManager_load_ISpatialIndex_ev_char(this.NativeObject, pFullpath);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial2D.SpatialIndex.Ispatialindex csObj = new EarthView.World.Spatial2D.SpatialIndex.Ispatialindex(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ISpatialIndex");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial2D.SpatialIndex.Ispatialindex;
							csObj.BindNativeObject(__ptr, "ISpatialIndex");
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte save_CallBack_ev_bool_ISpatialIndex_ev_char(IntPtr hSpatialIndex, IntPtr pFilepath);

					protected save_CallBack_ev_bool_ISpatialIndex_ev_char m_save_CallBack_ev_bool_ISpatialIndex_ev_char;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_SpatialIndex_IStorageManager_save_ev_bool_ISpatialIndex_ev_char_NoVirtual(IntPtr pNativeObject, IntPtr hSpatialIndex, IntPtr pFilepath);

					///<summary>
					///将空间索引文件导成内存空间索引
					///</summary>
					///<param name="pFullpath">指定文件路径</param>
					///<returns>0,保存成功，1保存失败</returns>
					public virtual bool Save_NoVirtual(EarthView.World.Spatial2D.SpatialIndex.Ispatialindex hSpatialIndex, IntPtr pFilepath)
					{
						byte ret=EarthView_World_Spatial2D_SpatialIndex_IStorageManager_save_ev_bool_ISpatialIndex_ev_char_NoVirtual(this.NativeObject, object.Equals(hSpatialIndex, null) ? IntPtr.Zero : hSpatialIndex.NativeObject, pFilepath);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial2D_SpatialIndex_IStorageManager_save_ev_bool_ISpatialIndex_ev_char_Function(IntPtr hSpatialIndex, IntPtr pFilepath)
					{
						EarthView.World.Spatial2D.SpatialIndex.Ispatialindex csobj_hSpatialIndex = new EarthView.World.Spatial2D.SpatialIndex.Ispatialindex(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_hSpatialIndex.BindNativeObject(hSpatialIndex,"ISpatialIndex");
						csobj_hSpatialIndex.Delegate = true;
						IClassFactory csobj_hSpatialIndexClassFactory = GlobalClassFactoryMap.Get(csobj_hSpatialIndex.GetCppInstanceTypeName());
						if (csobj_hSpatialIndexClassFactory != null)
						{
							csobj_hSpatialIndex.Delegate = true;
							csobj_hSpatialIndex = csobj_hSpatialIndexClassFactory.Create() as EarthView.World.Spatial2D.SpatialIndex.Ispatialindex;
							csobj_hSpatialIndex.BindNativeObject(hSpatialIndex, "ISpatialIndex");
							csobj_hSpatialIndex.Delegate = true;
						}
						
						bool csret=Save(csobj_hSpatialIndex, pFilepath);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_SpatialIndex_IStorageManager_save_ev_bool_ISpatialIndex_ev_char(IntPtr pNativeObject, IntPtr hSpatialIndex, IntPtr pFilepath);

					///<summary>
					///将空间索引文件导成内存空间索引
					///</summary>
					///<param name="pFullpath">指定文件路径</param>
					///<returns>0,保存成功，1保存失败</returns>
					public virtual bool Save(EarthView.World.Spatial2D.SpatialIndex.Ispatialindex hSpatialIndex, IntPtr pFilepath)
					{
						byte ret=EarthView_World_Spatial2D_SpatialIndex_IStorageManager_save_ev_bool_ISpatialIndex_ev_char(this.NativeObject, object.Equals(hSpatialIndex, null) ? IntPtr.Zero : hSpatialIndex.NativeObject, pFilepath);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr load_CallBack_ISpatialIndex_CDataStream(IntPtr stream);

					protected load_CallBack_ISpatialIndex_CDataStream m_load_CallBack_ISpatialIndex_CDataStream;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_SpatialIndex_IStorageManager_load_ISpatialIndex_CDataStream_NoVirtual(IntPtr pNativeObject, IntPtr stream);

					///<summary>
					///从内存流创建空间索引
					///</summary>
					///<param name="stream">流引用</param>
					///<returns>空间索引句柄</returns>
					public virtual EarthView.World.Spatial2D.SpatialIndex.Ispatialindex Load_NoVirtual(EarthView.World.Core.DataStream stream)
					{
						IntPtr __ptr = EarthView_World_Spatial2D_SpatialIndex_IStorageManager_load_ISpatialIndex_CDataStream_NoVirtual(this.NativeObject, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial2D.SpatialIndex.Ispatialindex csObj = new EarthView.World.Spatial2D.SpatialIndex.Ispatialindex(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ISpatialIndex");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial2D.SpatialIndex.Ispatialindex;
							csObj.BindNativeObject(__ptr, "ISpatialIndex");
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Spatial2D_SpatialIndex_IStorageManager_load_ISpatialIndex_CDataStream_Function(IntPtr stream)
					{
						EarthView.World.Core.DataStream csobj_stream = new EarthView.World.Core.DataStream(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_stream.BindNativeObject(stream,"CDataStream");
						csobj_stream.Delegate = true;
						IClassFactory csobj_streamClassFactory = GlobalClassFactoryMap.Get(csobj_stream.GetCppInstanceTypeName());
						if (csobj_streamClassFactory != null)
						{
							csobj_stream.Delegate = true;
							csobj_stream = csobj_streamClassFactory.Create() as EarthView.World.Core.DataStream;
							csobj_stream.BindNativeObject(stream, "CDataStream");
							csobj_stream.Delegate = true;
						}
						
						EarthView.World.Spatial2D.SpatialIndex.Ispatialindex csret=Load(csobj_stream);
						
						if (!object.Equals(csret, null))
						{
						    csret.Delegate = true;
						    return csret.NativeObject;
						}
						else
						{
						    return IntPtr.Zero;
						}
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_SpatialIndex_IStorageManager_load_ISpatialIndex_CDataStream(IntPtr pNativeObject, IntPtr stream);

					///<summary>
					///从内存流创建空间索引
					///</summary>
					///<param name="stream">流引用</param>
					///<returns>空间索引句柄</returns>
					public virtual EarthView.World.Spatial2D.SpatialIndex.Ispatialindex Load(EarthView.World.Core.DataStream stream)
					{
						IntPtr __ptr = EarthView_World_Spatial2D_SpatialIndex_IStorageManager_load_ISpatialIndex_CDataStream(this.NativeObject, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial2D.SpatialIndex.Ispatialindex csObj = new EarthView.World.Spatial2D.SpatialIndex.Ispatialindex(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ISpatialIndex");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial2D.SpatialIndex.Ispatialindex;
							csObj.BindNativeObject(__ptr, "ISpatialIndex");
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte save_CallBack_ev_bool_ISpatialIndex_CDataStream(IntPtr hSpatialIndex, IntPtr stream);

					protected save_CallBack_ev_bool_ISpatialIndex_CDataStream m_save_CallBack_ev_bool_ISpatialIndex_CDataStream;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_SpatialIndex_IStorageManager_save_ev_bool_ISpatialIndex_CDataStream_NoVirtual(IntPtr pNativeObject, IntPtr hSpatialIndex, IntPtr stream);

					///<summary>
					///将空间索引导成流
					///</summary>
					///<param name="stream">流引用</param>
					///<returns>0,保存成功，1保存失败</returns>
					public virtual bool Save_NoVirtual(EarthView.World.Spatial2D.SpatialIndex.Ispatialindex hSpatialIndex, ref EarthView.World.Core.DataStream stream)
					{
						byte ret=EarthView_World_Spatial2D_SpatialIndex_IStorageManager_save_ev_bool_ISpatialIndex_CDataStream_NoVirtual(this.NativeObject, object.Equals(hSpatialIndex, null) ? IntPtr.Zero : hSpatialIndex.NativeObject, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial2D_SpatialIndex_IStorageManager_save_ev_bool_ISpatialIndex_CDataStream_Function(IntPtr hSpatialIndex, IntPtr stream)
					{
						EarthView.World.Spatial2D.SpatialIndex.Ispatialindex csobj_hSpatialIndex = new EarthView.World.Spatial2D.SpatialIndex.Ispatialindex(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_hSpatialIndex.BindNativeObject(hSpatialIndex,"ISpatialIndex");
						csobj_hSpatialIndex.Delegate = true;
						IClassFactory csobj_hSpatialIndexClassFactory = GlobalClassFactoryMap.Get(csobj_hSpatialIndex.GetCppInstanceTypeName());
						if (csobj_hSpatialIndexClassFactory != null)
						{
							csobj_hSpatialIndex.Delegate = true;
							csobj_hSpatialIndex = csobj_hSpatialIndexClassFactory.Create() as EarthView.World.Spatial2D.SpatialIndex.Ispatialindex;
							csobj_hSpatialIndex.BindNativeObject(hSpatialIndex, "ISpatialIndex");
							csobj_hSpatialIndex.Delegate = true;
						}
						EarthView.World.Core.DataStream csobj_stream = new EarthView.World.Core.DataStream(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_stream.BindNativeObject(stream,"CDataStream");
						csobj_stream.Delegate = true;
						IClassFactory csobj_streamClassFactory = GlobalClassFactoryMap.Get(csobj_stream.GetCppInstanceTypeName());
						if (csobj_streamClassFactory != null)
						{
							csobj_stream.Delegate = true;
							csobj_stream = csobj_streamClassFactory.Create() as EarthView.World.Core.DataStream;
							csobj_stream.BindNativeObject(stream, "CDataStream");
							csobj_stream.Delegate = true;
						}
						
						bool csret=Save(csobj_hSpatialIndex, ref csobj_stream);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_SpatialIndex_IStorageManager_save_ev_bool_ISpatialIndex_CDataStream(IntPtr pNativeObject, IntPtr hSpatialIndex, IntPtr stream);

					///<summary>
					///将空间索引导成流
					///</summary>
					///<param name="stream">流引用</param>
					///<returns>0,保存成功，1保存失败</returns>
					public virtual bool Save(EarthView.World.Spatial2D.SpatialIndex.Ispatialindex hSpatialIndex, ref EarthView.World.Core.DataStream stream)
					{
						byte ret=EarthView_World_Spatial2D_SpatialIndex_IStorageManager_save_ev_bool_ISpatialIndex_CDataStream(this.NativeObject, object.Equals(hSpatialIndex, null) ? IntPtr.Zero : hSpatialIndex.NativeObject, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte saveAllNodes_CallBack_ev_bool_ISpatialIndex_CDataStream(IntPtr hSpatialIndex, IntPtr stream);

					protected saveAllNodes_CallBack_ev_bool_ISpatialIndex_CDataStream m_saveAllNodes_CallBack_ev_bool_ISpatialIndex_CDataStream;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_SpatialIndex_IStorageManager_saveAllNodes_ev_bool_ISpatialIndex_CDataStream_NoVirtual(IntPtr pNativeObject, IntPtr hSpatialIndex, IntPtr stream);

					///<summary>
					///保存所有的节点信息
					///</summary>
					///<param name="hSpatialIndex">空间索引对象</param>
					///<returns>保存成功，返回true，失败，返回false
					public virtual bool SaveAllNodes_NoVirtual(EarthView.World.Spatial2D.SpatialIndex.Ispatialindex hSpatialIndex, ref EarthView.World.Core.DataStream stream)
					{
						byte ret=EarthView_World_Spatial2D_SpatialIndex_IStorageManager_saveAllNodes_ev_bool_ISpatialIndex_CDataStream_NoVirtual(this.NativeObject, object.Equals(hSpatialIndex, null) ? IntPtr.Zero : hSpatialIndex.NativeObject, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial2D_SpatialIndex_IStorageManager_saveAllNodes_ev_bool_ISpatialIndex_CDataStream_Function(IntPtr hSpatialIndex, IntPtr stream)
					{
						EarthView.World.Spatial2D.SpatialIndex.Ispatialindex csobj_hSpatialIndex = new EarthView.World.Spatial2D.SpatialIndex.Ispatialindex(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_hSpatialIndex.BindNativeObject(hSpatialIndex,"ISpatialIndex");
						csobj_hSpatialIndex.Delegate = true;
						IClassFactory csobj_hSpatialIndexClassFactory = GlobalClassFactoryMap.Get(csobj_hSpatialIndex.GetCppInstanceTypeName());
						if (csobj_hSpatialIndexClassFactory != null)
						{
							csobj_hSpatialIndex.Delegate = true;
							csobj_hSpatialIndex = csobj_hSpatialIndexClassFactory.Create() as EarthView.World.Spatial2D.SpatialIndex.Ispatialindex;
							csobj_hSpatialIndex.BindNativeObject(hSpatialIndex, "ISpatialIndex");
							csobj_hSpatialIndex.Delegate = true;
						}
						EarthView.World.Core.DataStream csobj_stream = new EarthView.World.Core.DataStream(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_stream.BindNativeObject(stream,"CDataStream");
						csobj_stream.Delegate = true;
						IClassFactory csobj_streamClassFactory = GlobalClassFactoryMap.Get(csobj_stream.GetCppInstanceTypeName());
						if (csobj_streamClassFactory != null)
						{
							csobj_stream.Delegate = true;
							csobj_stream = csobj_streamClassFactory.Create() as EarthView.World.Core.DataStream;
							csobj_stream.BindNativeObject(stream, "CDataStream");
							csobj_stream.Delegate = true;
						}
						
						bool csret=SaveAllNodes(csobj_hSpatialIndex, ref csobj_stream);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_SpatialIndex_IStorageManager_saveAllNodes_ev_bool_ISpatialIndex_CDataStream(IntPtr pNativeObject, IntPtr hSpatialIndex, IntPtr stream);

					///<summary>
					///保存所有的节点信息
					///</summary>
					///<param name="hSpatialIndex">空间索引对象</param>
					///<returns>保存成功，返回true，失败，返回false
					public virtual bool SaveAllNodes(EarthView.World.Spatial2D.SpatialIndex.Ispatialindex hSpatialIndex, ref EarthView.World.Core.DataStream stream)
					{
						byte ret=EarthView_World_Spatial2D_SpatialIndex_IStorageManager_saveAllNodes_ev_bool_ISpatialIndex_CDataStream(this.NativeObject, object.Equals(hSpatialIndex, null) ? IntPtr.Zero : hSpatialIndex.NativeObject, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate int getDriverType_CallBack_DRIVERTYPE();

					protected getDriverType_CallBack_DRIVERTYPE m_getDriverType_CallBack_DRIVERTYPE;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial2D_SpatialIndex_IStorageManager_getDriverType_DRIVERTYPE_NoVirtual(IntPtr pNativeObject);

					///<summary>
					///存储类型
					///</summary>
					///<returns>0,文件，1内存流</returns>
					public virtual EarthView.World.Spatial2D.SpatialIndex.DRIVERTYPE GetDriverType_NoVirtual()
					{
						int ret=EarthView_World_Spatial2D_SpatialIndex_IStorageManager_getDriverType_DRIVERTYPE_NoVirtual(this.NativeObject);
						
						return (EarthView.World.Spatial2D.SpatialIndex.DRIVERTYPE)ret;
						
					}

					protected  int EarthView_World_Spatial2D_SpatialIndex_IStorageManager_getDriverType_DRIVERTYPE_Function()
					{
						EarthView.World.Spatial2D.SpatialIndex.DRIVERTYPE csret=GetDriverType();
						
						return (int)csret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial2D_SpatialIndex_IStorageManager_getDriverType_DRIVERTYPE(IntPtr pNativeObject);

					///<summary>
					///存储类型
					///</summary>
					///<returns>0,文件，1内存流</returns>
					public virtual EarthView.World.Spatial2D.SpatialIndex.DRIVERTYPE GetDriverType()
					{
						int ret=EarthView_World_Spatial2D_SpatialIndex_IStorageManager_getDriverType_DRIVERTYPE(this.NativeObject);
						
						return (EarthView.World.Spatial2D.SpatialIndex.DRIVERTYPE)ret;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadIstoragemanager = LoadDll.Load("EV_SpatialIndex_d.dll");
							private static bool csbLoadIstoragemanager = LoadDll.Load("EV_SpatialIndex_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadIstoragemanager = LoadDll.Load("EV_SpatialIndex_d.so");
							private static bool csbLoadIstoragemanager = LoadDll.Load("EV_SpatialIndex_CSharp_d.so");

						#else 
							private static bool bLoadIstoragemanager = LoadDll.Load("EV_SpatialIndex_d.dll");
							private static bool csbLoadIstoragemanager = LoadDll.Load("EV_SpatialIndex_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadIstoragemanager = LoadDll.Load("EV_SpatialIndex.dll");
							private static bool csbLoadIstoragemanager = LoadDll.Load("EV_SpatialIndex_CSharp.dll");

						#elif Linux 
							private static bool bLoadIstoragemanager = LoadDll.Load("EV_SpatialIndex.so");
							private static bool csbLoadIstoragemanager = LoadDll.Load("EV_SpatialIndex_CSharp.so");

						#else 
							private static bool bLoadIstoragemanager = LoadDll.Load("EV_SpatialIndex.dll");
							private static bool csbLoadIstoragemanager = LoadDll.Load("EV_SpatialIndex_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::SpatialIndex::IStorageManager", new IstoragemanagerClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::SpatialIndex::IStorageManagerProxy", new IstoragemanagerClassFactory());

					public Istoragemanager(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_load_ISpatialIndex_ev_char(IntPtr pObject, load_CallBack_ISpatialIndex_ev_char pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_save_ev_bool_ISpatialIndex_ev_char(IntPtr pObject, save_CallBack_ev_bool_ISpatialIndex_ev_char pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_load_ISpatialIndex_CDataStream(IntPtr pObject, load_CallBack_ISpatialIndex_CDataStream pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_save_ev_bool_ISpatialIndex_CDataStream(IntPtr pObject, save_CallBack_ev_bool_ISpatialIndex_CDataStream pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_saveAllNodes_ev_bool_ISpatialIndex_CDataStream(IntPtr pObject, saveAllNodes_CallBack_ev_bool_ISpatialIndex_CDataStream pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialIndex_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_getDriverType_DRIVERTYPE(IntPtr pObject, getDriverType_CallBack_DRIVERTYPE pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_load_CallBack_ISpatialIndex_ev_char = EarthView_World_Spatial2D_SpatialIndex_IStorageManager_load_ISpatialIndex_ev_char_Function;
							GC.KeepAlive(m_load_CallBack_ISpatialIndex_ev_char);
							EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_load_ISpatialIndex_ev_char(this.NativeObject, m_load_CallBack_ISpatialIndex_ev_char);
							m_save_CallBack_ev_bool_ISpatialIndex_ev_char = EarthView_World_Spatial2D_SpatialIndex_IStorageManager_save_ev_bool_ISpatialIndex_ev_char_Function;
							GC.KeepAlive(m_save_CallBack_ev_bool_ISpatialIndex_ev_char);
							EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_save_ev_bool_ISpatialIndex_ev_char(this.NativeObject, m_save_CallBack_ev_bool_ISpatialIndex_ev_char);
							m_load_CallBack_ISpatialIndex_CDataStream = EarthView_World_Spatial2D_SpatialIndex_IStorageManager_load_ISpatialIndex_CDataStream_Function;
							GC.KeepAlive(m_load_CallBack_ISpatialIndex_CDataStream);
							EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_load_ISpatialIndex_CDataStream(this.NativeObject, m_load_CallBack_ISpatialIndex_CDataStream);
							m_save_CallBack_ev_bool_ISpatialIndex_CDataStream = EarthView_World_Spatial2D_SpatialIndex_IStorageManager_save_ev_bool_ISpatialIndex_CDataStream_Function;
							GC.KeepAlive(m_save_CallBack_ev_bool_ISpatialIndex_CDataStream);
							EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_save_ev_bool_ISpatialIndex_CDataStream(this.NativeObject, m_save_CallBack_ev_bool_ISpatialIndex_CDataStream);
							m_saveAllNodes_CallBack_ev_bool_ISpatialIndex_CDataStream = EarthView_World_Spatial2D_SpatialIndex_IStorageManager_saveAllNodes_ev_bool_ISpatialIndex_CDataStream_Function;
							GC.KeepAlive(m_saveAllNodes_CallBack_ev_bool_ISpatialIndex_CDataStream);
							EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_saveAllNodes_ev_bool_ISpatialIndex_CDataStream(this.NativeObject, m_saveAllNodes_CallBack_ev_bool_ISpatialIndex_CDataStream);
							m_getDriverType_CallBack_DRIVERTYPE = EarthView_World_Spatial2D_SpatialIndex_IStorageManager_getDriverType_DRIVERTYPE_Function;
							GC.KeepAlive(m_getDriverType_CallBack_DRIVERTYPE);
							EV_RegisterCallback_EarthView_World_Spatial2D_SpatialIndex_IStorageManager_getDriverType_DRIVERTYPE(this.NativeObject, m_getDriverType_CallBack_DRIVERTYPE);
						}
					}
					public static Istoragemanager FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Istoragemanager obj = baseObj as  Istoragemanager;
						if (object.Equals(obj, null))
						{
							obj = new Istoragemanager(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "IStorageManager");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class IstoragemanagerClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Istoragemanager emptyInstance = new Istoragemanager(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
