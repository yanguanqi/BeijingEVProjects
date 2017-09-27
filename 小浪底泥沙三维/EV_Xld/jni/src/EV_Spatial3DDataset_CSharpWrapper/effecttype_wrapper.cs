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
			namespace Dataset
			{
				/// <summary>
				/// 数据集节点树类
				/// </summary>
				public class EffectUserTypeTree : EarthView.World.Core.AllocatedObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public EffectUserTypeTree() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CEffectUserTypeTree",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="code">用户自定义特效分类编码</param>
					/// <param name="name">名称</param>
					/// <returns></returns>
					public EffectUserTypeTree(string code, string name) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuecode = new BasePtr(code);
						list.Add("code", valuecode.PtrVal);
						BasePtr valuename = new BasePtr(name);
						list.Add("name", valuename.PtrVal);
						Create("CEffectUserTypeTree", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern uint EarthView_World_Spatial3D_Dataset_CEffectUserTypeTree_getChildNum_ev_uint32(IntPtr pNativeObject);

					/// <summary>
					/// 获取子节点数目
					/// </summary>
					/// <param name=""></param>
					/// <returns>节点数目</returns>
					public uint GetChildNum()
					{
						uint ret=EarthView_World_Spatial3D_Dataset_CEffectUserTypeTree_getChildNum_ev_uint32(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Dataset_CEffectUserTypeTree_getChild_CEffectUserTypeTree_ev_uint32(IntPtr pNativeObject, uint index);

					/// <summary>
					/// 获取子节点
					/// </summary>
					/// <param name="index">索引值</param>
					/// <returns>子节点</returns>
					public EarthView.World.Spatial3D.Dataset.EffectUserTypeTree GetChild(uint index)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Dataset_CEffectUserTypeTree_getChild_CEffectUserTypeTree_ev_uint32(this.NativeObject, index);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Dataset.EffectUserTypeTree csObj = new EarthView.World.Spatial3D.Dataset.EffectUserTypeTree(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CEffectUserTypeTree");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Dataset.EffectUserTypeTree;
							csObj.BindNativeObject(__ptr, "CEffectUserTypeTree");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern uint EarthView_World_Spatial3D_Dataset_CEffectUserTypeTree_getEffectInfoNum_ev_uint32(IntPtr pNativeObject);

					/// <summary>
					/// 获取特效数目
					/// </summary>
					/// <param name=""></param>
					/// <returns>特效数目</returns>
					public uint GetEffectInfoNum()
					{
						uint ret=EarthView_World_Spatial3D_Dataset_CEffectUserTypeTree_getEffectInfoNum_ev_uint32(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Dataset_CEffectUserTypeTree_getEffectInfo_CEffectInfo_ev_uint32(IntPtr pNativeObject, uint index);

					/// <summary>
					/// 获取特效信息
					/// </summary>
					/// <param name="index">索引值</param>
					/// <returns>特效信息</returns>
					public EarthView.World.Spatial3D.Dataset.EffectInfo GetEffectInfo(uint index)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Dataset_CEffectUserTypeTree_getEffectInfo_CEffectInfo_ev_uint32(this.NativeObject, index);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Dataset.EffectInfo csObj = new EarthView.World.Spatial3D.Dataset.EffectInfo(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CEffectInfo");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Dataset.EffectInfo;
							csObj.BindNativeObject(__ptr, "CEffectInfo");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Dataset_CEffectUserTypeTree_getInfo_CEffectUserTypeInfo(IntPtr pNativeObject);

					/// <summary>
					/// 获取节点信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>节点信息</returns>
					public EarthView.World.Spatial3D.Dataset.EffectUserTypeInfo GetInfo()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Dataset_CEffectUserTypeTree_getInfo_CEffectUserTypeInfo(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Dataset.EffectUserTypeInfo csObj = new EarthView.World.Spatial3D.Dataset.EffectUserTypeInfo(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CEffectUserTypeInfo");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Dataset.EffectUserTypeInfo;
							csObj.BindNativeObject(__ptr, "CEffectUserTypeInfo");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Dataset_CEffectUserTypeTree_setInfo_void_CEffectUserTypeInfo(IntPtr pNativeObject, IntPtr typeInfo);

					/// <summary>
					/// 设置类型信息
					/// </summary>
					/// <param name="typeInfo">类型信息</param>
					/// <returns></returns>
					public void SetInfo(EarthView.World.Spatial3D.Dataset.EffectUserTypeInfo typeInfo)
					{
						EarthView_World_Spatial3D_Dataset_CEffectUserTypeTree_setInfo_void_CEffectUserTypeInfo(this.NativeObject, object.Equals(typeInfo, null) ? IntPtr.Zero : typeInfo.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Dataset_CEffectUserTypeTree_addChild_void_CEffectUserTypeTree(IntPtr pNativeObject, IntPtr ref_node);

					/// <summary>
					/// 添加子节点
					/// </summary>
					/// <param name="ref_node">子节点</param>
					/// <returns></returns>
					public void AddChild(EarthView.World.Spatial3D.Dataset.EffectUserTypeTree ref_node)
					{
						EarthView_World_Spatial3D_Dataset_CEffectUserTypeTree_addChild_void_CEffectUserTypeTree(this.NativeObject, object.Equals(ref_node, null) ? IntPtr.Zero : ref_node.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadEffectUserTypeTree = LoadDll.Load("EV_Spatial3DDataset_d.dll");
							private static bool csbLoadEffectUserTypeTree = LoadDll.Load("EV_Spatial3DDataset_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadEffectUserTypeTree = LoadDll.Load("EV_Spatial3DDataset_d.so");
							private static bool csbLoadEffectUserTypeTree = LoadDll.Load("EV_Spatial3DDataset_CSharp_d.so");

						#else 
							private static bool bLoadEffectUserTypeTree = LoadDll.Load("EV_Spatial3DDataset_d.dll");
							private static bool csbLoadEffectUserTypeTree = LoadDll.Load("EV_Spatial3DDataset_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadEffectUserTypeTree = LoadDll.Load("EV_Spatial3DDataset.dll");
							private static bool csbLoadEffectUserTypeTree = LoadDll.Load("EV_Spatial3DDataset_CSharp.dll");

						#elif Linux 
							private static bool bLoadEffectUserTypeTree = LoadDll.Load("EV_Spatial3DDataset.so");
							private static bool csbLoadEffectUserTypeTree = LoadDll.Load("EV_Spatial3DDataset_CSharp.so");

						#else 
							private static bool bLoadEffectUserTypeTree = LoadDll.Load("EV_Spatial3DDataset.dll");
							private static bool csbLoadEffectUserTypeTree = LoadDll.Load("EV_Spatial3DDataset_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree", new EffectUserTypeTreeClassFactory());

					public EffectUserTypeTree(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static EffectUserTypeTree FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						EffectUserTypeTree obj = baseObj as  EffectUserTypeTree;
						if (object.Equals(obj, null))
						{
							obj = new EffectUserTypeTree(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CEffectUserTypeTree");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class EffectUserTypeTreeClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						EffectUserTypeTree emptyInstance = new EffectUserTypeTree(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
